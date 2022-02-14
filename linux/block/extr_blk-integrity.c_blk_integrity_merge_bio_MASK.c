
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_integrity_segments; } ;
struct request_queue {TYPE_1__ limits; } ;
struct request {scalar_t__ nr_integrity_segments; struct bio* bio; } ;
struct bio {struct bio* bi_next; } ;
struct TYPE_4__ {scalar_t__ bip_flags; } ;


 TYPE_2__* FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (struct request_queue*,struct bio*) ;

bool FUNC_3(struct request_queue *VAR_0, struct request *VAR_1,
        struct bio *VAR_2)
{
 int VAR_3;
 struct bio *VAR_4 = VAR_2->bi_next;

 if (FUNC_1(VAR_1) == 0 && FUNC_0(VAR_2) == ((void*)0))
  return 1;

 if (FUNC_1(VAR_1) == 0 || FUNC_0(VAR_2) == ((void*)0))
  return 0;

 if (FUNC_0(VAR_1->bio)->bip_flags != FUNC_0(VAR_2)->bip_flags)
  return 0;

 VAR_2->bi_next = ((void*)0);
 VAR_3 = FUNC_2(VAR_0, VAR_2);
 VAR_2->bi_next = VAR_4;

 if (VAR_1->nr_integrity_segments + VAR_3 >
     VAR_0->limits.max_integrity_segments)
  return 0;

 VAR_1->nr_integrity_segments += VAR_3;

 return 1;
}
