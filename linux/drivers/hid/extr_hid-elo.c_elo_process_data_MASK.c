
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int const) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_4, const u8 *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4, VAR_1, (VAR_5[3] << 8) | VAR_5[2]);
 FUNC_0(VAR_4, VAR_2, (VAR_5[5] << 8) | VAR_5[4]);

 VAR_7 = 0;
 if (VAR_5[1] & 0x80)
  VAR_7 = (VAR_5[7] << 8) | VAR_5[6];
 FUNC_0(VAR_4, VAR_0, VAR_7);

 if (VAR_5[1] & 0x03) {
  FUNC_1(VAR_4, VAR_3, 1);
  FUNC_2(VAR_4);
 }

 if (VAR_5[1] & 0x04)
  FUNC_1(VAR_4, VAR_3, 0);

 FUNC_2(VAR_4);
}
