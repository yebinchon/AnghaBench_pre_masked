
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int output_mode; int range; int size; int offset; } ;
struct TYPE_4__ {int handle; TYPE_1__ i; } ;
struct nv50_wndw_atom {TYPE_2__ xlut; } ;
struct nv50_wndw {int wndw; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 u32 *VAR_2;
 if ((VAR_2 = FUNC_3(&VAR_0->wndw, 4))) {
  FUNC_2(VAR_2, 0x02b0, 3);
  FUNC_0(VAR_2, VAR_1->xlut.i.output_mode << 8 |
          VAR_1->xlut.i.range << 4 |
          VAR_1->xlut.i.size);
  FUNC_0(VAR_2, VAR_1->xlut.i.offset >> 8);
  FUNC_0(VAR_2, VAR_1->xlut.handle);
  FUNC_1(VAR_2, &VAR_0->wndw);
 }
}
