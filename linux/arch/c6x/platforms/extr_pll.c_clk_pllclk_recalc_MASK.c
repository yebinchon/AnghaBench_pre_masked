
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pll_data {unsigned long input_rate; int flags; int num; } ;
struct clk {unsigned long rate; int flags; TYPE_1__* parent; struct pll_data* pll_data; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pll_data*,int ) ;
 int FUNC_1 (char*,int ,int,...) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_12)
{
 u32 VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 u8 VAR_17;
 struct pll_data *VAR_18 = VAR_12->pll_data;
 unsigned long VAR_19 = VAR_12->rate;

 if (VAR_12->flags & VAR_0)
  return VAR_19;

 VAR_13 = FUNC_0(VAR_18, VAR_1);
 VAR_19 = VAR_18->input_rate = VAR_12->parent->rate;

 if (VAR_13 & VAR_2)
  VAR_17 = 0;
 else
  VAR_17 = 1;

 if (VAR_18->flags & VAR_9) {
  VAR_14 = FUNC_0(VAR_18, VAR_5);
  VAR_14 = (VAR_14 & VAR_6) + 1;
 }
 if (VAR_18->flags & VAR_11) {
  VAR_15 = FUNC_0(VAR_18, VAR_8);
  if (VAR_15 & VAR_3)
   VAR_15 = (VAR_15 & VAR_4) + 1;
  else
   VAR_15 = 0;
 }
 if (VAR_18->flags & VAR_10) {
  VAR_16 = FUNC_0(VAR_18, VAR_7);
  if (VAR_16 & VAR_3)
   VAR_16 = (VAR_16 & VAR_4) + 1;
  else
   VAR_16 = 1;
 }

 if (!VAR_17) {
  if (VAR_15)
   VAR_19 /= VAR_15;
  if (VAR_14)
   VAR_19 *= VAR_14;
  if (VAR_16)
   VAR_19 /= VAR_16;

  FUNC_1("PLL%d: input = %luMHz, pre[%d] mul[%d] post[%d] "
    "--> %luMHz output.\n",
    VAR_18->num, VAR_12->parent->rate / 1000000,
    VAR_15, VAR_14, VAR_16, VAR_19 / 1000000);
 } else
  FUNC_1("PLL%d: input = %luMHz, bypass mode.\n",
    VAR_18->num, VAR_12->parent->rate / 1000000);

 return VAR_19;
}
