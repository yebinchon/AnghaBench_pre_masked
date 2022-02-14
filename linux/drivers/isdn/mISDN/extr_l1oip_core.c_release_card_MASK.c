
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l1oip {size_t d_idx; int list; TYPE_1__* chan; int dev; scalar_t__ registered; scalar_t__ socket_thread; int workq; int timeout_tl; int keep_tl; } ;
struct TYPE_2__ {int disorder_skb; struct l1oip* bch; struct l1oip* dch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct l1oip*) ;
 int VAR_0 ;
 int FUNC_4 (struct l1oip*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct l1oip*) ;
 int FUNC_7 (struct l1oip*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct l1oip *VAR_1)
{
 int VAR_2;

 if (FUNC_11(&VAR_1->keep_tl))
  FUNC_1(&VAR_1->keep_tl);

 if (FUNC_11(&VAR_1->timeout_tl))
  FUNC_1(&VAR_1->timeout_tl);

 FUNC_0(&VAR_1->workq);

 if (VAR_1->socket_thread)
  FUNC_4(VAR_1);

 if (VAR_1->registered && VAR_1->chan[VAR_1->d_idx].dch)
  FUNC_8(&VAR_1->chan[VAR_1->d_idx].dch->dev);
 for (VAR_2 = 0; VAR_2 < 128; VAR_2++) {
  if (VAR_1->chan[VAR_2].dch) {
   FUNC_7(VAR_1->chan[VAR_2].dch);
   FUNC_3(VAR_1->chan[VAR_2].dch);
  }
  if (VAR_1->chan[VAR_2].bch) {
   FUNC_6(VAR_1->chan[VAR_2].bch);
   FUNC_3(VAR_1->chan[VAR_2].bch);



  }
 }

 FUNC_9(&VAR_0);
 FUNC_5(&VAR_1->list);
 FUNC_10(&VAR_0);

 FUNC_3(VAR_1);
}
