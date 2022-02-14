
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {int backlog; } ;
struct lanai_vcc {int vci; TYPE_1__ tx; } ;
struct lanai_dev {int backlog_vccs; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lanai_dev*,struct lanai_vcc*,struct sk_buff*,int) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct lanai_vcc*) ;
 int FUNC_7 (struct lanai_vcc*,int) ;

__attribute__((used)) static void FUNC_8(struct lanai_dev *VAR_0,
 struct lanai_vcc *VAR_1, int VAR_2)
{
 int VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5 = FUNC_7(VAR_1, VAR_2);
 FUNC_0(FUNC_6(VAR_1),
     "vcc_tx_unqueue() called with empty backlog (vci=%d)\n",
     VAR_1->vci);
 while (VAR_5 >= 64) {
  VAR_4 = FUNC_4(&VAR_1->tx.backlog);
  if (VAR_4 == ((void*)0))
   goto no_backlog;
  VAR_3 = FUNC_2(VAR_4->len);
  if (VAR_3 + 16 > VAR_5) {

   FUNC_5(&VAR_1->tx.backlog, VAR_4);
   return;
  }
  FUNC_3(VAR_0, VAR_1, VAR_4, VAR_3);
  VAR_5 -= VAR_3 + 16;
 }
 if (!FUNC_6(VAR_1)) {
     no_backlog:
  FUNC_1(VAR_1->vci, VAR_0->backlog_vccs);
 }
}
