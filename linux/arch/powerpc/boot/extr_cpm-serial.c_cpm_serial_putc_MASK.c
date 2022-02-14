
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc; unsigned char* addr; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(unsigned char VAR_1)
{
 while (VAR_0->sc & 0x8000)
  FUNC_0();

 FUNC_2();

 VAR_0->addr[0] = VAR_1;
 FUNC_1();
 VAR_0->sc |= 0x8000;
}
