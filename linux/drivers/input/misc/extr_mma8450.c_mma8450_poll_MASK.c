
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma8450 {int dummy; } ;
struct input_polled_dev {int input; struct mma8450* private; } ;
typedef scalar_t__ s8 ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mma8450*,int ) ;
 int FUNC_3 (struct mma8450*,int ,int*,int) ;

__attribute__((used)) static void FUNC_4(struct input_polled_dev *VAR_6)
{
 struct mma8450 *VAR_7 = VAR_6->private;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;
 u8 VAR_12[6];

 VAR_11 = FUNC_2(VAR_7, VAR_4);
 if (VAR_11 < 0)
  return;

 if (!(VAR_11 & VAR_5))
  return;

 VAR_11 = FUNC_3(VAR_7, VAR_3, VAR_12, sizeof(VAR_12));
 if (VAR_11 < 0)
  return;

 VAR_8 = ((int)(s8)VAR_12[1] << 4) | (VAR_12[0] & 0xf);
 VAR_9 = ((int)(s8)VAR_12[3] << 4) | (VAR_12[2] & 0xf);
 VAR_10 = ((int)(s8)VAR_12[5] << 4) | (VAR_12[4] & 0xf);

 FUNC_0(VAR_6->input, VAR_0, VAR_8);
 FUNC_0(VAR_6->input, VAR_1, VAR_9);
 FUNC_0(VAR_6->input, VAR_2, VAR_10);
 FUNC_1(VAR_6->input);
}
