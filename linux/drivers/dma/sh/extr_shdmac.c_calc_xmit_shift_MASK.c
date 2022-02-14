
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_dmae_pdata {int ts_low_mask; int ts_low_shift; int ts_high_mask; int ts_high_shift; int ts_shift_num; unsigned int* ts_shift; } ;
struct sh_dmae_device {struct sh_dmae_pdata* pdata; } ;
struct sh_dmae_chan {int dummy; } ;


 struct sh_dmae_device* FUNC_0 (struct sh_dmae_chan*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sh_dmae_chan *VAR_0, u32 VAR_1)
{
 struct sh_dmae_device *VAR_2 = FUNC_0(VAR_0);
 const struct sh_dmae_pdata *VAR_3 = VAR_2->pdata;
 int VAR_4 = ((VAR_1 & VAR_3->ts_low_mask) >> VAR_3->ts_low_shift) |
  ((VAR_1 & VAR_3->ts_high_mask) >> VAR_3->ts_high_shift);

 if (VAR_4 >= VAR_3->ts_shift_num)
  VAR_4 = 0;

 return VAR_3->ts_shift[VAR_4];
}
