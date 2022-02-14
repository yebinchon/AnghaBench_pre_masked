
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_8, unsigned long VAR_9,
       unsigned long VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12, VAR_13;

 switch (VAR_9) {
 case 12000000:
  VAR_13 = VAR_2;
  break;

 case 19200000:
  VAR_13 = VAR_3;
  break;

 case 24000000:
  VAR_13 = VAR_4;
  break;

 case 48000000:
  VAR_13 = VAR_5;
  break;

 default:
  return -VAR_1;
 }

 FUNC_1(&VAR_7->lock, VAR_11);

 VAR_12 = FUNC_0(VAR_7->base + VAR_0);
 VAR_12 &= ~VAR_6;
 VAR_12 |= VAR_13;
 FUNC_3(VAR_12, VAR_7->base + VAR_0);

 FUNC_2(&VAR_7->lock, VAR_11);
 return 0;
}
