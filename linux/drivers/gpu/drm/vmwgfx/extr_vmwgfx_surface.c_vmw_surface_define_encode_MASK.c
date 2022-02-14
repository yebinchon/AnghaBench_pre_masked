
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {TYPE_3__* face; int format; scalar_t__ surfaceFlags; int sid; } ;
struct TYPE_6__ {int size; int id; } ;
struct vmw_surface_define {TYPE_4__ body; TYPE_1__ header; } ;
struct TYPE_7__ {int id; } ;
struct vmw_surface {int num_sizes; struct drm_vmw_size* sizes; int * mip_levels; int format; scalar_t__ flags; TYPE_2__ res; } ;
struct drm_vmw_size {int depth; int height; int width; } ;
struct TYPE_10__ {int depth; int height; int width; } ;
struct TYPE_8__ {int numMipLevels; } ;
typedef scalar_t__ SVGA3dSurface1Flags ;
typedef TYPE_5__ SVGA3dSize ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(const struct vmw_surface *VAR_2,
          void *VAR_3)
{
 struct vmw_surface_define *VAR_4 = (struct vmw_surface_define *)
  VAR_3;
 struct drm_vmw_size *VAR_5;
 SVGA3dSize *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_7 = sizeof(VAR_4->body) + VAR_2->num_sizes * sizeof(SVGA3dSize);

 VAR_4->header.id = VAR_1;
 VAR_4->header.size = VAR_7;
 VAR_4->body.sid = VAR_2->res.id;





 VAR_4->body.surfaceFlags = (SVGA3dSurface1Flags)VAR_2->flags;
 VAR_4->body.format = VAR_2->format;
 for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
  VAR_4->body.face[VAR_8].numMipLevels = VAR_2->mip_levels[VAR_8];

 VAR_4 += 1;
 VAR_6 = (SVGA3dSize *) VAR_4;
 VAR_5 = VAR_2->sizes;

 for (VAR_8 = 0; VAR_8 < VAR_2->num_sizes; ++VAR_8, VAR_6++, VAR_5++) {
  VAR_6->width = VAR_5->width;
  VAR_6->height = VAR_5->height;
  VAR_6->depth = VAR_5->depth;
 }
}
