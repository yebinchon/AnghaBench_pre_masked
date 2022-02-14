
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gf100_grctx_func {int attrib_nr; int attrib_nr_max; int alpha_nr_max; } ;
struct gf100_grctx {struct gf100_gr* gr; } ;
struct gf100_gr {int const tpc_total; int gpc_nr; int* tpc_nr; TYPE_1__* func; } ;
struct TYPE_2__ {struct gf100_grctx_func* grctx; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct gf100_grctx*,int,int,int const,int const) ;
 int FUNC_2 (struct gf100_grctx*,int const,int const) ;
 int FUNC_3 (struct gf100_grctx*,int const,int,int) ;
 int FUNC_4 (struct gf100_grctx*,int const,int const) ;

void
FUNC_5(struct gf100_grctx *VAR_0)
{
 struct gf100_gr *VAR_1 = VAR_0->gr;
 const struct gf100_grctx_func *VAR_2 = VAR_1->func->grctx;
 const u32 VAR_3 = VAR_2->attrib_nr;
 const u32 VAR_4 = 0x20 * (VAR_2->attrib_nr_max + VAR_2->alpha_nr_max);
 const int VAR_5 = 12;
 const int VAR_6 = FUNC_3(VAR_0, VAR_4 * VAR_1->tpc_total, (1 << VAR_5), 0);
 int VAR_7, VAR_8;
 u32 VAR_9 = 0;

 FUNC_1(VAR_0, 0x418810, 0x80000000, VAR_5, VAR_6);
 FUNC_1(VAR_0, 0x419848, 0x10000000, VAR_5, VAR_6);
 FUNC_4(VAR_0, 0x405830, (VAR_3 << 16));

 for (VAR_7 = 0; VAR_7 < VAR_1->gpc_nr; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_1->tpc_nr[VAR_7]; VAR_8++) {
   const u32 VAR_10 = FUNC_0(VAR_7, VAR_8, 0x0520);
   FUNC_2(VAR_0, VAR_10, (VAR_3 << 16) | ++VAR_9);
   FUNC_4(VAR_0, VAR_10, (VAR_3 << 16) | --VAR_9);
   VAR_9 += VAR_2->attrib_nr_max;
  }
 }
}
