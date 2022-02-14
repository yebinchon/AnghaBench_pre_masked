
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_chans; } ;
struct rockchip_mbox {scalar_t__ mbox_base; TYPE_1__* chans; TYPE_2__ mbox; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 int VAR_5;
 struct rockchip_mbox *VAR_6 = (struct rockchip_mbox *)VAR_4;
 u32 VAR_7 = FUNC_0(VAR_6->mbox_base + VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_6->mbox.num_chans; VAR_5++) {
  if ((VAR_7 & (1 << VAR_5)) && (VAR_3 == VAR_6->chans[VAR_5].irq)) {

   FUNC_1(1 << VAR_5,
           VAR_6->mbox_base + VAR_2);
   return VAR_1;
  }
 }

 return VAR_0;
}
