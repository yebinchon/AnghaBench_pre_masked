
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_kbd {int mode; scalar_t__ io_base; int clk; int last_key; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct spear_kbd* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_9)
{
 struct spear_kbd *VAR_10 = FUNC_2(VAR_9);
 int VAR_11;
 u32 VAR_12;

 VAR_10->last_key = VAR_0;

 VAR_11 = FUNC_0(VAR_10->clk);
 if (VAR_11)
  return VAR_11;


 VAR_12 = FUNC_1(VAR_10->clk) / 1000000 - 1;
 VAR_12 = (VAR_12 & VAR_3) << VAR_4;


 VAR_12 = VAR_6 | VAR_1 | VAR_12 |
  (VAR_10->mode << VAR_2);
 FUNC_4(VAR_12, VAR_10->io_base + VAR_5);
 FUNC_4(1, VAR_10->io_base + VAR_8);


 VAR_12 = FUNC_3(VAR_10->io_base + VAR_5);
 VAR_12 |= VAR_7;
 FUNC_4(VAR_12, VAR_10->io_base + VAR_5);

 return 0;
}
