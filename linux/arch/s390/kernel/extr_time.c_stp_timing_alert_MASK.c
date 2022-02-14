
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_irq_parm {scalar_t__ tcpc; scalar_t__ lac; scalar_t__ tsc; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct stp_irq_parm *VAR_2)
{
 if (VAR_2->tsc || VAR_2->lac || VAR_2->tcpc)
  FUNC_0(VAR_1, &VAR_0);
}
