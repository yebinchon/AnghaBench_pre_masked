
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num_counters; } ;
struct TYPE_3__ {int* control; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void *VAR_3)
{
 unsigned int VAR_4 = VAR_1.num_counters;

 if (FUNC_0(FUNC_1()))
  return;

 switch (VAR_4) {
 case 4:
  FUNC_5(VAR_0 | VAR_2.control[3]);

 case 3:
  FUNC_4(VAR_0 | VAR_2.control[2]);

 case 2:
  FUNC_3(VAR_0 | VAR_2.control[1]);

 case 1:
  FUNC_2(VAR_0 | VAR_2.control[0]);
 }
}
