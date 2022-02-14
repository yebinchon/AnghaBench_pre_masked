
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geom {int far_set_size; int raid_disks; scalar_t__ chunk_mask; scalar_t__ chunk_shift; int far_copies; int near_copies; scalar_t__ stride; scalar_t__ far_offset; } ;
struct r10conf {struct geom geo; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static sector_t FUNC_1(struct r10conf *VAR_0, sector_t VAR_1, int VAR_2)
{
 sector_t VAR_3, VAR_4, VAR_5;



 struct geom *VAR_6 = &VAR_0->geo;
 int VAR_7 = (VAR_2 / VAR_6->far_set_size) * VAR_6->far_set_size;
 int VAR_8 = VAR_6->far_set_size;
 int VAR_9;

 if (VAR_6->raid_disks % VAR_6->far_set_size) {
  VAR_9 = (VAR_6->raid_disks / VAR_6->far_set_size) - 1;
  VAR_9 *= VAR_6->far_set_size;

  if (VAR_2 >= VAR_9) {
   VAR_8 = VAR_6->far_set_size;
   VAR_8 += (VAR_6->raid_disks % VAR_6->far_set_size);
   VAR_7 = VAR_9;
  }
 }

 VAR_3 = VAR_1 & VAR_6->chunk_mask;
 if (VAR_6->far_offset) {
  int VAR_10;
  VAR_4 = VAR_1 >> VAR_6->chunk_shift;
  VAR_10 = FUNC_0(VAR_4, VAR_6->far_copies);
  VAR_2 -= VAR_10 * VAR_6->near_copies;
  if (VAR_2 < VAR_7)
   VAR_2 += VAR_8;
 } else {
  while (VAR_1 >= VAR_6->stride) {
   VAR_1 -= VAR_6->stride;
   if (VAR_2 < (VAR_6->near_copies + VAR_7))
    VAR_2 += VAR_8 - VAR_6->near_copies;
   else
    VAR_2 -= VAR_6->near_copies;
  }
  VAR_4 = VAR_1 >> VAR_6->chunk_shift;
 }
 VAR_5 = VAR_4 * VAR_6->raid_disks + VAR_2;
 FUNC_0(VAR_5, VAR_6->near_copies);
 return (VAR_5 << VAR_6->chunk_shift) + VAR_3;
}
