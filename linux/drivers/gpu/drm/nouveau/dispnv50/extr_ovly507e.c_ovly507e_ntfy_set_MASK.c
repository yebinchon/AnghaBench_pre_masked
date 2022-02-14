
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int awaken; int offset; int handle; } ;
struct nv50_wndw_atom {TYPE_1__ ntfy; } ;
struct nv50_wndw {int wndw; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

void
FUNC_4(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 u32 *VAR_2;
 if ((VAR_2 = FUNC_3(&VAR_0->wndw, 3))) {
  FUNC_2(VAR_2, 0x00a0, 2);
  FUNC_0(VAR_2, VAR_1->ntfy.awaken << 30 | VAR_1->ntfy.offset);
  FUNC_0(VAR_2, VAR_1->ntfy.handle);
  FUNC_1(VAR_2, &VAR_0->wndw);
 }
}
