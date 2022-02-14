
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ version; int dtr; int dor; scalar_t__ reset; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned long VAR_7;

 VAR_5 = VAR_6;
 VAR_0->reset = 0;
 FUNC_4(0);




 VAR_7 = FUNC_0();
 FUNC_1();
 FUNC_3(VAR_7);

 if (VAR_0->version >= VAR_1)
  FUNC_2(0x80 | (VAR_0->dtr & 3), VAR_4);
 else {
  FUNC_2(VAR_0->dor & ~0x04, VAR_2);
  FUNC_5(VAR_3);
  FUNC_2(VAR_0->dor, VAR_2);
 }
}
