
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbox_chan {struct flexrm_ring* con_priv; } ;
struct flexrm_ring {int dummy; } ;
struct TYPE_2__ {int msgs_queued; int msgs_count; void* msgs; } ;
struct brcm_message {scalar_t__ type; int error; TYPE_1__ batch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct flexrm_ring*,struct brcm_message*,void*) ;

__attribute__((used)) static int FUNC_1(struct mbox_chan *VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4;
 struct flexrm_ring *VAR_5 = VAR_1->con_priv;
 struct brcm_message *VAR_6 = VAR_2;

 if (VAR_6->type == VAR_0) {
  for (VAR_3 = VAR_6->batch.msgs_queued;
       VAR_3 < VAR_6->batch.msgs_count; VAR_3++) {
   VAR_4 = FUNC_0(VAR_5, VAR_6,
       &VAR_6->batch.msgs[VAR_3]);
   if (VAR_4) {
    VAR_6->error = VAR_4;
    return VAR_4;
   }
   VAR_6->batch.msgs_queued++;
  }
  return 0;
 }

 return FUNC_0(VAR_5, ((void*)0), VAR_2);
}
