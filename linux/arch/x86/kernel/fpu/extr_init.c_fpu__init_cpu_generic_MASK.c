
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int soft; } ;
struct TYPE_6__ {TYPE_1__ state; } ;
struct TYPE_7__ {TYPE_2__ fpu; } ;
struct TYPE_8__ {TYPE_3__ thread; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 TYPE_4__* VAR_7 ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned long VAR_8;
 unsigned long VAR_9 = 0;

 if (FUNC_0(VAR_5))
  VAR_9 |= VAR_2;
 if (FUNC_0(VAR_6))
  VAR_9 |= VAR_3;
 if (VAR_9)
  FUNC_1(VAR_9);

 VAR_8 = FUNC_3();
 VAR_8 &= ~(VAR_1|VAR_0);
 if (!FUNC_0(VAR_4))
  VAR_8 |= VAR_0;
 FUNC_4(VAR_8);







  asm volatile ("fninit");
}
