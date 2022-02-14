
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_gpadc {int dev; int palmas; int conv_completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,unsigned int*,int) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct palmas_gpadc *VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;

 FUNC_1(&VAR_6->conv_completion);
 VAR_9 = FUNC_3(VAR_6->palmas, VAR_2,
    VAR_4,
    VAR_5,
    VAR_5);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "SELECT_SW_START write failed: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_4(&VAR_6->conv_completion,
    VAR_1);
 if (VAR_9 == 0) {
  FUNC_0(VAR_6->dev, "conversion not completed\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_6->palmas, VAR_2,
    VAR_3, &VAR_8, 2);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "SW_CONV0_LSB read failed: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = VAR_8 & 0xFFF;

 return VAR_9;
}
