
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
typedef int u32 ;
struct factors_request {unsigned long parent_rate; unsigned long n; unsigned long k; unsigned long m; unsigned long p; int parent_index; unsigned long rate; } ;
struct clk_hw {int dummy; } ;
struct clk_factors_config {scalar_t__ nwidth; scalar_t__ kwidth; scalar_t__ mwidth; scalar_t__ pwidth; unsigned long n_start; int pshift; int mshift; int kshift; int nshift; } ;
struct clk_factors {int (* recalc ) (struct factors_request*) ;TYPE_1__* mux; int reg; struct clk_factors_config* config; } ;
struct TYPE_2__ {int shift; int mask; } ;


 unsigned long FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct factors_request*) ;
 struct clk_factors* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
          unsigned long VAR_2)
{
 u8 VAR_3 = 1, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7;
 unsigned long VAR_8;
 struct clk_factors *VAR_9 = FUNC_3(VAR_1);
 const struct clk_factors_config *VAR_10 = VAR_9->config;


 VAR_7 = FUNC_1(VAR_9->reg);


 if (VAR_10->nwidth != VAR_0)
  VAR_3 = FUNC_0(VAR_10->nshift, VAR_10->nwidth, VAR_7);
 if (VAR_10->kwidth != VAR_0)
  VAR_4 = FUNC_0(VAR_10->kshift, VAR_10->kwidth, VAR_7);
 if (VAR_10->mwidth != VAR_0)
  VAR_6 = FUNC_0(VAR_10->mshift, VAR_10->mwidth, VAR_7);
 if (VAR_10->pwidth != VAR_0)
  VAR_5 = FUNC_0(VAR_10->pshift, VAR_10->pwidth, VAR_7);

 if (VAR_9->recalc) {
  struct factors_request VAR_11 = {
   .parent_rate = VAR_2,
   .n = VAR_3,
   .k = VAR_4,
   .m = VAR_6,
   .p = VAR_5,
  };


  if (VAR_9->mux)
   VAR_11.parent_index =
    (VAR_7 >> VAR_9->mux->shift) &
    VAR_9->mux->mask;

  VAR_9->recalc(&VAR_11);

  return VAR_11.rate;
 }


 VAR_8 = (VAR_2 * (VAR_3 + VAR_10->n_start) * (VAR_4 + 1) >> VAR_5) / (VAR_6 + 1);

 return VAR_8;
}
