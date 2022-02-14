
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct host1x_job_unpin_data {int bo; int sgt; scalar_t__ size; } ;
struct host1x_job {unsigned int num_unpins; int gather_copy; int gather_copy_mapped; scalar_t__ gather_copy_size; TYPE_1__* channel; int * addr_phys; struct host1x_job_unpin_data* unpins; } ;
struct host1x {int iova; scalar_t__ domain; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {TYPE_2__* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct host1x* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(struct host1x_job *VAR_1)
{
 struct host1x *VAR_2 = FUNC_1(VAR_1->channel->dev->parent);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_unpins; VAR_3++) {
  struct host1x_job_unpin_data *VAR_4 = &VAR_1->unpins[VAR_3];

  if (!FUNC_0(VAR_0) &&
      VAR_4->size && VAR_2->domain) {
   FUNC_6(VAR_2->domain, VAR_1->addr_phys[VAR_3],
        VAR_4->size);
   FUNC_3(&VAR_2->iova,
    FUNC_7(&VAR_2->iova, VAR_1->addr_phys[VAR_3]));
  }

  FUNC_5(VAR_4->bo, VAR_4->sgt);
  FUNC_4(VAR_4->bo);
 }

 VAR_1->num_unpins = 0;

 if (VAR_1->gather_copy_size)
  FUNC_2(VAR_1->channel->dev, VAR_1->gather_copy_size,
       VAR_1->gather_copy_mapped, VAR_1->gather_copy);
}
