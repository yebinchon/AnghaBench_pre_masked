
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

void FUNC_7(void)
{
 git_diff *VAR_9;
 diff_expects VAR_10;
 git_diff_options VAR_11 = VAR_2;

 VAR_11.flags = VAR_1 |
  VAR_3;

 VAR_8 = FUNC_2("status");

 FUNC_1(FUNC_5(&VAR_9, VAR_8, ((void*)0), &VAR_11));

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));

 FUNC_1(FUNC_3(
  VAR_9, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_10));

 FUNC_0(VAR_10.files, VAR_10.file_status[VAR_0]);

 FUNC_4(VAR_9);
}
