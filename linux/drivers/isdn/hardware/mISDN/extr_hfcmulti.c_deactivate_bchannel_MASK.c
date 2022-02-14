
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct hfc_multi {int lock; TYPE_1__* chan; } ;
struct bchannel {size_t slot; struct hfc_multi* hw; } ;
struct TYPE_2__ {int conf; scalar_t__ rx_off; scalar_t__ coeff_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct bchannel*) ;
 int FUNC_1 (struct hfc_multi*,size_t,int ,int,int ,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct bchannel *VAR_1)
{
 struct hfc_multi *VAR_2 = VAR_1->hw;
 u_long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_1);
 VAR_2->chan[VAR_1->slot].coeff_count = 0;
 VAR_2->chan[VAR_1->slot].rx_off = 0;
 VAR_2->chan[VAR_1->slot].conf = -1;
 FUNC_1(VAR_2, VAR_1->slot, VAR_0, -1, 0, -1, 0);
 FUNC_3(&VAR_2->lock, VAR_3);
}
