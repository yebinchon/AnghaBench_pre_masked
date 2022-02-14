
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int depth; int k1; int dst_color; int src_color; } ;
struct nv50_wndw_atom {TYPE_1__ blend; } ;
struct nv50_wndw {int wndw; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

void
FUNC_4(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 u32 *VAR_2;
 if ((VAR_2 = FUNC_3(&VAR_0->wndw, 8))) {
  FUNC_2(VAR_2, 0x02ec, 7);
  FUNC_0(VAR_2, VAR_1->blend.depth << 4);
  FUNC_0(VAR_2, VAR_1->blend.k1);
  FUNC_0(VAR_2, VAR_1->blend.dst_color << 12 |
          VAR_1->blend.dst_color << 8 |
          VAR_1->blend.src_color << 4 |
          VAR_1->blend.src_color);
  FUNC_0(VAR_2, 0xffff0000);
  FUNC_0(VAR_2, 0xffff0000);
  FUNC_0(VAR_2, 0xffff0000);
  FUNC_0(VAR_2, 0xffff0000);
  FUNC_1(VAR_2, &VAR_0->wndw);
 }
}
