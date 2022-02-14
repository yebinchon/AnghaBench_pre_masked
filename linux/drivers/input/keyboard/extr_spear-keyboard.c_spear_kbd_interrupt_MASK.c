
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct spear_kbd {unsigned int last_key; unsigned int* keycodes; scalar_t__ io_base; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct input_dev*,int ,int ,size_t) ;
 int FUNC_1 (struct input_dev*,unsigned int,int) ;
 int FUNC_2 (struct input_dev*) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_10, void *VAR_11)
{
 struct spear_kbd *VAR_12 = VAR_11;
 struct input_dev *VAR_13 = VAR_12->input;
 unsigned int VAR_14;
 u32 VAR_15, VAR_16;

 VAR_15 = FUNC_3(VAR_12->io_base + VAR_9);
 if (!(VAR_15 & VAR_8))
  return VAR_5;

 if (VAR_12->last_key != VAR_6) {
  FUNC_1(VAR_13, VAR_12->last_key, 0);
  VAR_12->last_key = VAR_6;
 }


 VAR_16 = FUNC_3(VAR_12->io_base + VAR_1) &
  (VAR_2 | VAR_0);
 VAR_14 = VAR_12->keycodes[VAR_16];

 FUNC_0(VAR_13, VAR_3, VAR_7, VAR_16);
 FUNC_1(VAR_13, VAR_14, 1);
 FUNC_2(VAR_13);

 VAR_12->last_key = VAR_14;


 FUNC_4(0, VAR_12->io_base + VAR_9);

 return VAR_4;
}
