
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct TYPE_2__ {unsigned short intreqr; unsigned short intenar; unsigned short intreq; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct irq_desc *VAR_5)
{
 unsigned short VAR_6 = VAR_4.intreqr & VAR_4.intenar;


 if (VAR_6 & VAR_1) {

  FUNC_0(VAR_3);
 }


 if (VAR_6 & VAR_0) {
  VAR_4.intreq = VAR_0;
  FUNC_0(VAR_2);
 }
}
