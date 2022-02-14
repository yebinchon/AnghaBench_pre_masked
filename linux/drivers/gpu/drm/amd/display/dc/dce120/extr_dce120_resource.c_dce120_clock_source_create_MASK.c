
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce110_clk_src_regs {int dummy; } ;
struct clock_source {int dp_clk_src; } ;
struct dce110_clk_src {struct clock_source base; } ;
struct dc_context {int dummy; } ;
struct dc_bios {int dummy; } ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dce110_clk_src*,struct dc_context*,struct dc_bios*,int,struct dce110_clk_src_regs const*,int *,int *) ;
 int FUNC_2 (struct dce110_clk_src*) ;
 struct dce110_clk_src* FUNC_3 (int,int ) ;

__attribute__((used)) static struct clock_source *FUNC_4(
 struct dc_context *VAR_3,
 struct dc_bios *VAR_4,
 enum clock_source_id VAR_5,
 const struct dce110_clk_src_regs *VAR_6,
 bool VAR_7)
{
 struct dce110_clk_src *VAR_8 =
  FUNC_3(sizeof(*VAR_8), VAR_0);

 if (!VAR_8)
  return ((void*)0);

 if (FUNC_1(VAR_8, VAR_3, VAR_4, VAR_5,
         VAR_6, &VAR_2, &VAR_1)) {
  VAR_8->base.dp_clk_src = VAR_7;
  return &VAR_8->base;
 }

 FUNC_2(VAR_8);
 FUNC_0();
 return ((void*)0);
}
