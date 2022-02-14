
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int en_shift; int high_shift; int low_shift; scalar_t__ offset; int low_width; int high_width; } ;
struct iproc_asiu_clk {TYPE_1__ div; struct iproc_asiu* asiu; } ;
struct iproc_asiu {scalar_t__ div_base; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct iproc_asiu_clk* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 struct iproc_asiu_clk *VAR_4 = FUNC_3(VAR_1);
 struct iproc_asiu *VAR_5 = VAR_4->asiu;
 unsigned int VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 if (VAR_2 == 0 || VAR_3 == 0)
  return -VAR_0;


 if (VAR_2 == VAR_3) {
  VAR_9 = FUNC_2(VAR_5->div_base + VAR_4->div.offset);
  VAR_9 &= ~(1 << VAR_4->div.en_shift);
  FUNC_4(VAR_9, VAR_5->div_base + VAR_4->div.offset);
  return 0;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_2);
 if (VAR_6 < 2)
  return -VAR_0;

 VAR_7 = VAR_8 = VAR_6 >> 1;
 VAR_7--;
 VAR_8--;

 VAR_9 = FUNC_2(VAR_5->div_base + VAR_4->div.offset);
 VAR_9 |= 1 << VAR_4->div.en_shift;
 if (VAR_7) {
  VAR_9 &= ~(FUNC_1(VAR_4->div.high_width)
    << VAR_4->div.high_shift);
  VAR_9 |= VAR_7 << VAR_4->div.high_shift;
 } else {
  VAR_9 &= ~(FUNC_1(VAR_4->div.high_width)
    << VAR_4->div.high_shift);
 }
 if (VAR_8) {
  VAR_9 &= ~(FUNC_1(VAR_4->div.low_width) << VAR_4->div.low_shift);
  VAR_9 |= VAR_8 << VAR_4->div.low_shift;
 } else {
  VAR_9 &= ~(FUNC_1(VAR_4->div.low_width) << VAR_4->div.low_shift);
 }
 FUNC_4(VAR_9, VAR_5->div_base + VAR_4->div.offset);

 return 0;
}
