
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pcr_nmi_disable; int (* write_pcr ) (int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;

void FUNC_4(void *VAR_3)
{
 if (!FUNC_0(VAR_2))
  return;
 VAR_1->write_pcr(0, VAR_1->pcr_nmi_disable);
 FUNC_1(VAR_2, 0);
 FUNC_2(&VAR_0);
}
