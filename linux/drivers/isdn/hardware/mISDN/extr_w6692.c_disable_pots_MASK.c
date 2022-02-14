
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w6692_hw {int fmask; } ;
struct TYPE_2__ {struct w6692_hw* hw; } ;
struct w6692_ch {int b_mode; TYPE_1__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct w6692_ch*,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_1(struct w6692_ch *VAR_9)
{
 struct w6692_hw *VAR_10 = VAR_9->bch.hw;

 if (!(VAR_10->fmask & VAR_8))
  return -VAR_0;
 VAR_9->b_mode &= ~(VAR_7 | VAR_6);
 FUNC_0(VAR_9, VAR_5, VAR_9->b_mode);
 FUNC_0(VAR_9, VAR_1, VAR_3 | VAR_2 |
      VAR_4);
 return 0;
}
