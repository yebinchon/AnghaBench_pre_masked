
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_wndw {int wndw; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

void
FUNC_4(struct nv50_wndw *VAR_1, u32 *VAR_2)
{
 u32 *VAR_3;
 if ((VAR_3 = FUNC_3(&VAR_1->wndw, 2))) {
  FUNC_2(VAR_3, 0x0080, 1);
  FUNC_0(VAR_3, VAR_2[VAR_0]);
  FUNC_1(VAR_3, &VAR_1->wndw);
 }
}
