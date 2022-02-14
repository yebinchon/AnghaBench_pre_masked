
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_stdu_update {int dummy; } ;
struct vmw_stdu_dma {int dummy; } ;
struct vmw_du_update_plane {int dummy; } ;
typedef int SVGA3dCopyBox ;
typedef int SVGA3dCmdSurfaceDMASuffix ;



__attribute__((used)) static uint32_t FUNC_0(struct vmw_du_update_plane *VAR_0,
          uint32_t VAR_1)
{
 return sizeof(struct vmw_stdu_dma) + sizeof(SVGA3dCopyBox) * VAR_1 +
  sizeof(SVGA3dCmdSurfaceDMASuffix) +
  sizeof(struct vmw_stdu_update);
}
