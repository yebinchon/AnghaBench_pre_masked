
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int ,char*,char*,TYPE_1__*) ;
 int FUNC_2 (int **,int ,char*,char*,TYPE_1__*) ;
 int VAR_3 ;

void FUNC_3(void)
{
 git_index *VAR_4;
 git_merge_options VAR_5 = VAR_2;

 VAR_5.flags |= VAR_1;

 FUNC_0(VAR_0,
  FUNC_2(&VAR_4, VAR_3, "df_side1", "df_side2", &VAR_5));

 FUNC_0(VAR_0,
  FUNC_1(&VAR_4, VAR_3, "master", "unrelated", &VAR_5));
 FUNC_0(VAR_0,
  FUNC_1(&VAR_4, VAR_3, "master", "branch", &VAR_5));
}
