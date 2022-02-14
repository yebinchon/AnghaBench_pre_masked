
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct fapll_synth {int div; scalar_t__ freq; struct fapll_data* fd; } ;
struct fapll_data {int dummy; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fapll_data*) ;
 unsigned long FUNC_3 (struct clk_hw*,unsigned long) ;
 unsigned long FUNC_4 (struct fapll_synth*,unsigned long,unsigned long) ;
 struct fapll_synth* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_3, unsigned long VAR_4,
       unsigned long VAR_5)
{
 struct fapll_synth *VAR_6 = FUNC_5(VAR_3);
 struct fapll_data *VAR_7 = VAR_6->fd;
 unsigned long VAR_8, VAR_9 = 0;
 u32 VAR_10 = 0, VAR_11;

 if (FUNC_2(VAR_7) || !VAR_6->div || !VAR_4)
  return -VAR_0;


 VAR_8 = FUNC_3(VAR_3, VAR_5);
 if (VAR_8 < VAR_4) {
  if (!VAR_6->freq)
   return -VAR_0;
 } else {
  VAR_10 = FUNC_0(VAR_8, VAR_4);
  if (VAR_10 && (VAR_10 <= VAR_2))
   VAR_9 = FUNC_0(VAR_8, VAR_10);
  if (!VAR_6->freq && !VAR_9)
   return -VAR_0;
 }


 if ((VAR_9 != VAR_4) && VAR_6->freq)
  VAR_10 = FUNC_4(VAR_6,
         VAR_4,
         VAR_5);

 VAR_11 = FUNC_1(VAR_6->div);
 VAR_11 &= ~VAR_2;
 VAR_11 |= VAR_10;
 VAR_11 |= VAR_1;
 FUNC_6(VAR_11, VAR_6->div);

 return 0;
}
