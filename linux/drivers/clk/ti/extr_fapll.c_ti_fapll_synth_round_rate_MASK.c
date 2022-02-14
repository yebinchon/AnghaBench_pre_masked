
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct fapll_synth {int freq; int div; struct fapll_data* fd; } ;
struct fapll_data {int dummy; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_2 (struct fapll_data*) ;
 unsigned long FUNC_3 (struct clk_hw*,unsigned long) ;
 struct fapll_synth* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_5(struct clk_hw *VAR_4, unsigned long VAR_5,
          unsigned long *VAR_6)
{
 struct fapll_synth *VAR_7 = FUNC_4(VAR_4);
 struct fapll_data *VAR_8 = VAR_7->fd;
 unsigned long VAR_9;

 if (FUNC_2(VAR_8) || !VAR_7->div || !VAR_5)
  return -VAR_0;


 if (!VAR_7->freq) {
  unsigned long VAR_10;
  u32 VAR_11;

  VAR_10 = FUNC_3(VAR_4, *VAR_6);
  VAR_11 = FUNC_0(VAR_10, VAR_5);
  VAR_9 = FUNC_0(VAR_10, VAR_11);
  goto out;
 }

 VAR_9 = *VAR_6 * VAR_3;
 if (VAR_5 > VAR_9)
  goto out;

 VAR_9 = FUNC_1(VAR_9, VAR_2 * VAR_1);
 if (VAR_5 < VAR_9)
  goto out;

 VAR_9 = VAR_5;
out:
 return VAR_9;
}
