
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct fapll_synth {scalar_t__ div; scalar_t__ freq; int fd; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct fapll_synth* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_2,
      unsigned long VAR_3)
{
 struct fapll_synth *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5;
 u64 VAR_6;


 if (!VAR_4->div)
  return 32768;






 if (FUNC_3(VAR_4->fd))
  return VAR_3;

 VAR_6 = VAR_3;






 if (VAR_4->freq) {
  u32 VAR_7, VAR_8, VAR_9, VAR_10;

  VAR_7 = FUNC_2(VAR_4->freq);
  VAR_8 = (VAR_7 >> 24) & 0xf;
  VAR_9 = VAR_7 & 0xffffff;
  VAR_10 = (VAR_8 * 10000000) + VAR_9;
  VAR_6 *= 10000000;
  FUNC_1(VAR_6, VAR_10);
  VAR_6 *= VAR_1;
 }


 VAR_5 = FUNC_2(VAR_4->div) & VAR_0;

 return FUNC_0(VAR_6, VAR_5);
}
