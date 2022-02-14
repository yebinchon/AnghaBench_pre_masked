
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
struct TYPE_6__ {char const* path; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,char*,char const*,int) ;
 scalar_t__ FUNC_3 (size_t*,int *,char const*,int ,int) ;
 int FUNC_4 (int *,size_t) ;

int FUNC_5(git_index *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 git_index_entry VAR_7 = { 0 };

 VAR_7.path = VAR_3;
 FUNC_1(&VAR_7, VAR_4);

 FUNC_0(VAR_2, &VAR_7);

 if (FUNC_3(&VAR_6, VAR_2, VAR_3, 0, VAR_4) < 0) {
  FUNC_2(
   VAR_1, "index does not contain %s at stage %d", VAR_3, VAR_4);
  VAR_5 = VAR_0;
 } else {
  VAR_5 = FUNC_4(VAR_2, VAR_6);
 }

 return VAR_5;
}
