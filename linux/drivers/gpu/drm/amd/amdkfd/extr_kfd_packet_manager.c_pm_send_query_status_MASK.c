
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct packet_manager {int lock; TYPE_3__* priv_queue; TYPE_1__* pmf; } ;
struct TYPE_7__ {int (* rollback_packet ) (TYPE_3__*) ;int (* submit_packet ) (TYPE_3__*) ;int (* acquire_packet_buffer ) (TYPE_3__*,int,unsigned int**) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_6__ {int query_status_size; int (* query_status ) (struct packet_manager*,int*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,int,unsigned int**) ;
 int FUNC_5 (struct packet_manager*,int*,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

int FUNC_8(struct packet_manager *VAR_2, uint64_t VAR_3,
   uint32_t VAR_4)
{
 uint32_t *VAR_5, VAR_6;
 int VAR_7 = 0;

 if (FUNC_0(!VAR_3))
  return -VAR_0;

 VAR_6 = VAR_2->pmf->query_status_size;
 FUNC_1(&VAR_2->lock);
 VAR_2->priv_queue->ops.acquire_packet_buffer(VAR_2->priv_queue,
   VAR_6 / sizeof(uint32_t), (unsigned int **)&VAR_5);
 if (!VAR_5) {
  FUNC_3("Failed to allocate buffer on kernel queue\n");
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = VAR_2->pmf->query_status(VAR_2, VAR_5, VAR_3, VAR_4);
 if (!VAR_7)
  VAR_2->priv_queue->ops.submit_packet(VAR_2->priv_queue);
 else
  VAR_2->priv_queue->ops.rollback_packet(VAR_2->priv_queue);

out:
 FUNC_2(&VAR_2->lock);
 return VAR_7;
}
