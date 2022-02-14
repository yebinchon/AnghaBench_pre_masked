
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_param {scalar_t__ arg; } ;
struct TYPE_2__ {char* name; } ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, const struct kernel_param *VAR_1)
{
 int VAR_2 = *((unsigned int *)VAR_1->arg);

 return FUNC_1(VAR_0, "%s", FUNC_0(VAR_2)->name);
}
