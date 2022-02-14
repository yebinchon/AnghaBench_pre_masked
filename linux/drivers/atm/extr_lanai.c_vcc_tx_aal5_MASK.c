
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {int backlog; } ;
struct lanai_vcc {TYPE_1__ tx; int vci; } ;
struct lanai_dev {int backlog_vccs; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lanai_vcc*,int ) ;
 int FUNC_5 (struct lanai_dev*,struct lanai_vcc*,struct sk_buff*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct lanai_vcc*) ;
 int FUNC_8 (struct lanai_vcc*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_9(struct lanai_dev *VAR_1, struct lanai_vcc *VAR_2,
 struct sk_buff *VAR_3)
{
 int VAR_4, VAR_5;
 if (FUNC_7(VAR_2))
  goto queue_it;
 VAR_4 = FUNC_8(VAR_2,
      FUNC_1(FUNC_4(VAR_2, VAR_0)));
 VAR_5 = FUNC_3(VAR_3->len);
 FUNC_0(VAR_5 + 16 >= 64, "vcc_tx_aal5: n too small (%d)\n", VAR_5);
 if (VAR_4 < VAR_5 + 16) {
  FUNC_2(VAR_2->vci, VAR_1->backlog_vccs);
     queue_it:
  FUNC_6(&VAR_2->tx.backlog, VAR_3);
  return;
 }
 FUNC_5(VAR_1, VAR_2, VAR_3, VAR_5);
}
