
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int) ;

void FUNC_1(struct input_dev *VAR_2, u8 *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_3[1] ? VAR_3[1] - ((VAR_3[0] << 4) & 0x100) : 0;
 VAR_5 = VAR_3[2] ? VAR_3[2] - ((VAR_3[0] << 3) & 0x100) : 0;

 FUNC_0(VAR_2, VAR_0, VAR_4);
 FUNC_0(VAR_2, VAR_1, -VAR_5);
}
