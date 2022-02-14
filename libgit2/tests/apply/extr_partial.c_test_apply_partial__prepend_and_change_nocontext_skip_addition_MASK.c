
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ context_lines; } ;
typedef TYPE_1__ git_diff_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,char*,int ,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;

void FUNC_2(void)
{
 git_diff_options VAR_5 = VAR_3;
 VAR_5.context_lines = 0;

 FUNC_1(FUNC_0(
  VAR_1, "file.txt",
  VAR_2, "file.txt",
  VAR_0, &VAR_5, VAR_4, ((void*)0)));
}
