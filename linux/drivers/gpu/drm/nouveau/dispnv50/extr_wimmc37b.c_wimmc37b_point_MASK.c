
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int y; int x; } ;
struct nv50_wndw_atom {TYPE_1__ point; } ;
struct nv50_wndw {int wimm; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 u32 *VAR_2;
 if ((VAR_2 = FUNC_3(&VAR_0->wimm, 2))) {
  FUNC_2(VAR_2, 0x0208, 1);
  FUNC_0(VAR_2, VAR_1->point.y << 16 | VAR_1->point.x);
  FUNC_1(VAR_2, &VAR_0->wimm);
 }
}
