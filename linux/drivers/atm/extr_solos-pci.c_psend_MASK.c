
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct solos_card {TYPE_1__* dev; } ;
struct sk_buff {int len; } ;
struct pkt_hdr {void* type; void* vci; void* vpi; void* size; } ;
struct atm_vcc {int vpi; int vci; TYPE_2__* dev; } ;
struct TYPE_4__ {struct solos_card* dev_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct solos_card*,int ,struct sk_buff*,struct atm_vcc*) ;
 int FUNC_4 (struct sk_buff*,int,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct pkt_hdr* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct atm_vcc *VAR_3, struct sk_buff *VAR_4)
{
 struct solos_card *VAR_5 = VAR_3->dev->dev_data;
 struct pkt_hdr *VAR_6;
 int VAR_7;

 VAR_7 = VAR_4->len;
 if (VAR_7 > (VAR_0 - sizeof(*VAR_6))) {
  FUNC_2(&VAR_5->dev->dev, "Length of PDU is too large. Dropping PDU.\n");
  FUNC_8(VAR_3, VAR_4);
  return 0;
 }

 if (!FUNC_5(VAR_4, sizeof(*VAR_6))) {
  int VAR_8 = 0;
  int VAR_9;

  if (FUNC_6(VAR_4) < sizeof(*VAR_6))
   VAR_8 = sizeof(*VAR_6) - FUNC_6(VAR_4);

  VAR_9 = FUNC_4(VAR_4, VAR_8, 0, VAR_1);
  if (VAR_9) {
   FUNC_2(&VAR_5->dev->dev, "pskb_expand_head failed.\n");
   FUNC_8(VAR_3, VAR_4);
   return VAR_9;
  }
 }

 VAR_6 = FUNC_7(VAR_4, sizeof(*VAR_6));


 VAR_6->size = FUNC_1(VAR_7);
 VAR_6->vpi = FUNC_1(VAR_3->vpi);
 VAR_6->vci = FUNC_1(VAR_3->vci);
 VAR_6->type = FUNC_1(VAR_2);

 FUNC_3(VAR_5, FUNC_0(VAR_3->dev), VAR_4, VAR_3);

 return 0;
}
