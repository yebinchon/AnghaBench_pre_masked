
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct mtkbtsdio_hdr {int bt_type; void* reserved; void* len; } ;
struct btmtksdio_dev {TYPE_2__* hdev; int func; } ;
struct TYPE_3__ {int byte_tx; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct btmtksdio_dev *VAR_3,
          struct sk_buff *VAR_4)
{
 struct mtkbtsdio_hdr *VAR_5;
 int VAR_6;


 if (FUNC_9(FUNC_6(VAR_4) < sizeof(*VAR_5))) {
  VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_5), 0,
           VAR_0);
  if (VAR_6 < 0)
   return VAR_6;
 }


 FUNC_8(VAR_4, sizeof(*VAR_5));

 VAR_5 = (void *)VAR_4->data;
 VAR_5->len = FUNC_0(VAR_4->len);
 VAR_5->reserved = FUNC_0(0);
 VAR_5->bt_type = FUNC_1(VAR_4);

 VAR_6 = FUNC_5(VAR_3->func, VAR_1, VAR_4->data,
      FUNC_4(VAR_4->len, VAR_2));
 if (VAR_6 < 0)
  goto err_skb_pull;

 VAR_3->hdev->stat.byte_tx += VAR_4->len;

 FUNC_2(VAR_4);

 return 0;

err_skb_pull:
 FUNC_7(VAR_4, sizeof(*VAR_5));

 return VAR_6;
}
