
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_5__ {TYPE_3__* atmvcc; } ;
struct lanai_vcc {TYPE_2__ tx; } ;
struct lanai_dev {int dummy; } ;
struct TYPE_6__ {TYPE_1__* stats; } ;
struct TYPE_4__ {int tx; } ;


 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lanai_dev*,struct lanai_vcc*) ;
 int FUNC_4 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_5 (struct lanai_vcc*,int ,int) ;
 int FUNC_6 (struct lanai_vcc*,int,int ,int ) ;
 int FUNC_7 (struct lanai_vcc*,int ,int) ;
 int FUNC_8 (struct lanai_vcc*,int) ;

__attribute__((used)) static void FUNC_9(struct lanai_dev *VAR_0,
 struct lanai_vcc *VAR_1, struct sk_buff *VAR_2, int VAR_3)
{
 int VAR_4;
 FUNC_0(VAR_3 == FUNC_1(VAR_2->len),
     "lanai_send_one_aal5: wrong size packet (%d != %d)\n",
     VAR_3, FUNC_1(VAR_2->len));
 FUNC_5(VAR_1, 0, VAR_3);
 VAR_4 = VAR_3 - VAR_2->len - 8;
 FUNC_0(VAR_4 >= 0, "pad is negative (%d)\n", VAR_4);
 FUNC_0(VAR_4 < 48, "pad is too big (%d)\n", VAR_4);
 FUNC_7(VAR_1, VAR_2->data, VAR_2->len);
 FUNC_8(VAR_1, VAR_4);
 FUNC_6(VAR_1, VAR_2->len, 0, 0);
 FUNC_3(VAR_0, VAR_1);
 FUNC_4(VAR_1->tx.atmvcc, VAR_2);
 FUNC_2(&VAR_1->tx.atmvcc->stats->tx);
}
