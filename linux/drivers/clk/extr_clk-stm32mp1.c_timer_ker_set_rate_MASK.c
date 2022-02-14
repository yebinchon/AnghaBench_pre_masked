
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_cker {int lock; int timpre; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct clk_hw*,unsigned long,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct timer_cker* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
         unsigned long VAR_3)
{
 struct timer_cker *VAR_4 = FUNC_3(VAR_1);
 unsigned long VAR_5 = 0;
 unsigned long VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 int VAR_7 = 0;

 FUNC_1(VAR_4->lock, VAR_5);

 switch (VAR_6) {
 case 1:
  break;
 case 2:
  FUNC_4(0, VAR_4->timpre);
  break;
 case 4:
  FUNC_4(1, VAR_4->timpre);
  break;
 default:
  VAR_7 = -VAR_0;
 }
 FUNC_2(VAR_4->lock, VAR_5);

 return VAR_7;
}
