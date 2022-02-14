
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_wndw {int wndw; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

void
FUNC_4(struct nv50_wndw *VAR_0)
{
 u32 *VAR_1;
 if ((VAR_1 = FUNC_3(&VAR_0->wndw, 4))) {
  FUNC_2(VAR_1, 0x0308, 1);
  FUNC_0(VAR_1, 0x00000000);
  FUNC_2(VAR_1, 0x0240, 1);
  FUNC_0(VAR_1, 0x00000000);
  FUNC_1(VAR_1, &VAR_0->wndw);
 }
}
