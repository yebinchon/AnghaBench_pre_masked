
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct radeon_mode_info {struct atom_context* atom_context; } ;
struct radeon_device {int flags; struct radeon_mode_info mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct atom_context {int bios; } ;
struct TYPE_2__ {int ucSupportedLink; } ;
typedef TYPE_1__ ATOM_XTMDS_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct atom_context*,int,int*,int *,int *,int*) ;
 int* VAR_11 ;

__attribute__((used)) static uint16_t FUNC_2(struct drm_device *VAR_12,
       int VAR_13,
       uint16_t VAR_14)
{
 struct radeon_device *VAR_15 = VAR_12->dev_private;

 if (VAR_15->flags & VAR_9) {
  return VAR_11
   [VAR_13];
 } else if (((VAR_13 == VAR_8) ||
      (VAR_13 == VAR_7)) &&
     (VAR_14 & VAR_0)) {
  struct radeon_mode_info *VAR_16 = &VAR_15->mode_info;
  struct atom_context *VAR_17 = VAR_16->atom_context;
  int VAR_18 = FUNC_0(VAR_6, VAR_10);
  uint16_t VAR_19, VAR_20;
  uint8_t VAR_21, VAR_22;
  ATOM_XTMDS_INFO *VAR_23;

  if (FUNC_1(VAR_17, VAR_18, &VAR_19, &VAR_21, &VAR_22, &VAR_20)) {
   VAR_23 = (ATOM_XTMDS_INFO *)(VAR_17->bios + VAR_20);

   if (VAR_23->ucSupportedLink & VAR_1) {
    if (VAR_13 == VAR_8)
     return VAR_3;
    else
     return VAR_2;
   } else {
    if (VAR_13 == VAR_8)
     return VAR_5;
    else
     return VAR_4;
   }
  } else
   return VAR_11
    [VAR_13];
 } else {
  return VAR_11
   [VAR_13];
 }
}
