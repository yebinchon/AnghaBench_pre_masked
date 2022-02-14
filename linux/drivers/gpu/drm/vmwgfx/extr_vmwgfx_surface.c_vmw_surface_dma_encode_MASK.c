
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vmw_surface_offset {int mip; int face; scalar_t__ bo_offset; } ;
struct TYPE_14__ {scalar_t__ reserved; scalar_t__ unsynchronized; scalar_t__ discard; } ;
struct TYPE_17__ {int suffixSize; TYPE_4__ flags; int maximumOffset; } ;
struct TYPE_16__ {int d; int h; int w; scalar_t__ srcz; scalar_t__ srcy; scalar_t__ srcx; scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_15__ {int offset; } ;
struct TYPE_13__ {int pitch; TYPE_5__ ptr; } ;
struct TYPE_12__ {int mipmap; int face; int sid; } ;
struct TYPE_18__ {TYPE_3__ guest; int transfer; TYPE_2__ host; } ;
struct TYPE_19__ {int size; int id; } ;
struct vmw_surface_dma {TYPE_7__ suffix; TYPE_6__ cb; TYPE_8__ body; TYPE_9__ header; } ;
struct TYPE_11__ {int id; } ;
struct vmw_surface {size_t num_sizes; TYPE_1__ res; struct drm_vmw_size* sizes; struct vmw_surface_offset* offsets; int format; } ;
struct svga3d_surface_desc {int dummy; } ;
struct drm_vmw_size {int depth; int height; int width; } ;
typedef TYPE_5__ SVGAGuestPtr ;
typedef TYPE_6__ SVGA3dCopyBox ;
typedef TYPE_7__ SVGA3dCmdSurfaceDMASuffix ;
typedef TYPE_8__ SVGA3dCmdSurfaceDMA ;
typedef TYPE_9__ SVGA3dCmdHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct svga3d_surface_desc const*,struct drm_vmw_size const*) ;
 struct svga3d_surface_desc* FUNC_1 (int ) ;
 int FUNC_2 (struct svga3d_surface_desc const*,struct drm_vmw_size const*,int ) ;

__attribute__((used)) static void FUNC_3(struct vmw_surface *VAR_3,
       void *VAR_4,
       const SVGAGuestPtr *VAR_5,
       bool VAR_6)
{
 uint32_t VAR_7;
 struct vmw_surface_dma *VAR_8 = (struct vmw_surface_dma *)VAR_4;
 const struct svga3d_surface_desc *VAR_9 =
  FUNC_1(VAR_3->format);

 for (VAR_7 = 0; VAR_7 < VAR_3->num_sizes; ++VAR_7) {
  SVGA3dCmdHeader *VAR_10 = &VAR_8->header;
  SVGA3dCmdSurfaceDMA *VAR_11 = &VAR_8->body;
  SVGA3dCopyBox *VAR_12 = &VAR_8->cb;
  SVGA3dCmdSurfaceDMASuffix *VAR_13 = &VAR_8->suffix;
  const struct vmw_surface_offset *VAR_14 = &VAR_3->offsets[VAR_7];
  const struct drm_vmw_size *VAR_15 = &VAR_3->sizes[VAR_7];

  VAR_10->id = VAR_2;
  VAR_10->size = sizeof(*VAR_11) + sizeof(*VAR_12) + sizeof(*VAR_13);

  VAR_11->guest.ptr = *VAR_5;
  VAR_11->guest.ptr.offset += VAR_14->bo_offset;
  VAR_11->guest.pitch = FUNC_0(VAR_9,
          VAR_15);
  VAR_11->host.sid = VAR_3->res.id;
  VAR_11->host.face = VAR_14->face;
  VAR_11->host.mipmap = VAR_14->mip;
  VAR_11->transfer = ((VAR_6) ? VAR_1 :
      VAR_0);
  VAR_12->x = 0;
  VAR_12->y = 0;
  VAR_12->z = 0;
  VAR_12->srcx = 0;
  VAR_12->srcy = 0;
  VAR_12->srcz = 0;
  VAR_12->w = VAR_15->width;
  VAR_12->h = VAR_15->height;
  VAR_12->d = VAR_15->depth;

  VAR_13->suffixSize = sizeof(*VAR_13);
  VAR_13->maximumOffset =
   FUNC_2(VAR_9, VAR_15,
           VAR_11->guest.pitch);
  VAR_13->flags.discard = 0;
  VAR_13->flags.unsynchronized = 0;
  VAR_13->flags.reserved = 0;
  ++VAR_8;
 }
}
