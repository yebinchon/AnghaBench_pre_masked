
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gf100_grctx_func {int alpha_nr; int attrib_nr; int attrib_nr_max; int alpha_nr_max; } ;
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
 const u32 VAR_3 = VAR_2->alpha_nr;
 const u32 VAR_4 = VAR_2->attrib_nr;
 const u32 VAR_5 = 0x20 * (VAR_2->attrib_nr_max + VAR_2->alpha_nr_max);
 const int VAR_6 = 12;
 const int VAR_7 = FUNC_3(VAR_0, VAR_5 * VAR_1->tpc_total, (1 << VAR_6), 0);
 const int VAR_8 = 1;
 const int VAR_9 = 0xffff;
 u32 VAR_10 = 0;
 u32 VAR_11 = VAR_10 + VAR_2->attrib_nr_max * VAR_1->tpc_total;
 int VAR_12, VAR_13;

 FUNC_1(VAR_0, 0x418810, 0x80000000, VAR_6, VAR_7);
 FUNC_1(VAR_0, 0x419848, 0x10000000, VAR_6, VAR_7);
 FUNC_4(VAR_0, 0x405830, (VAR_4 << 16) | VAR_3);
 FUNC_4(VAR_0, 0x4064c4, ((VAR_3 / 4) << 16) | VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_1->gpc_nr; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < VAR_1->tpc_nr[VAR_12]; VAR_13++) {
   const u32 VAR_14 = VAR_3;
   const u32 VAR_15 = VAR_4;
   const u32 VAR_16 = VAR_8;
   const u32 VAR_17 = FUNC_0(VAR_12, VAR_13, 0x500);
   FUNC_2(VAR_0, VAR_17 + 0x20, (VAR_16 << 28) | (VAR_15 << 16) | ++VAR_10);
   FUNC_4(VAR_0, VAR_17 + 0x20, (VAR_16 << 28) | (VAR_15 << 16) | --VAR_10);
   VAR_10 += VAR_2->attrib_nr_max;
   FUNC_4(VAR_0, VAR_17 + 0x44, (VAR_14 << 16) | VAR_11);
   VAR_11 += VAR_2->alpha_nr_max;
  }
 }
}
