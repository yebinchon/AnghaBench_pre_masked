
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_status_options ;
typedef int git_status_list ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_8__ {int oid_calculations; int stat_calls; } ;
typedef TYPE_2__ git_diff_perfdata ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int **,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;

void FUNC_9(void)
{
 git_repository *VAR_4 = FUNC_3("status");
 git_status_options VAR_5 = VAR_1;
 git_status_list *VAR_6;
 git_diff_perfdata VAR_7 = VAR_0;
 git_index *VAR_8;

 VAR_5.flags = VAR_2;

 FUNC_2(FUNC_7(&VAR_6, VAR_4, &VAR_5));
 FUNC_0(VAR_6);
 FUNC_2(FUNC_6(&VAR_7, VAR_6));
 FUNC_1(13 + 3, VAR_7.stat_calls);
 FUNC_1(5, VAR_7.oid_calculations);

 FUNC_5(VAR_6);


 FUNC_2(FUNC_4(&VAR_8, VAR_4));
 FUNC_8(VAR_8);

 VAR_5.flags |= VAR_3;

 FUNC_2(FUNC_7(&VAR_6, VAR_4, &VAR_5));
 FUNC_0(VAR_6);
 FUNC_2(FUNC_6(&VAR_7, VAR_6));
 FUNC_1(13 + 3, VAR_7.stat_calls);
 FUNC_1(5, VAR_7.oid_calculations);

 FUNC_5(VAR_6);

 VAR_5.flags &= ~VAR_3;


 FUNC_8(VAR_8);
 FUNC_2(FUNC_7(&VAR_6, VAR_4, &VAR_5));
 FUNC_0(VAR_6);
 FUNC_2(FUNC_6(&VAR_7, VAR_6));
 FUNC_1(13 + 3, VAR_7.stat_calls);
 FUNC_1(0, VAR_7.oid_calculations);

 FUNC_5(VAR_6);
}
