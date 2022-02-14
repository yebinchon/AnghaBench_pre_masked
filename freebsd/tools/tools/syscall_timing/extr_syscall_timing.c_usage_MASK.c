
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* t_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_3;

 FUNC_1(VAR_0, "syscall_timing [-i iterations] [-l loops] "
     "[-p path] [-s seconds] test\n");
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(VAR_0, "  %s\n", VAR_1[VAR_3].t_name);
 FUNC_0(-1);
}
