
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
struct list_head {int dummy; } ;
struct TYPE_7__ {int (* acquire_packet_buffer ) (TYPE_3__*,size_t,int **) ;int (* rollback_packet ) (TYPE_3__*) ;int (* submit_packet ) (TYPE_3__*) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_6__ {int runlist_size; int (* runlist ) (struct packet_manager*,int *,int ,size_t,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct packet_manager*,struct list_head*,int *,size_t*) ;
 int FUNC_3 (struct packet_manager*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_3__*,size_t,int **) ;
 int FUNC_6 (struct packet_manager*,int *,int ,size_t,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

int FUNC_9(struct packet_manager *VAR_0, struct list_head *VAR_1)
{
 uint64_t VAR_2;
 uint32_t *VAR_3;
 size_t VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_1, &VAR_2,
     &VAR_4);
 if (VAR_6)
  goto fail_create_runlist_ib;

 FUNC_4("runlist IB address: 0x%llX\n", VAR_2);

 VAR_5 = VAR_0->pmf->runlist_size / sizeof(uint32_t);
 FUNC_0(&VAR_0->lock);

 VAR_6 = VAR_0->priv_queue->ops.acquire_packet_buffer(VAR_0->priv_queue,
     VAR_5, &VAR_3);
 if (VAR_6)
  goto fail_acquire_packet_buffer;

 VAR_6 = VAR_0->pmf->runlist(VAR_0, VAR_3, VAR_2,
     VAR_4 / sizeof(uint32_t), 0);
 if (VAR_6)
  goto fail_create_runlist;

 VAR_0->priv_queue->ops.submit_packet(VAR_0->priv_queue);

 FUNC_1(&VAR_0->lock);

 return VAR_6;

fail_create_runlist:
 VAR_0->priv_queue->ops.rollback_packet(VAR_0->priv_queue);
fail_acquire_packet_buffer:
 FUNC_1(&VAR_0->lock);
fail_create_runlist_ib:
 FUNC_3(VAR_0);
 return VAR_6;
}
