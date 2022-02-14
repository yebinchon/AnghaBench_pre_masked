
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct kernel_queue {size_t* rptr_kernel; size_t pending_wptr; unsigned int nop_packet; scalar_t__ pending_wptr64; TYPE_2__* queue; scalar_t__ pq_kernel_addr; } ;
struct TYPE_3__ {int queue_size; } ;
struct TYPE_4__ {TYPE_1__ properties; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct kernel_queue *VAR_1,
  size_t VAR_2, unsigned int **VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;
 uint32_t VAR_6, VAR_7;
 uint64_t VAR_8;
 unsigned int *VAR_9;






 VAR_7 = *VAR_1->rptr_kernel;
 VAR_6 = VAR_1->pending_wptr;
 VAR_8 = VAR_1->pending_wptr64;
 VAR_9 = (unsigned int *)VAR_1->pq_kernel_addr;
 VAR_5 = VAR_1->queue->properties.queue_size / 4;

 FUNC_0("rptr: %d\n", VAR_7);
 FUNC_0("wptr: %d\n", VAR_6);
 FUNC_0("queue_address 0x%p\n", VAR_9);

 VAR_4 = (VAR_7 + VAR_5 - 1 - VAR_6) %
       VAR_5;

 if (VAR_2 > VAR_4) {




  goto err_no_space;
 }

 if (VAR_6 + VAR_2 >= VAR_5) {



  if (VAR_2 >= VAR_7)
   goto err_no_space;


  while (VAR_6 > 0) {
   VAR_9[VAR_6] = VAR_1->nop_packet;
   VAR_6 = (VAR_6 + 1) % VAR_5;
   VAR_8++;
  }
 }

 *VAR_3 = &VAR_9[VAR_6];
 VAR_1->pending_wptr = VAR_6 + VAR_2;
 VAR_1->pending_wptr64 = VAR_8 + VAR_2;

 return 0;

err_no_space:
 *VAR_3 = ((void*)0);
 return -VAR_0;
}
