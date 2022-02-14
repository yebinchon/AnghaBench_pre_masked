
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vblk_part {int partnum; void* disk_id; void* parent_id; void* size; void* volume_offset; void* start; } ;
struct TYPE_2__ {struct vblk_part part; } ;
struct vblk {int const flags; TYPE_1__ vblk; } ;


 int FUNC_0 (int) ;
 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (char*,int,...) ;
 void* FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int,int,int) ;

__attribute__((used)) static bool FUNC_6(const u8 *VAR_2, int VAR_3, struct vblk *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct vblk_part *VAR_12;

 FUNC_0(!VAR_2 || !VAR_4);
 VAR_5 = FUNC_5(VAR_2, VAR_3, 0x18, 0);
 if (VAR_5 < 0) {
  FUNC_3("r_objid %d < 0", VAR_5);
  return 0;
 }
 VAR_6 = FUNC_5(VAR_2, VAR_3, 0x18, VAR_5);
 if (VAR_6 < 0) {
  FUNC_3("r_name %d < 0", VAR_6);
  return 0;
 }
 VAR_7 = FUNC_5(VAR_2, VAR_3, 0x34, VAR_6);
 if (VAR_7 < 0) {
  FUNC_3("r_size %d < 0", VAR_7);
  return 0;
 }
 VAR_8 = FUNC_5(VAR_2, VAR_3, 0x34, VAR_7);
 if (VAR_8 < 0) {
  FUNC_3("r_parent %d < 0", VAR_8);
  return 0;
 }
 VAR_9 = FUNC_5(VAR_2, VAR_3, 0x34, VAR_8);
 if (VAR_9 < 0) {
  FUNC_3("r_diskid %d < 0", VAR_9);
  return 0;
 }
 if (VAR_2[0x12] & VAR_0) {
  VAR_10 = FUNC_5(VAR_2, VAR_3, 0x34, VAR_9);
  if (VAR_10 < 0) {
   FUNC_3("r_index %d < 0", VAR_10);
   return 0;
  }
  VAR_11 = VAR_10;
 } else {
  VAR_10 = 0;
  VAR_11 = VAR_9;
 }
 if (VAR_11 < 0) {
  FUNC_3("len %d < 0", VAR_11);
  return 0;
 }
 VAR_11 += VAR_1;
 if (VAR_11 > FUNC_1(VAR_2 + 0x14)) {
  FUNC_3("len %d > BE32(buffer + 0x14) %d", VAR_11,
    FUNC_1(VAR_2 + 0x14));
  return 0;
 }
 VAR_12 = &VAR_4->vblk.part;
 VAR_12->start = FUNC_2(VAR_2 + 0x24 + VAR_6);
 VAR_12->volume_offset = FUNC_2(VAR_2 + 0x2C + VAR_6);
 VAR_12->size = FUNC_4(VAR_2 + 0x34 + VAR_6);
 VAR_12->parent_id = FUNC_4(VAR_2 + 0x34 + VAR_7);
 VAR_12->disk_id = FUNC_4(VAR_2 + 0x34 + VAR_8);
 if (VAR_4->flags & VAR_0)
  VAR_12->partnum = VAR_2[0x35 + VAR_9];
 else
  VAR_12->partnum = 0;
 return 1;
}
