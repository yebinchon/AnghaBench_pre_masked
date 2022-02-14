
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
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct irq_desc *VAR_9)
{
 unsigned short VAR_10 = VAR_8.intreqr & VAR_8.intenar;


 if (VAR_10 & VAR_0) {
  VAR_8.intreq = VAR_0;
  FUNC_0(VAR_4);
 }


 if (VAR_10 & VAR_1) {
  VAR_8.intreq = VAR_1;
  FUNC_0(VAR_5);
 }


 if (VAR_10 & VAR_2) {
  VAR_8.intreq = VAR_2;
  FUNC_0(VAR_6);
 }


 if (VAR_10 & VAR_3) {
  VAR_8.intreq = VAR_3;
  FUNC_0(VAR_7);
 }
}
