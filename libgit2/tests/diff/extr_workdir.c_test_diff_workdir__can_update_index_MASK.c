
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_7__ {int oid_calculations; int stat_calls; } ;
typedef TYPE_1__ git_diff_perfdata ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int **,TYPE_2__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *,int ,int ,int *) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;

void FUNC_11(void)
{
 git_diff_options VAR_8 = VAR_3;
 git_diff *VAR_9 = ((void*)0);
 git_diff_perfdata VAR_10 = VAR_4;
 git_index *VAR_11;

 VAR_6 = FUNC_3("status");


 {
  git_buf VAR_12 = VAR_0;
  FUNC_2(FUNC_5(&VAR_12, "status"));
  FUNC_2(FUNC_8(&VAR_12, 0, VAR_7, ((void*)0)));
  FUNC_4(&VAR_12);
 }

 VAR_8.flags |= VAR_1 | VAR_2;

 FUNC_0(&VAR_9, &VAR_8);

 FUNC_2(FUNC_7(&VAR_10, VAR_9));
 FUNC_1(13 + 3, VAR_10.stat_calls);
 FUNC_1(5, VAR_10.oid_calculations);

 FUNC_6(VAR_9);


 VAR_8.flags |= VAR_5;


 FUNC_2(FUNC_9(&VAR_11, VAR_6));
 FUNC_10(VAR_11);

 FUNC_0(&VAR_9, &VAR_8);

 FUNC_2(FUNC_7(&VAR_10, VAR_9));
 FUNC_1(13 + 3, VAR_10.stat_calls);
 FUNC_1(5, VAR_10.oid_calculations);

 FUNC_6(VAR_9);




 FUNC_10(VAR_11);
 FUNC_0(&VAR_9, &VAR_8);

 FUNC_2(FUNC_7(&VAR_10, VAR_9));
 FUNC_1(13 + 3, VAR_10.stat_calls);
 FUNC_1(0, VAR_10.oid_calculations);

 FUNC_6(VAR_9);
}
