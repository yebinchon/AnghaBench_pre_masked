
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_io_region {int count; int sector; int bdev; } ;
struct dm_clone_region_hydration {unsigned long region_nr; struct clone* clone; } ;
struct clone {int region_size; unsigned int region_shift; int nr_regions; int kcopyd_client; int hydrations_in_flight; TYPE_3__* dest_dev; TYPE_2__* source_dev; TYPE_1__* ti; } ;
typedef int sector_t ;
struct TYPE_6__ {int bdev; } ;
struct TYPE_5__ {int bdev; } ;
struct TYPE_4__ {int len; } ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int ,struct dm_io_region*,int,struct dm_io_region*,int ,int ,struct dm_clone_region_hydration*) ;
 int VAR_0 ;
 int FUNC_2 (struct clone*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct dm_clone_region_hydration *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4;
 sector_t VAR_5, VAR_6, VAR_7;
 struct dm_io_region VAR_8, VAR_9;
 struct clone *VAR_10 = VAR_1->clone;

 VAR_6 = VAR_10->region_size;
 VAR_3 = VAR_1->region_nr;
 VAR_4 = VAR_3 + VAR_2 - 1;

 VAR_7 = (VAR_2 - 1) << VAR_10->region_shift;

 if (VAR_4 == VAR_10->nr_regions - 1) {




  VAR_5 = VAR_10->ti->len & (VAR_6 - 1);
  if (!VAR_5)
   VAR_5 = VAR_6;
 } else {
  VAR_5 = VAR_6;
 }

 VAR_7 += VAR_5;

 VAR_8.bdev = VAR_10->source_dev->bdev;
 VAR_8.sector = FUNC_2(VAR_10, VAR_3);
 VAR_8.count = VAR_7;

 VAR_9.bdev = VAR_10->dest_dev->bdev;
 VAR_9.sector = VAR_8.sector;
 VAR_9.count = VAR_8.count;


 FUNC_0(VAR_2, &VAR_10->hydrations_in_flight);
 FUNC_1(VAR_10->kcopyd_client, &VAR_8, 1, &VAR_9, 0,
         VAR_0, VAR_1);
}
