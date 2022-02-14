
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct factors_request {unsigned long rate; unsigned long parent_rate; int p; int m; int k; int n; } ;
struct clk_hw {int dummy; } ;
struct clk_factors_config {int pwidth; int pshift; int mwidth; int mshift; int kwidth; int kshift; int nwidth; int nshift; } ;
struct clk_factors {scalar_t__ lock; int reg; int (* get_factors ) (struct factors_request*) ;struct clk_factors_config* config; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (struct factors_request*) ;
 struct clk_factors* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 struct factors_request VAR_3 = {
  .rate = VAR_1,
  .parent_rate = VAR_2,
 };
 u32 VAR_4;
 struct clk_factors *VAR_5 = FUNC_6(VAR_0);
 const struct clk_factors_config *VAR_6 = VAR_5->config;
 unsigned long VAR_7 = 0;

 VAR_5->get_factors(&VAR_3);

 if (VAR_5->lock)
  FUNC_3(VAR_5->lock, VAR_7);


 VAR_4 = FUNC_2(VAR_5->reg);


 VAR_4 = FUNC_0(VAR_6->nshift, VAR_6->nwidth, VAR_4, VAR_3.n);
 VAR_4 = FUNC_0(VAR_6->kshift, VAR_6->kwidth, VAR_4, VAR_3.k);
 VAR_4 = FUNC_0(VAR_6->mshift, VAR_6->mwidth, VAR_4, VAR_3.m);
 VAR_4 = FUNC_0(VAR_6->pshift, VAR_6->pwidth, VAR_4, VAR_3.p);


 FUNC_7(VAR_4, VAR_5->reg);


 FUNC_1((VAR_1 >> 20) * 500 / 2);

 if (VAR_5->lock)
  FUNC_4(VAR_5->lock, VAR_7);

 return 0;
}
