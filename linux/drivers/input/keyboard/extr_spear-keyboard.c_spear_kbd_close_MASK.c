
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_kbd {int last_key; int clk; scalar_t__ io_base; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct spear_kbd* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_3)
{
 struct spear_kbd *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;


 VAR_5 = FUNC_2(VAR_4->io_base + VAR_1);
 VAR_5 &= ~VAR_2;
 FUNC_3(VAR_5, VAR_4->io_base + VAR_1);

 FUNC_0(VAR_4->clk);

 VAR_4->last_key = VAR_0;
}
