
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct scq_info {int pending; int transmit; int paddr; int base; } ;
struct idt77252_dev {TYPE_1__* pcidev; } ;
struct atm_vcc {int (* pop ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct TYPE_4__ {struct atm_vcc* vcc; } ;
struct TYPE_3__ {int dev; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct scq_info*) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_8 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_9(struct idt77252_dev *VAR_2, struct scq_info *VAR_3)
{
 struct sk_buff *VAR_4;
 struct atm_vcc *VAR_5;

 FUNC_3(&VAR_2->pcidev->dev, VAR_1,
     VAR_3->base, VAR_3->paddr);

 while ((VAR_4 = FUNC_6(&VAR_3->transmit))) {
  FUNC_4(&VAR_2->pcidev->dev, FUNC_1(VAR_4),
     VAR_4->len, VAR_0);

  VAR_5 = FUNC_0(VAR_4)->vcc;
  if (VAR_5->pop)
   VAR_5->pop(VAR_5, VAR_4);
  else
   FUNC_2(VAR_4);
 }

 while ((VAR_4 = FUNC_6(&VAR_3->pending))) {
  FUNC_4(&VAR_2->pcidev->dev, FUNC_1(VAR_4),
     VAR_4->len, VAR_0);

  VAR_5 = FUNC_0(VAR_4)->vcc;
  if (VAR_5->pop)
   VAR_5->pop(VAR_5, VAR_4);
  else
   FUNC_2(VAR_4);
 }

 FUNC_5(VAR_3);
}
