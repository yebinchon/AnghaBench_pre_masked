
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct clk_si5341_output {TYPE_1__* data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ num_synth; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_si5341_output*,scalar_t__) ;
 struct clk_si5341_output* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct clk_si5341_output *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 >= VAR_3->data->num_synth)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_2);
}
