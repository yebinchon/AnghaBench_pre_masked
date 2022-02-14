
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dmaengine_desc_callback {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct d40_desc {int is_in_client_list; int node; TYPE_1__ txd; int cyclic; } ;
struct d40_chan {scalar_t__ pending_tx; int lock; int tasklet; int client; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct d40_chan*,struct d40_desc*) ;
 int FUNC_2 (struct d40_desc*) ;
 struct d40_desc* FUNC_3 (struct d40_chan*) ;
 struct d40_desc* FUNC_4 (struct d40_chan*) ;
 int FUNC_5 (struct d40_chan*,struct d40_desc*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct dmaengine_desc_callback*,int *) ;
 int FUNC_8 (TYPE_1__*,struct dmaengine_desc_callback*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_1)
{
 struct d40_chan *VAR_2 = (struct d40_chan *) VAR_1;
 struct d40_desc *VAR_3;
 unsigned long VAR_4;
 bool VAR_5;
 struct dmaengine_desc_callback VAR_6;

 FUNC_10(&VAR_2->lock, VAR_4);


 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 == ((void*)0)) {

  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3 == ((void*)0) || !VAR_3->cyclic)
   goto check_pending_tx;
 }

 if (!VAR_3->cyclic)
  FUNC_6(&VAR_3->txd);





 if (VAR_2->pending_tx == 0) {
  FUNC_11(&VAR_2->lock, VAR_4);
  return;
 }


 VAR_5 = !!(VAR_3->txd.flags & VAR_0);
 FUNC_8(&VAR_3->txd, &VAR_6);

 if (!VAR_3->cyclic) {
  if (FUNC_0(&VAR_3->txd)) {
   FUNC_2(VAR_3);
   FUNC_1(VAR_2, VAR_3);
  } else if (!VAR_3->is_in_client_list) {
   FUNC_2(VAR_3);
   FUNC_5(VAR_2, VAR_3);
   FUNC_9(&VAR_3->node, &VAR_2->client);
   VAR_3->is_in_client_list = 1;
  }
 }

 VAR_2->pending_tx--;

 if (VAR_2->pending_tx)
  FUNC_12(&VAR_2->tasklet);

 FUNC_11(&VAR_2->lock, VAR_4);

 if (VAR_5)
  FUNC_7(&VAR_6, ((void*)0));

 return;
 check_pending_tx:

 if (VAR_2->pending_tx > 0)
  VAR_2->pending_tx--;
 FUNC_11(&VAR_2->lock, VAR_4);
}
