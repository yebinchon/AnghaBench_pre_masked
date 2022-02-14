
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iadc_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct iadc_chip*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct iadc_chip *VAR_7)
{
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_3, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 < VAR_4) {
  FUNC_0(VAR_7->dev, "%d is not ADC\n", VAR_8);
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_1, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 < VAR_2) {
  FUNC_0(VAR_7->dev, "%d is not IADC\n", VAR_8);
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_5, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 < VAR_6) {
  FUNC_0(VAR_7->dev, "revision %d not supported\n", VAR_8);
  return -VAR_0;
 }

 return 0;
}
