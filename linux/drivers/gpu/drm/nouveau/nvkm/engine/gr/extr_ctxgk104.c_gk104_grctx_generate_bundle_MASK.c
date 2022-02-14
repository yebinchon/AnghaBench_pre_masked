
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gf100_grctx_func {int bundle_size; int bundle_token_limit; int bundle_min_gpm_fifo_depth; } ;
struct gf100_grctx {TYPE_1__* gr; } ;
struct TYPE_4__ {struct gf100_grctx_func* grctx; } ;
struct TYPE_3__ {TYPE_2__* func; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct gf100_grctx*,int,int,int const,int const) ;
 int FUNC_2 (struct gf100_grctx*,int,int,int) ;
 int FUNC_3 (struct gf100_grctx*,int,int const) ;

void
FUNC_4(struct gf100_grctx *VAR_0)
{
 const struct gf100_grctx_func *VAR_1 = VAR_0->gr->func->grctx;
 const u32 VAR_2 = FUNC_0(VAR_1->bundle_min_gpm_fifo_depth,
        VAR_1->bundle_size / 0x20);
 const u32 VAR_3 = VAR_1->bundle_token_limit;
 const int VAR_4 = 8;
 const int VAR_5 = FUNC_2(VAR_0, VAR_1->bundle_size, (1 << VAR_4), 1);
 FUNC_1(VAR_0, 0x408004, 0x00000000, VAR_4, VAR_5);
 FUNC_3(VAR_0, 0x408008, 0x80000000 | (VAR_1->bundle_size >> VAR_4));
 FUNC_1(VAR_0, 0x418808, 0x00000000, VAR_4, VAR_5);
 FUNC_3(VAR_0, 0x41880c, 0x80000000 | (VAR_1->bundle_size >> VAR_4));
 FUNC_3(VAR_0, 0x4064c8, (VAR_2 << 16) | VAR_3);
}
