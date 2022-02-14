
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct packet_manager {int allocated; int lock; TYPE_2__* ib_buffer_obj; TYPE_1__* dqm; } ;
struct TYPE_4__ {int gpu_addr; void* cpu_ptr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int,TYPE_2__**) ;
 int FUNC_2 (unsigned int*,int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct packet_manager*,unsigned int*,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct packet_manager *VAR_1,
    unsigned int **VAR_2,
    uint64_t *VAR_3,
    unsigned int *VAR_4,
    bool *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_1->allocated))
  return -VAR_0;

 FUNC_5(VAR_1, VAR_4, VAR_5);

 FUNC_3(&VAR_1->lock);

 VAR_6 = FUNC_1(VAR_1->dqm->dev, *VAR_4,
     &VAR_1->ib_buffer_obj);

 if (VAR_6) {
  FUNC_6("Failed to allocate runlist IB\n");
  goto out;
 }

 *(void **)VAR_2 = VAR_1->ib_buffer_obj->cpu_ptr;
 *VAR_3 = VAR_1->ib_buffer_obj->gpu_addr;

 FUNC_2(*VAR_2, 0, *VAR_4);
 VAR_1->allocated = 1;

out:
 FUNC_4(&VAR_1->lock);
 return VAR_6;
}
