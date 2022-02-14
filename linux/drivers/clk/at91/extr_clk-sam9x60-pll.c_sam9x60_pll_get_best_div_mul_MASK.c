
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct sam9x60_pll {unsigned long div; unsigned long mul; unsigned long frac; struct clk_pll_characteristics* characteristics; } ;
struct clk_pll_characteristics {TYPE_1__* output; int upll; } ;
struct TYPE_2__ {unsigned long min; unsigned long max; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct sam9x60_pll *VAR_5,
      unsigned long VAR_6,
      unsigned long VAR_7,
      bool VAR_8)
{
 const struct clk_pll_characteristics *VAR_9 =
       VAR_5->characteristics;
 unsigned long VAR_10 = VAR_3;
 unsigned long VAR_11, VAR_12, VAR_13;
 long VAR_14 = -VAR_0;
 unsigned long VAR_15 = 0;
 unsigned long VAR_16 = 0;
 unsigned long VAR_17 = 0;

 if (VAR_6 < VAR_9->output[0].min ||
     VAR_6 > VAR_9->output[0].max)
  return -VAR_0;

 if (!VAR_5->characteristics->upll) {
  VAR_12 = VAR_7 / VAR_6;
  if (VAR_12 < 2)
   VAR_12 = 2;

  VAR_11 = FUNC_1(VAR_7 * VAR_2, VAR_6);
  if (VAR_11 > VAR_1)
   VAR_11 = VAR_1;
 } else {
  VAR_12 = VAR_11 = VAR_4;
 }

 for (VAR_13 = VAR_12; VAR_13 <= VAR_11; VAR_13++) {
  unsigned long VAR_18;
  unsigned long VAR_19;
  unsigned long VAR_20;
  unsigned long VAR_21 = 0;





  VAR_20 = FUNC_2(VAR_6, VAR_13, VAR_7);
  VAR_19 = FUNC_2(VAR_7, VAR_20, VAR_13);
  VAR_18 = VAR_6 - VAR_19;

  if (VAR_18) {
   VAR_21 = FUNC_0((u64)VAR_18 * VAR_13 * (1 << 22),
       VAR_7);

   VAR_19 += FUNC_0((u64)VAR_21 * VAR_7,
        VAR_13 * (1 << 22));

   if (VAR_19 > VAR_6)
    VAR_18 = VAR_19 - VAR_6;
   else
    VAR_18 = VAR_6 - VAR_19;
  }






  if (VAR_18 < VAR_10) {
   VAR_10 = VAR_18;
   VAR_15 = VAR_13;
   VAR_16 = VAR_20;
   VAR_14 = VAR_19;
   VAR_17 = VAR_21;
  }


  if (!VAR_18)
   break;
 }


 if (VAR_14 < VAR_9->output[0].min &&
     VAR_14 > VAR_9->output[0].max)
  return -VAR_0;

 if (VAR_8) {
  VAR_5->div = VAR_15 - 1;
  VAR_5->mul = VAR_16 - 1;
  VAR_5->frac = VAR_17;
 }

 return VAR_14;
}
