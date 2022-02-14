
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_unit {int regofs; scalar_t__ type; int lock; int bit; int idle_bit; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 struct clk_unit* FUNC_7 (struct clk_hw*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct clk_hw *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10 = 0;
 struct clk_unit *VAR_11 = FUNC_7(VAR_8);
 unsigned long VAR_12;

 VAR_9 = VAR_11->regofs + VAR_2 - VAR_3;
 FUNC_5(VAR_11->lock, VAR_12);
 if (VAR_11->type == VAR_0) {
  FUNC_2(FUNC_0(VAR_11->idle_bit), VAR_5);
  while (!(FUNC_1(VAR_6) &
    FUNC_0(VAR_11->idle_bit)) && (VAR_10++ < 100)) {
   FUNC_3();
   FUNC_8(10);
  }

  if (VAR_10 == 100) {
   FUNC_4("unit NoC Clock disconnect Error:timeout\n");

   FUNC_2(FUNC_0(VAR_11->idle_bit), VAR_4);
   goto err;
  }

 } else if (VAR_11->type == VAR_1)
  FUNC_2(FUNC_0(VAR_11->idle_bit), VAR_7);

 FUNC_2(FUNC_0(VAR_11->bit), VAR_9);
err:
 FUNC_6(VAR_11->lock, VAR_12);
}
