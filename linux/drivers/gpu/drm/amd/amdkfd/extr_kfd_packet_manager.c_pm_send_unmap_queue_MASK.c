
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct packet_manager {int lock; TYPE_3__* priv_queue; TYPE_1__* pmf; } ;
typedef enum kfd_unmap_queues_filter { ____Placeholder_kfd_unmap_queues_filter } kfd_unmap_queues_filter ;
typedef enum kfd_queue_type { ____Placeholder_kfd_queue_type } kfd_queue_type ;
struct TYPE_7__ {int (* rollback_packet ) (TYPE_3__*) ;int (* submit_packet ) (TYPE_3__*) ;int (* acquire_packet_buffer ) (TYPE_3__*,int,unsigned int**) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_6__ {int unmap_queues_size; int (* unmap_queues ) (struct packet_manager*,int*,int,int,int,int,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int,unsigned int**) ;
 int FUNC_4 (struct packet_manager*,int*,int,int,int,int,unsigned int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

int FUNC_7(struct packet_manager *VAR_1, enum kfd_queue_type VAR_2,
   enum kfd_unmap_queues_filter VAR_3,
   uint32_t VAR_4, bool VAR_5,
   unsigned int VAR_6)
{
 uint32_t *VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_1->pmf->unmap_queues_size;
 FUNC_0(&VAR_1->lock);
 VAR_1->priv_queue->ops.acquire_packet_buffer(VAR_1->priv_queue,
   VAR_8 / sizeof(uint32_t), (unsigned int **)&VAR_7);
 if (!VAR_7) {
  FUNC_2("Failed to allocate buffer on kernel queue\n");
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = VAR_1->pmf->unmap_queues(VAR_1, VAR_7, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6);
 if (!VAR_9)
  VAR_1->priv_queue->ops.submit_packet(VAR_1->priv_queue);
 else
  VAR_1->priv_queue->ops.rollback_packet(VAR_1->priv_queue);

out:
 FUNC_1(&VAR_1->lock);
 return VAR_9;
}
