
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userconf {int shell_default; int shells; int shelldir; } ;


 char* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_1(struct userconf * VAR_0)
{

 return FUNC_0(VAR_0->shelldir, VAR_0->shells, VAR_0->shell_default);
}
