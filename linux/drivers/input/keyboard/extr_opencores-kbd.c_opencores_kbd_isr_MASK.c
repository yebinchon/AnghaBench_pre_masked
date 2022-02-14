
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opencores_kbd {int addr; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,unsigned char,int) ;
 int FUNC_1 (struct input_dev*) ;
 unsigned char FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct opencores_kbd *VAR_3 = VAR_2;
 struct input_dev *VAR_4 = VAR_3->input;
 unsigned char VAR_5;

 VAR_5 = FUNC_2(VAR_3->addr);
 FUNC_0(VAR_4, VAR_5 & 0x7f, VAR_5 & 0x80 ? 0 : 1);
 FUNC_1(VAR_4);

 return VAR_0;
}
