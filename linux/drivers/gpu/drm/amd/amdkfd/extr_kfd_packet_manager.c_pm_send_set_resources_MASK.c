
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct scheduling_resources {int dummy; } ;
struct packet_manager {int lock; TYPE_3__* priv_queue; TYPE_1__* pmf; } ;
struct TYPE_7__ {int (* rollback_packet ) (TYPE_3__*) ;int (* submit_packet ) (TYPE_3__*) ;int (* acquire_packet_buffer ) (TYPE_3__*,int,unsigned int**) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_6__ {int set_resources_size; int (* set_resources ) (struct packet_manager*,int*,struct scheduling_resources*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int,unsigned int**) ;
 int FUNC_4 (struct packet_manager*,int*,struct scheduling_resources*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

int FUNC_7(struct packet_manager *VAR_1,
    struct scheduling_resources *VAR_2)
{
 uint32_t *VAR_3, VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_1->pmf->set_resources_size;
 FUNC_0(&VAR_1->lock);
 VAR_1->priv_queue->ops.acquire_packet_buffer(VAR_1->priv_queue,
     VAR_4 / sizeof(uint32_t),
     (unsigned int **)&VAR_3);
 if (!VAR_3) {
  FUNC_2("Failed to allocate buffer on kernel queue\n");
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = VAR_1->pmf->set_resources(VAR_1, VAR_3, VAR_2);
 if (!VAR_5)
  VAR_1->priv_queue->ops.submit_packet(VAR_1->priv_queue);
 else
  VAR_1->priv_queue->ops.rollback_packet(VAR_1->priv_queue);

out:
 FUNC_1(&VAR_1->lock);

 return VAR_5;
}
