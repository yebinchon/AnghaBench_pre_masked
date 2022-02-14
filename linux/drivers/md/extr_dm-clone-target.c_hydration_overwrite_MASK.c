
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_clone_region_hydration {TYPE_1__* clone; int overwrite_bio_end_io; struct bio* overwrite_bio; } ;
struct bio {struct dm_clone_region_hydration* bi_private; int bi_end_io; } ;
struct TYPE_2__ {int hydrations_in_flight; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct dm_clone_region_hydration *VAR_1, struct bio *VAR_2)
{





 VAR_1->overwrite_bio = VAR_2;
 VAR_1->overwrite_bio_end_io = VAR_2->bi_end_io;

 VAR_2->bi_end_io = VAR_0;
 VAR_2->bi_private = VAR_1;

 FUNC_0(&VAR_1->clone->hydrations_in_flight);
 FUNC_1(VAR_2);
}
