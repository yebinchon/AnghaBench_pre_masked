
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pll_data {unsigned long input_rate; } ;
struct clk {unsigned long rate; int flags; unsigned long div; int name; TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; struct pll_data* pll_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct pll_data*,int) ;
 int FUNC_2 (char*,int ,int,...) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_4)
{
 u32 VAR_5, VAR_6 = 0;
 struct pll_data *VAR_7;
 unsigned long VAR_8 = VAR_4->rate;

 if (FUNC_0(!VAR_4->parent))
  return VAR_8;

 VAR_8 = VAR_4->parent->rate;


 if (FUNC_0(!VAR_4->parent->pll_data))
  return VAR_8;

 VAR_7 = VAR_4->parent->pll_data;


 if (VAR_4->flags & VAR_3)
  VAR_8 = VAR_7->input_rate;

 if (!VAR_4->div) {
  FUNC_2("%s: (no divider) rate = %lu KHz\n",
    VAR_4->name, VAR_8 / 1000);
  return VAR_8;
 }

 if (VAR_4->flags & VAR_0) {
  VAR_8 /= VAR_4->div;
  FUNC_2("%s: (fixed divide by %d) rate = %lu KHz\n",
    VAR_4->name, VAR_4->div, VAR_8 / 1000);
  return VAR_8;
 }

 VAR_5 = FUNC_1(VAR_7, VAR_4->div);
 if (VAR_5 & VAR_1)
  VAR_6 = (VAR_5 & VAR_2) + 1;

 if (VAR_6 == 0)
  VAR_6 = 1;

 VAR_8 /= VAR_6;

 FUNC_2("%s: (divide by %d) rate = %lu KHz\n",
   VAR_4->name, VAR_6, VAR_8 / 1000);

 return VAR_8;
}
