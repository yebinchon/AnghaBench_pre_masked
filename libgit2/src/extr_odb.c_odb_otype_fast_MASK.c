
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_1__ cached; } ;
typedef TYPE_2__ git_odb_object ;
typedef int git_odb ;
typedef int git_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* FUNC_1 (int ,int const*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__**,int *,int const*,int) ;
 int FUNC_6 (size_t*,int *,int *,int const*,int) ;

__attribute__((used)) static int FUNC_7(git_object_t *VAR_2, git_odb *VAR_3, const git_oid *VAR_4)
{
 git_odb_object *VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_4))
  return FUNC_0(VAR_0, "cannot get object type");

 if ((VAR_5 = FUNC_1(FUNC_4(VAR_3), VAR_4)) != ((void*)0)) {
  *VAR_2 = VAR_5->cached.type;
  FUNC_2(VAR_5);
  return 0;
 }

 VAR_7 = FUNC_6(&VAR_6, VAR_2, VAR_3, VAR_4, 0);

 if (VAR_7 == VAR_1) {
  VAR_7 = FUNC_5(&VAR_5, VAR_3, VAR_4, 0);
  if (!VAR_7)
   *VAR_2 = VAR_5->cached.type;
  FUNC_2(VAR_5);
 }

 return VAR_7;
}
