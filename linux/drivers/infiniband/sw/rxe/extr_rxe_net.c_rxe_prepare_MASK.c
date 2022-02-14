
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ protocol; TYPE_1__* dev; } ;
struct rxe_pkt_info {int mask; } ;
struct TYPE_4__ {int dmac; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rxe_pkt_info*,struct sk_buff*) ;
 int FUNC_3 (struct rxe_pkt_info*,struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct rxe_pkt_info*) ;
 int FUNC_5 (struct rxe_pkt_info*,struct sk_buff*) ;

int FUNC_6(struct rxe_pkt_info *VAR_3, struct sk_buff *VAR_4, u32 *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4->protocol == FUNC_1(VAR_0))
  VAR_6 = FUNC_2(VAR_3, VAR_4);
 else if (VAR_4->protocol == FUNC_1(VAR_1))
  VAR_6 = FUNC_3(VAR_3, VAR_4);

 *VAR_5 = FUNC_5(VAR_3, VAR_4);

 if (FUNC_0(VAR_4->dev->dev_addr, FUNC_4(VAR_3)->dmac))
  VAR_3->mask |= VAR_2;

 return VAR_6;
}
