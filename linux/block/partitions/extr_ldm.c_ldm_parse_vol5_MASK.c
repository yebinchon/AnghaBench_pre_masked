
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vblk_volu {int partition_type; int drive_hint; int guid; int size; int volume_state; int volume_type; } ;
struct TYPE_2__ {struct vblk_volu volu; } ;
struct vblk {TYPE_1__ vblk; } ;


 int FUNC_0 (int) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int ,int) ;
 int FUNC_5 (int const*,int,int,int) ;
 int FUNC_6 (int ,int const*,int) ;

__attribute__((used)) static bool FUNC_7(const u8 *VAR_5, int VAR_6, struct vblk *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 struct vblk_volu *VAR_19;

 FUNC_0(!VAR_5 || !VAR_7);
 VAR_8 = FUNC_5(VAR_5, VAR_6, 0x18, 0);
 if (VAR_8 < 0) {
  FUNC_2("r_objid %d < 0", VAR_8);
  return 0;
 }
 VAR_9 = FUNC_5(VAR_5, VAR_6, 0x18, VAR_8);
 if (VAR_9 < 0) {
  FUNC_2("r_name %d < 0", VAR_9);
  return 0;
 }
 VAR_10 = FUNC_5(VAR_5, VAR_6, 0x18, VAR_9);
 if (VAR_10 < 0) {
  FUNC_2("r_vtype %d < 0", VAR_10);
  return 0;
 }
 VAR_11 = FUNC_5(VAR_5, VAR_6, 0x18, VAR_10);
 if (VAR_11 < 0) {
  FUNC_2("r_disable_drive_letter %d < 0",
    VAR_11);
  return 0;
 }
 VAR_12 = FUNC_5(VAR_5, VAR_6, 0x2D, VAR_11);
 if (VAR_12 < 0) {
  FUNC_2("r_child %d < 0", VAR_12);
  return 0;
 }
 VAR_13 = FUNC_5(VAR_5, VAR_6, 0x3D, VAR_12);
 if (VAR_13 < 0) {
  FUNC_2("r_size %d < 0", VAR_13);
  return 0;
 }
 if (VAR_5[0x12] & VAR_1) {
  VAR_14 = FUNC_5(VAR_5, VAR_6, 0x52, VAR_13);
  if (VAR_14 < 0) {
   FUNC_2("r_id1 %d < 0", VAR_14);
   return 0;
  }
 } else
  VAR_14 = VAR_13;
 if (VAR_5[0x12] & VAR_2) {
  VAR_15 = FUNC_5(VAR_5, VAR_6, 0x52, VAR_14);
  if (VAR_15 < 0) {
   FUNC_2("r_id2 %d < 0", VAR_15);
   return 0;
  }
 } else
  VAR_15 = VAR_14;
 if (VAR_5[0x12] & VAR_3) {
  VAR_16 = FUNC_5(VAR_5, VAR_6, 0x52, VAR_15);
  if (VAR_16 < 0) {
   FUNC_2("r_size2 %d < 0", VAR_16);
   return 0;
  }
 } else
  VAR_16 = VAR_15;
 if (VAR_5[0x12] & VAR_0) {
  VAR_17 = FUNC_5(VAR_5, VAR_6, 0x52, VAR_16);
  if (VAR_17 < 0) {
   FUNC_2("r_drive %d < 0", VAR_17);
   return 0;
  }
 } else
  VAR_17 = VAR_16;
 VAR_18 = VAR_17;
 if (VAR_18 < 0) {
  FUNC_2("len %d < 0", VAR_18);
  return 0;
 }
 VAR_18 += VAR_4;
 if (VAR_18 > FUNC_1(VAR_5 + 0x14)) {
  FUNC_2("len %d > BE32(buffer + 0x14) %d", VAR_18,
    FUNC_1(VAR_5 + 0x14));
  return 0;
 }
 VAR_19 = &VAR_7->vblk.volu;
 FUNC_4(VAR_5 + 0x18 + VAR_9, VAR_19->volume_type,
   sizeof(VAR_19->volume_type));
 FUNC_6(VAR_19->volume_state, VAR_5 + 0x18 + VAR_11,
   sizeof(VAR_19->volume_state));
 VAR_19->size = FUNC_3(VAR_5 + 0x3D + VAR_12);
 VAR_19->partition_type = VAR_5[0x41 + VAR_13];
 FUNC_6(VAR_19->guid, VAR_5 + 0x42 + VAR_13, sizeof(VAR_19->guid));
 if (VAR_5[0x12] & VAR_0) {
  FUNC_4(VAR_5 + 0x52 + VAR_13, VAR_19->drive_hint,
    sizeof(VAR_19->drive_hint));
 }
 return 1;
}
