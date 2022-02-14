
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct input_dev {int dummy; } ;
struct egalax {int* data; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct egalax *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5->input;
 u8 *VAR_7 = VAR_5->data;
 u16 VAR_8, VAR_9;
 u8 VAR_10;
 u8 VAR_11;

 VAR_10 = 3 - ((VAR_7[0] & VAR_3) >> 1);
 VAR_11 = 0xff >> (VAR_10 + 1);

 VAR_8 = (((u16)(VAR_7[1] & VAR_11) << 7) | (VAR_7[2] & 0x7f)) << VAR_10;
 VAR_9 = (((u16)(VAR_7[3] & VAR_11) << 7) | (VAR_7[4] & 0x7f)) << VAR_10;

 FUNC_1(VAR_6, VAR_2, VAR_7[0] & VAR_4);
 FUNC_0(VAR_6, VAR_0, VAR_8);
 FUNC_0(VAR_6, VAR_1, VAR_9);
 FUNC_2(VAR_6);
}
