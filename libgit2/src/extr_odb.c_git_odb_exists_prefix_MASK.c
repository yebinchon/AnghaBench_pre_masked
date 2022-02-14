
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int member_0; } ;
struct TYPE_14__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ const git_oid ;
typedef int git_odb ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,TYPE_2__ const*,size_t) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__ const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__ const*,TYPE_2__ const*,size_t) ;
 int FUNC_6 (TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_7 (TYPE_2__ const*,int *,TYPE_2__ const*,size_t,int) ;

int FUNC_8(
 git_oid *VAR_3, git_odb *VAR_4, const git_oid *VAR_5, size_t VAR_6)
{
 int VAR_7;
 git_oid VAR_8 = {{0}};

 FUNC_0(VAR_4 && VAR_5);

 if (VAR_6 < VAR_2)
  return FUNC_1("prefix length too short");

 if (VAR_6 >= VAR_1) {
  if (FUNC_3(VAR_4, VAR_5)) {
   if (VAR_3)
    FUNC_6(VAR_3, VAR_5);
   return 0;
  } else {
   return FUNC_2(
    "no match for id prefix", VAR_5, VAR_6);
  }
 }

 FUNC_5(&VAR_8, VAR_5, VAR_6);

 VAR_7 = FUNC_7(VAR_3, VAR_4, &VAR_8, VAR_6, 0);

 if (VAR_7 == VAR_0 && !FUNC_4(VAR_4))
  VAR_7 = FUNC_7(VAR_3, VAR_4, &VAR_8, VAR_6, 1);

 if (VAR_7 == VAR_0)
  return FUNC_2("no match for id prefix", &VAR_8, VAR_6);

 return VAR_7;
}
