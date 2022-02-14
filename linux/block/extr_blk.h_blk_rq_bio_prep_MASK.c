
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {unsigned int nr_phys_segments; scalar_t__ rq_disk; int ioprio; struct bio* biotail; struct bio* bio; int __data_len; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {scalar_t__ bi_disk; TYPE_1__ bi_iter; } ;


 int FUNC_0 (struct bio*) ;

__attribute__((used)) static inline void FUNC_1(struct request *VAR_0, struct bio *VAR_1,
  unsigned int VAR_2)
{
 VAR_0->nr_phys_segments = VAR_2;
 VAR_0->__data_len = VAR_1->bi_iter.bi_size;
 VAR_0->bio = VAR_0->biotail = VAR_1;
 VAR_0->ioprio = FUNC_0(VAR_1);

 if (VAR_1->bi_disk)
  VAR_0->rq_disk = VAR_1->bi_disk;
}
