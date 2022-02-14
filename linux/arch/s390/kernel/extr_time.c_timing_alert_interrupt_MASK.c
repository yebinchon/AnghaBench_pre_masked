
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_irq_parm {int dummy; } ;
struct ext_code {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct stp_irq_parm*) ;

__attribute__((used)) static void FUNC_2(struct ext_code VAR_1,
       unsigned int VAR_2, unsigned long VAR_3)
{
 FUNC_0(VAR_0);
 if (VAR_2 & 0x00038000)
  FUNC_1((struct stp_irq_parm *) &VAR_2);
}
