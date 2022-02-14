
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct TYPE_2__ {unsigned short intreqr; unsigned short intenar; unsigned short intreq; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct irq_desc *VAR_7)
{
 unsigned short VAR_8 = VAR_6.intreqr & VAR_6.intenar;


 if (VAR_8 & VAR_2) {
  VAR_6.intreq = VAR_2;
  FUNC_0(VAR_5);
 }


 if (VAR_8 & VAR_0) {
  VAR_6.intreq = VAR_0;
  FUNC_0(VAR_3);
 }


 if (VAR_8 & VAR_1) {
  VAR_6.intreq = VAR_1;
  FUNC_0(VAR_4);
 }
}
