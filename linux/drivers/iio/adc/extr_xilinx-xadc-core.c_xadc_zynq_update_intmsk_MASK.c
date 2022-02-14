
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {unsigned int zynq_intmask; int zynq_masked_alarm; } ;


 int VAR_0 ;
 int FUNC_0 (struct xadc*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xadc *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3)
{
 VAR_1->zynq_intmask &= ~VAR_2;
 VAR_1->zynq_intmask |= VAR_3;

 FUNC_0(VAR_1, VAR_0,
  VAR_1->zynq_intmask | VAR_1->zynq_masked_alarm);
}
