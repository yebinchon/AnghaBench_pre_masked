
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gf100_grctx_func {int pagepool_size; } ;
struct gf100_grctx {TYPE_2__* gr; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {struct gf100_grctx_func* grctx; } ;


 int FUNC_0 (struct gf100_grctx*,int,int,int const,int const) ;
 int FUNC_1 (struct gf100_grctx*,int ,int,int) ;
 int FUNC_2 (struct gf100_grctx*,int,int) ;

void
FUNC_3(struct gf100_grctx *VAR_0)
{
 const struct gf100_grctx_func *VAR_1 = VAR_0->gr->func->grctx;
 const int VAR_2 = 8;
 const int VAR_3 = FUNC_1(VAR_0, VAR_1->pagepool_size, (1 << VAR_2), 1);
 FUNC_0(VAR_0, 0x40800c, 0x00000000, VAR_2, VAR_3);
 FUNC_2(VAR_0, 0x408010, 0x8007d800);
 FUNC_0(VAR_0, 0x419004, 0x00000000, VAR_2, VAR_3);
 FUNC_2(VAR_0, 0x419008, 0x00000000);
}
