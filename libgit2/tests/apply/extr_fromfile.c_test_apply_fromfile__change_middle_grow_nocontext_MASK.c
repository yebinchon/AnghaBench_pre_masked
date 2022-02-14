
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,TYPE_1__*,char*,int) ;

void FUNC_3(void)
{
 git_diff_options VAR_4 = VAR_2;
 VAR_4.context_lines = 0;

 FUNC_0(FUNC_2(
  VAR_1, FUNC_1(VAR_1),
  VAR_0, FUNC_1(VAR_0),
  VAR_3, &VAR_4,
  "file.txt", 0100644));
}
