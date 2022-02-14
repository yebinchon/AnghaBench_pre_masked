
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct clk_pll_layout {int dummy; } ;
struct TYPE_3__ {unsigned long min; unsigned long max; } ;
struct clk_pll_characteristics {int num_output; TYPE_2__* output; TYPE_1__ input; } ;
struct clk_pll {struct clk_pll_characteristics* characteristics; struct clk_pll_layout* layout; } ;
struct TYPE_4__ {long min; long max; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (struct clk_pll_layout const*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static long FUNC_3(struct clk_pll *VAR_4, unsigned long VAR_5,
         unsigned long VAR_6,
         u32 *VAR_7, u32 *VAR_8,
         u32 *VAR_9) {
 const struct clk_pll_layout *VAR_10 = VAR_4->layout;
 const struct clk_pll_characteristics *VAR_11 =
       VAR_4->characteristics;
 unsigned long VAR_12 = VAR_3;
 unsigned long VAR_13, VAR_14, VAR_15;
 long VAR_16 = -VAR_0;
 unsigned long VAR_17;
 unsigned long VAR_18;
 int VAR_19 = 0;


 if (VAR_6 < VAR_11->input.min)
  return -VAR_0;







 VAR_14 = (VAR_6 * VAR_2) / VAR_5;
 if (!VAR_14)
  VAR_14 = 1;

 if (VAR_6 > VAR_11->input.max) {
  VAR_15 = FUNC_1(VAR_6, VAR_11->input.max);
  if (VAR_15 > VAR_1)
   return -VAR_0;

  if (VAR_15 > VAR_14)
   VAR_14 = VAR_15;
 }





 VAR_13 = FUNC_1(VAR_6 * FUNC_2(VAR_10), VAR_5);
 if (VAR_13 > VAR_1)
  VAR_13 = VAR_1;






 for (VAR_15 = VAR_14; VAR_15 <= VAR_13; VAR_15++) {
  unsigned long VAR_20;
  unsigned long VAR_21;
  unsigned long VAR_22;





  VAR_22 = FUNC_0(VAR_5, VAR_6 / VAR_15);
  VAR_21 = (VAR_6 / VAR_15) * VAR_22;
  if (VAR_21 > VAR_5)
   VAR_20 = VAR_21 - VAR_5;
  else
   VAR_20 = VAR_5 - VAR_21;






  if (VAR_20 < VAR_12) {
   VAR_12 = VAR_20;
   VAR_17 = VAR_15;
   VAR_18 = VAR_22;
   VAR_16 = VAR_21;
  }





  if (!VAR_20)
   break;
 }


 if (VAR_16 < 0)
  return VAR_16;


 for (VAR_19 = 0; VAR_19 < VAR_11->num_output; VAR_19++) {
  if (VAR_16 >= VAR_11->output[VAR_19].min &&
      VAR_16 <= VAR_11->output[VAR_19].max)
   break;
 }

 if (VAR_19 >= VAR_11->num_output)
  return -VAR_0;

 if (VAR_7)
  *VAR_7 = VAR_17;
 if (VAR_8)
  *VAR_8 = VAR_18 - 1;
 if (VAR_9)
  *VAR_9 = VAR_19;

 return VAR_16;
}
