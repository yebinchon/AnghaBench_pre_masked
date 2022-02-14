
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int src_y; int src_x; int src_h; int src_w; int crtc_h; int crtc_w; } ;
struct TYPE_5__ {int mode; int interval; int h; int w; int layout; int blockh; int colorspace; int format; int* blocks; int* pitch; int* handle; int* offset; } ;
struct TYPE_4__ {int valid; } ;
struct nv50_wndw_atom {TYPE_3__ state; TYPE_2__ image; TYPE_1__ csc; } ;
struct nv50_wndw {int wndw; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 u32 *VAR_2;

 if (!(VAR_2 = FUNC_3(&VAR_0->wndw, 17)))
  return;

 FUNC_2(VAR_2, 0x0308, 1);
 FUNC_0(VAR_2, VAR_1->image.mode << 4 | VAR_1->image.interval);
 FUNC_2(VAR_2, 0x0224, 4);
 FUNC_0(VAR_2, VAR_1->image.h << 16 | VAR_1->image.w);
 FUNC_0(VAR_2, VAR_1->image.layout << 4 | VAR_1->image.blockh);
 FUNC_0(VAR_2, VAR_1->csc.valid << 17 |
         VAR_1->image.colorspace << 8 |
         VAR_1->image.format);
 FUNC_0(VAR_2, VAR_1->image.blocks[0] | (VAR_1->image.pitch[0] >> 6));
 FUNC_2(VAR_2, 0x0240, 1);
 FUNC_0(VAR_2, VAR_1->image.handle[0]);
 FUNC_2(VAR_2, 0x0260, 1);
 FUNC_0(VAR_2, VAR_1->image.offset[0] >> 8);
 FUNC_2(VAR_2, 0x0290, 1);
 FUNC_0(VAR_2, (VAR_1->state.src_y >> 16) << 16 |
         (VAR_1->state.src_x >> 16));
 FUNC_2(VAR_2, 0x0298, 1);
 FUNC_0(VAR_2, (VAR_1->state.src_h >> 16) << 16 |
         (VAR_1->state.src_w >> 16));
 FUNC_2(VAR_2, 0x02a4, 1);
 FUNC_0(VAR_2, VAR_1->state.crtc_h << 16 |
         VAR_1->state.crtc_w);
 FUNC_1(VAR_2, &VAR_0->wndw);
}
