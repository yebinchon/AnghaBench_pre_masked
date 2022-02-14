
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct dtl1_info {int tx_state; TYPE_3__* hdev; int txq; TYPE_4__* p_dev; } ;
struct TYPE_8__ {TYPE_1__** resource; } ;
struct TYPE_6__ {int byte_tx; } ;
struct TYPE_7__ {TYPE_2__ stat; } ;
struct TYPE_5__ {unsigned int start; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned int,int,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int *) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct dtl1_info *VAR_3)
{
 if (!VAR_3) {
  FUNC_0("Unknown device");
  return;
 }

 if (FUNC_10(VAR_1, &(VAR_3->tx_state))) {
  FUNC_5(VAR_2, &(VAR_3->tx_state));
  return;
 }

 if (FUNC_9(VAR_0, &(VAR_3->tx_state))) {
  FUNC_5(VAR_2, &(VAR_3->tx_state));
  return;
 }

 do {
  unsigned int VAR_4 = VAR_3->p_dev->resource[0]->start;
  register struct sk_buff *VAR_5;
  int VAR_6;

  FUNC_1(VAR_2, &(VAR_3->tx_state));

  if (!FUNC_4(VAR_3->p_dev))
   return;

  VAR_5 = FUNC_6(&(VAR_3->txq));
  if (!VAR_5)
   break;


  VAR_6 = FUNC_2(VAR_4, 32, VAR_5->data, VAR_5->len);

  if (VAR_6 == VAR_5->len) {
   FUNC_5(VAR_1, &(VAR_3->tx_state));
   FUNC_3(VAR_5);
  } else {
   FUNC_7(VAR_5, VAR_6);
   FUNC_8(&(VAR_3->txq), VAR_5);
  }

  VAR_3->hdev->stat.byte_tx += VAR_6;

 } while (FUNC_10(VAR_2, &(VAR_3->tx_state)));

 FUNC_1(VAR_0, &(VAR_3->tx_state));
}
