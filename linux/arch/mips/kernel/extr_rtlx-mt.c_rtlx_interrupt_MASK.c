
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int rt_queue; int lx_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_4(VAR_7);
 VAR_6 = FUNC_0();
 FUNC_5(0x100 << VAR_1);
 FUNC_2();
 FUNC_1(VAR_6);
 FUNC_3(VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_6(&VAR_3[VAR_8].lx_queue);
  FUNC_6(&VAR_3[VAR_8].rt_queue);
 }

 return VAR_0;
}
