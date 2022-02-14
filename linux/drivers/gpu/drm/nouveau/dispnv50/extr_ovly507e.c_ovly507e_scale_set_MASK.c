
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sy; int sx; int sh; int sw; int dw; } ;
struct nv50_wndw_atom {TYPE_1__ scale; } ;
struct nv50_wndw {int wndw; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

void
FUNC_4(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 u32 *VAR_2;
 if ((VAR_2 = FUNC_3(&VAR_0->wndw, 4))) {
  FUNC_2(VAR_2, 0x00e0, 3);
  FUNC_0(VAR_2, VAR_1->scale.sy << 16 | VAR_1->scale.sx);
  FUNC_0(VAR_2, VAR_1->scale.sh << 16 | VAR_1->scale.sw);
  FUNC_0(VAR_2, VAR_1->scale.dw);
  FUNC_1(VAR_2, &VAR_0->wndw);
 }
}
