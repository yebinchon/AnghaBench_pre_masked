
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rmt_start; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ) ;

void FUNC_2(struct hfi1_devdata *VAR_2)
{
 FUNC_1(VAR_2, VAR_1);


 if (VAR_2->vnic.rmt_start == 0)
  FUNC_0(VAR_2, VAR_0);
}
