
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_param {int dummy; } ;
struct TYPE_3__ {char* option; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 size_t VAR_0 ;
 int FUNC_2 (char*,char*,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(char *VAR_2, const struct kernel_param *VAR_3)
{
 if (FUNC_1(VAR_0 >= FUNC_0(VAR_1)))
  return FUNC_2(VAR_2, "???\n");

 return FUNC_2(VAR_2, "%s\n", VAR_1[VAR_0].option);
}
