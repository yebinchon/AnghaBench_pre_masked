
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ccb_calc_geometry {long block_size; int volume_size; int heads; int secs_per_track; int cylinders; } ;



int
FUNC_0(struct ccb_calc_geometry *VAR_0)
{
 uint32_t VAR_1, VAR_2;
 if (VAR_0->block_size == 0)
  return (0);
 VAR_2 = (1024L * 1024L) / VAR_0->block_size;
 if (VAR_2 == 0)
  return (0);
 VAR_2 = VAR_0->volume_size / VAR_2;
 if (VAR_0->volume_size > (uint64_t)65535 * 255 * 63) {
  VAR_0->heads = 255;
  VAR_0->secs_per_track = 255;
 } else if (VAR_2 > 1024) {
  VAR_0->heads = 255;
  VAR_0->secs_per_track = 63;
 } else {
  VAR_0->heads = 64;
  VAR_0->secs_per_track = 32;
 }
 VAR_1 = VAR_0->heads * VAR_0->secs_per_track;
 if (VAR_1 == 0)
  return (0);
 VAR_0->cylinders = VAR_0->volume_size / VAR_1;
 return (1);
}
