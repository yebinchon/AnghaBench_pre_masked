
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_5__ {TYPE_1__ timer; } ;
struct hfc_pci {TYPE_2__ hw; } ;
struct TYPE_6__ {int timer; } ;


 struct hfc_pci* FUNC_0 (int ,struct timer_list*,int ) ;
 struct hfc_pci* VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct timer_list *VAR_3)
{
 struct hfc_pci *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1.timer);
 VAR_4->hw.timer.expires = VAR_2 + 75;





}
