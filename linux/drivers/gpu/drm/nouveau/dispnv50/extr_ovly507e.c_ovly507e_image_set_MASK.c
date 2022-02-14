
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int interval; int* handle; int* offset; int h; int w; int layout; int* pitch; int* blocks; int blockh; int kind; int format; int colorspace; } ;
struct nv50_wndw_atom {TYPE_1__ image; } ;
struct nv50_wndw {int wndw; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 u32 *VAR_2;
 if ((VAR_2 = FUNC_3(&VAR_0->wndw, 12))) {
  FUNC_2(VAR_2, 0x0084, 1);
  FUNC_0(VAR_2, VAR_1->image.interval << 4);
  FUNC_2(VAR_2, 0x00c0, 1);
  FUNC_0(VAR_2, VAR_1->image.handle[0]);
  FUNC_2(VAR_2, 0x0100, 1);
  FUNC_0(VAR_2, 0x00000002);
  FUNC_2(VAR_2, 0x0800, 1);
  FUNC_0(VAR_2, VAR_1->image.offset[0] >> 8);
  FUNC_2(VAR_2, 0x0808, 3);
  FUNC_0(VAR_2, VAR_1->image.h << 16 | VAR_1->image.w);
  FUNC_0(VAR_2, VAR_1->image.layout << 20 |
          (VAR_1->image.pitch[0] >> 8) << 8 |
          VAR_1->image.blocks[0] << 8 |
          VAR_1->image.blockh);
  FUNC_0(VAR_2, VAR_1->image.kind << 16 |
          VAR_1->image.format << 8 |
          VAR_1->image.colorspace);
  FUNC_1(VAR_2, &VAR_0->wndw);
 }
}
