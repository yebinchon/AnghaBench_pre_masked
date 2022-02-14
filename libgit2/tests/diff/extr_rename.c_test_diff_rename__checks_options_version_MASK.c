
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_9__ {int klass; } ;
typedef TYPE_1__ git_error ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ git_diff_options ;
struct TYPE_11__ {int version; } ;
typedef TYPE_3__ git_diff_find_options ;
typedef int git_diff ;


 char* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,TYPE_2__*) ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,char const*) ;

void FUNC_10(void)
{
 const char *VAR_7 = VAR_5;
 const char *VAR_8 = VAR_0;
 git_tree *VAR_9, *VAR_10;
 git_diff *VAR_11;
 git_diff_options VAR_12 = VAR_3;
 git_diff_find_options VAR_13 = VAR_1;
 const git_error *VAR_14;

 VAR_9 = FUNC_9(VAR_6, VAR_7);
 VAR_10 = FUNC_9(VAR_6, VAR_8);
 VAR_12.flags |= VAR_2;
 FUNC_2(FUNC_5(
  &VAR_11, VAR_6, VAR_9, VAR_10, &VAR_12));

 VAR_13.version = 0;
 FUNC_1(FUNC_3(VAR_11, &VAR_13));
 VAR_14 = FUNC_7();
 FUNC_0(VAR_4, VAR_14->klass);

 FUNC_6();
 VAR_13.version = 1024;
 FUNC_1(FUNC_3(VAR_11, &VAR_13));
 VAR_14 = FUNC_7();
 FUNC_0(VAR_4, VAR_14->klass);

 FUNC_4(VAR_11);
 FUNC_8(VAR_9);
 FUNC_8(VAR_10);
}
