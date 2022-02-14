
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_write_same_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
struct p_sizes {TYPE_2__* qlim; } ;
struct drbd_device {struct request_queue* rq_queue; } ;
struct TYPE_4__ {int write_same_capable; scalar_t__ discard_enabled; void* io_opt; void* io_min; void* alignment_offset; void* logical_block_size; void* physical_block_size; } ;


 scalar_t__ FUNC_0 (struct request_queue*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request_queue*) ;

__attribute__((used)) static void
FUNC_7(struct drbd_device *VAR_0, struct p_sizes *VAR_1,
     struct request_queue *VAR_2)
{
 if (VAR_2) {
  VAR_1->qlim->physical_block_size = FUNC_1(FUNC_6(VAR_2));
  VAR_1->qlim->logical_block_size = FUNC_1(FUNC_5(VAR_2));
  VAR_1->qlim->alignment_offset = FUNC_1(FUNC_2(VAR_2));
  VAR_1->qlim->io_min = FUNC_1(FUNC_3(VAR_2));
  VAR_1->qlim->io_opt = FUNC_1(FUNC_4(VAR_2));
  VAR_1->qlim->discard_enabled = FUNC_0(VAR_2);
  VAR_1->qlim->write_same_capable = !!VAR_2->limits.max_write_same_sectors;
 } else {
  VAR_2 = VAR_0->rq_queue;
  VAR_1->qlim->physical_block_size = FUNC_1(FUNC_6(VAR_2));
  VAR_1->qlim->logical_block_size = FUNC_1(FUNC_5(VAR_2));
  VAR_1->qlim->alignment_offset = 0;
  VAR_1->qlim->io_min = FUNC_1(FUNC_3(VAR_2));
  VAR_1->qlim->io_opt = FUNC_1(FUNC_4(VAR_2));
  VAR_1->qlim->discard_enabled = 0;
  VAR_1->qlim->write_same_capable = 0;
 }
}
