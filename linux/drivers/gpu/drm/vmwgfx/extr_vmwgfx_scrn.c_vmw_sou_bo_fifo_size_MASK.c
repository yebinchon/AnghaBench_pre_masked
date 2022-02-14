
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_kms_sou_define_gmrfb {int dummy; } ;
struct vmw_kms_sou_bo_blit {int dummy; } ;
struct vmw_du_update_plane {int dummy; } ;



__attribute__((used)) static uint32_t FUNC_0(struct vmw_du_update_plane *VAR_0,
         uint32_t VAR_1)
{
 return sizeof(struct vmw_kms_sou_define_gmrfb) +
  sizeof(struct vmw_kms_sou_bo_blit) * VAR_1;
}
