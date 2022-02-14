
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_info {struct p_barrier* data; } ;
struct p_barrier {int barrier; } ;
struct drbd_epoch {int list; int epoch_size; int active; scalar_t__ flags; struct drbd_connection* connection; int barrier_nr; } ;
struct drbd_connection {int epoch_lock; int epochs; struct drbd_epoch* current_epoch; TYPE_1__* resource; } ;
struct TYPE_2__ {int write_ordering; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drbd_connection*) ;
 int FUNC_3 (struct drbd_connection*,char*,int) ;
 int FUNC_4 (struct drbd_connection*) ;
 int FUNC_5 (struct drbd_connection*,struct drbd_epoch*,int ) ;
 int FUNC_6 (struct drbd_connection*,char*) ;
 int FUNC_7 (struct drbd_epoch*) ;
 struct drbd_epoch* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct drbd_connection *VAR_4, struct packet_info *VAR_5)
{
 int VAR_6;
 struct p_barrier *VAR_7 = VAR_5->data;
 struct drbd_epoch *VAR_8;




 VAR_4->current_epoch->barrier_nr = VAR_7->barrier;
 VAR_4->current_epoch->connection = VAR_4;
 VAR_6 = FUNC_5(VAR_4, VAR_4->current_epoch, VAR_1);






 switch (VAR_4->resource->write_ordering) {
 case 128:
  if (VAR_6 == VAR_2)
   return 0;



  VAR_8 = FUNC_8(sizeof(struct drbd_epoch), VAR_3);
  if (VAR_8)
   break;
  else
   FUNC_6(VAR_4, "Allocation of an epoch failed, slowing down\n");


 case 130:
 case 129:
  FUNC_2(VAR_4);
  FUNC_4(VAR_4);

  if (FUNC_0(&VAR_4->current_epoch->epoch_size)) {
   VAR_8 = FUNC_8(sizeof(struct drbd_epoch), VAR_3);
   if (VAR_8)
    break;
  }

  return 0;
 default:
  FUNC_3(VAR_4, "Strangeness in connection->write_ordering %d\n",
    VAR_4->resource->write_ordering);
  return -VAR_0;
 }

 VAR_8->flags = 0;
 FUNC_1(&VAR_8->epoch_size, 0);
 FUNC_1(&VAR_8->active, 0);

 FUNC_10(&VAR_4->epoch_lock);
 if (FUNC_0(&VAR_4->current_epoch->epoch_size)) {
  FUNC_9(&VAR_8->list, &VAR_4->current_epoch->list);
  VAR_4->current_epoch = VAR_8;
  VAR_4->epochs++;
 } else {

  FUNC_7(VAR_8);
 }
 FUNC_11(&VAR_4->epoch_lock);

 return 0;
}
