
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_integrity_segments; } ;
struct request_queue {TYPE_1__ limits; } ;
struct request {scalar_t__ nr_integrity_segments; int bio; } ;
struct TYPE_4__ {scalar_t__ bip_flags; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*,int ) ;

bool FUNC_3(struct request_queue *VAR_0, struct request *VAR_1,
       struct request *VAR_2)
{
 if (FUNC_1(VAR_1) == 0 && FUNC_1(VAR_2) == 0)
  return 1;

 if (FUNC_1(VAR_1) == 0 || FUNC_1(VAR_2) == 0)
  return 0;

 if (FUNC_0(VAR_1->bio)->bip_flags !=
     FUNC_0(VAR_2->bio)->bip_flags)
  return 0;

 if (VAR_1->nr_integrity_segments + VAR_2->nr_integrity_segments >
     VAR_0->limits.max_integrity_segments)
  return 0;

 if (FUNC_2(VAR_1, VAR_2->bio))
  return 0;

 return 1;
}
