
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_5, u8 VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;

 if (VAR_6 > 0)
  return -VAR_1;

 FUNC_1(&VAR_4->lock, VAR_7);

 VAR_8 = FUNC_0(VAR_4->base + VAR_0);
 VAR_8 &= ~VAR_3;

 VAR_8 |= VAR_2;
 FUNC_3(VAR_8, VAR_4->base + VAR_0);

 FUNC_2(&VAR_4->lock, VAR_7);
 return 0;
}
