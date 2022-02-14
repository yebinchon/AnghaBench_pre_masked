
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int callback; } ;
struct fw_transaction {int node_id; int tlabel; int is_split_transaction; TYPE_2__ packet; int link; void* callback_data; int (* callback ) (struct fw_card*,int ,int *,int ,void*) ;int split_timeout_timer; struct fw_card* card; } ;
struct fw_card {TYPE_1__* driver; int lock; int transaction_list; int node_id; } ;
typedef int (* fw_transaction_callback_t ) (struct fw_card*,int ,int *,int ,void*) ;
struct TYPE_4__ {int (* send_request ) (struct fw_card*,TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fw_card*) ;
 int FUNC_1 (TYPE_2__*,int,int,int,int ,int,int,unsigned long long,void*,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;
 int FUNC_5 (struct fw_card*,TYPE_2__*) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_2 ;

void FUNC_7(struct fw_card *VAR_3, struct fw_transaction *VAR_4, int VAR_5,
       int VAR_6, int VAR_7, int VAR_8,
       unsigned long long VAR_9, void *VAR_10, size_t VAR_11,
       fw_transaction_callback_t VAR_12, void *VAR_13)
{
 unsigned long VAR_14;
 int VAR_15;






 FUNC_3(&VAR_3->lock, VAR_14);

 VAR_15 = FUNC_0(VAR_3);
 if (VAR_15 < 0) {
  FUNC_4(&VAR_3->lock, VAR_14);
  VAR_12(VAR_3, VAR_0, ((void*)0), 0, VAR_13);
  return;
 }

 VAR_4->node_id = VAR_6;
 VAR_4->tlabel = VAR_15;
 VAR_4->card = VAR_3;
 VAR_4->is_split_transaction = 0;
 FUNC_6(&VAR_4->split_timeout_timer,
      VAR_1, 0);
 VAR_4->callback = VAR_12;
 VAR_4->callback_data = VAR_13;

 FUNC_1(&VAR_4->packet, VAR_5, VAR_4->tlabel,
   VAR_6, VAR_3->node_id, VAR_7,
   VAR_8, VAR_9, VAR_10, VAR_11);
 VAR_4->packet.callback = VAR_2;

 FUNC_2(&VAR_4->link, &VAR_3->transaction_list);

 FUNC_4(&VAR_3->lock, VAR_14);

 VAR_3->driver->send_request(VAR_3, &VAR_4->packet);
}
