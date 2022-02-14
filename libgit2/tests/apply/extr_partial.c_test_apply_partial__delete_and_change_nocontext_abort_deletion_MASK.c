
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ context_lines; } ;
typedef TYPE_1__ git_diff_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,char*,int ,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(void)
{
 git_diff_options VAR_4 = VAR_2;
 VAR_4.context_lines = 0;

 FUNC_1(FUNC_0(
  VAR_1, "file.txt",
  VAR_0, "file.txt",
  VAR_1, &VAR_4, VAR_3, ((void*)0)));
}
