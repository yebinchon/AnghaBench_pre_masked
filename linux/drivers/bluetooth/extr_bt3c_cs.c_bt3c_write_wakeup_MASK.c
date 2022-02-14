
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct bt3c_info {TYPE_3__* hdev; int tx_state; int txq; TYPE_4__* p_dev; } ;
struct TYPE_8__ {TYPE_1__** resource; } ;
struct TYPE_6__ {int byte_tx; } ;
struct TYPE_7__ {TYPE_2__ stat; } ;
struct TYPE_5__ {unsigned int start; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_4__*) ;
 struct sk_buff* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct bt3c_info *VAR_1)
{
 if (!VAR_1) {
  FUNC_0("Unknown device");
  return;
 }

 if (FUNC_6(VAR_0, &(VAR_1->tx_state)))
  return;

 do {
  unsigned int VAR_2 = VAR_1->p_dev->resource[0]->start;
  register struct sk_buff *VAR_3;
  int VAR_4;

  if (!FUNC_4(VAR_1->p_dev))
   break;

  VAR_3 = FUNC_5(&(VAR_1->txq));
  if (!VAR_3) {
   FUNC_2(VAR_0, &(VAR_1->tx_state));
   break;
  }


  VAR_4 = FUNC_1(VAR_2, 256, VAR_3->data, VAR_3->len);

  if (VAR_4 != VAR_3->len)
   FUNC_0("Very strange");

  FUNC_3(VAR_3);

  VAR_1->hdev->stat.byte_tx += VAR_4;

 } while (0);
}
