
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gf100_grctx_func {int alpha_nr; int attrib_nr; int alpha_nr_max; int attrib_nr_max; } ;
struct gf100_grctx {struct gf100_gr* gr; } ;
struct gf100_gr {int tpc_total; int gpc_nr; int* ppc_nr; int ppc_tpc_max; int const** ppc_tpc_nr; int* ppc_mask; TYPE_1__* func; } ;
struct TYPE_2__ {struct gf100_grctx_func* grctx; } ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct gf100_grctx*,int,int,int const,int) ;
 int FUNC_2 (struct gf100_grctx*,int,int,int) ;
 int FUNC_3 (struct gf100_grctx*,int const,int const) ;

__attribute__((used)) static void
FUNC_4(struct gf100_grctx *VAR_0)
{
 struct gf100_gr *VAR_1 = VAR_0->gr;
 const struct gf100_grctx_func *VAR_2 = VAR_1->func->grctx;
 const u32 VAR_3 = VAR_2->alpha_nr;
 const u32 VAR_4 = VAR_2->attrib_nr;
 const int VAR_5 = 12;
 const int VAR_6 = 0xffff;
 u32 VAR_7 = VAR_2->alpha_nr_max * VAR_1->tpc_total;
 u32 VAR_8 = 0;
 u32 VAR_9 = VAR_8 + VAR_7;
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_1->gpc_nr; VAR_10++)
  VAR_7 += VAR_2->attrib_nr_max * VAR_1->ppc_nr[VAR_10] * VAR_1->ppc_tpc_max;
 VAR_7 = ((VAR_7 * 0x20) + 128) & ~127;
 VAR_12 = FUNC_2(VAR_0, VAR_7, (1 << VAR_5), 0);

 FUNC_1(VAR_0, 0x418810, 0x80000000, VAR_5, VAR_12);
 FUNC_1(VAR_0, 0x419848, 0x10000000, VAR_5, VAR_12);
 FUNC_1(VAR_0, 0x419c2c, 0x10000000, VAR_5, VAR_12);
 FUNC_1(VAR_0, 0x419b00, 0x00000000, VAR_5, VAR_12);
 FUNC_3(VAR_0, 0x419b04, 0x80000000 | VAR_7 >> 7);
 FUNC_3(VAR_0, 0x405830, VAR_4);
 FUNC_3(VAR_0, 0x40585c, VAR_3);
 FUNC_3(VAR_0, 0x4064c4, ((VAR_3 / 4) << 16) | VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_1->gpc_nr; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_1->ppc_nr[VAR_10]; VAR_11++, VAR_13++) {
   const u32 VAR_14 = VAR_3 * VAR_1->ppc_tpc_nr[VAR_10][VAR_11];
   const u32 VAR_15 = VAR_4 * VAR_1->ppc_tpc_max;
   const u32 VAR_16 = 0x418ea0 + (VAR_13 * 0x04);
   const u32 VAR_17 = FUNC_0(VAR_10, VAR_11, 0);
   if (!(VAR_1->ppc_mask[VAR_10] & (1 << VAR_11)))
    continue;
   FUNC_3(VAR_0, VAR_17 + 0xc0, VAR_15);
   FUNC_3(VAR_0, VAR_17 + 0xf4, VAR_9);
   FUNC_3(VAR_0, VAR_17 + 0xf0, VAR_15);
   VAR_9 += VAR_2->attrib_nr_max * VAR_1->ppc_tpc_max;
   FUNC_3(VAR_0, VAR_17 + 0xe4, VAR_14);
   FUNC_3(VAR_0, VAR_17 + 0xf8, VAR_8);
   VAR_8 += VAR_2->alpha_nr_max * VAR_1->ppc_tpc_nr[VAR_10][VAR_11];
   FUNC_3(VAR_0, VAR_16, VAR_15);
  }
 }

 FUNC_3(VAR_0, 0x418eec, 0x00000000);
 FUNC_3(VAR_0, 0x41befc, 0x00000000);
}
