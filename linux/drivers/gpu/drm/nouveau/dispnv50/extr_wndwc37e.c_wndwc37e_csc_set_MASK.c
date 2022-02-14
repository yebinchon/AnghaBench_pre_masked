
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * matrix; } ;
struct nv50_wndw_atom {TYPE_1__ csc; } ;
struct nv50_wndw {int wndw; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int*,int,int) ;
 int* FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 u32 *VAR_2, VAR_3;
 if ((VAR_2 = FUNC_3(&VAR_0->wndw, 13))) {
   FUNC_2(VAR_2, 0x02bc, 12);
   for (VAR_3 = 0; VAR_3 < 12; VAR_3++)
     FUNC_0(VAR_2, VAR_1->csc.matrix[VAR_3]);
   FUNC_1(VAR_2, &VAR_0->wndw);
 }
}
