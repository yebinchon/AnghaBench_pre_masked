
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10bio {int sector; TYPE_1__* devs; } ;
struct geom {int raid_disks; int far_set_size; int chunk_shift; int chunk_mask; int near_copies; int far_copies; scalar_t__ stride; scalar_t__ far_offset; } ;
typedef int sector_t ;
struct TYPE_2__ {int devnum; int addr; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct geom *VAR_0, struct r10bio *VAR_1)
{
 int VAR_2,VAR_3;
 sector_t VAR_4;
 sector_t VAR_5;
 sector_t VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9, VAR_10;

 VAR_9 = (VAR_0->raid_disks / VAR_0->far_set_size) - 1;
 VAR_9 *= VAR_0->far_set_size;

 VAR_10 = VAR_0->far_set_size;
 VAR_10 += (VAR_0->raid_disks % VAR_0->far_set_size);


 VAR_5 = VAR_1->sector >> VAR_0->chunk_shift;
 VAR_4 = VAR_1->sector & VAR_0->chunk_mask;

 VAR_5 *= VAR_0->near_copies;
 VAR_6 = VAR_5;
 VAR_7 = FUNC_0(VAR_6, VAR_0->raid_disks);
 if (VAR_0->far_offset)
  VAR_6 *= VAR_0->far_copies;

 VAR_4 += VAR_6 << VAR_0->chunk_shift;


 for (VAR_2 = 0; VAR_2 < VAR_0->near_copies; VAR_2++) {
  int VAR_11 = VAR_7;
  int VAR_12;
  sector_t VAR_13 = VAR_4;
  VAR_1->devs[VAR_8].devnum = VAR_11;
  VAR_1->devs[VAR_8].addr = VAR_13;
  VAR_8++;

  for (VAR_3 = 1; VAR_3 < VAR_0->far_copies; VAR_3++) {
   VAR_12 = VAR_11 / VAR_0->far_set_size;
   VAR_11 += VAR_0->near_copies;

   if ((VAR_0->raid_disks % VAR_0->far_set_size) &&
       (VAR_11 > VAR_9)) {
    VAR_11 -= VAR_9;
    VAR_11 %= VAR_10;
    VAR_11 += VAR_9;
   } else {
    VAR_11 %= VAR_0->far_set_size;
    VAR_11 += VAR_0->far_set_size * VAR_12;
   }
   VAR_13 += VAR_0->stride;
   VAR_1->devs[VAR_8].devnum = VAR_11;
   VAR_1->devs[VAR_8].addr = VAR_13;
   VAR_8++;
  }
  VAR_7++;
  if (VAR_7 >= VAR_0->raid_disks) {
   VAR_7 = 0;
   VAR_4 += (VAR_0->chunk_mask + 1);
  }
 }
}
