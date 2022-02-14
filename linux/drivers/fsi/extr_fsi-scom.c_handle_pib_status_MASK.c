
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scom_device {int fsi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;




 int VAR_7 ;

 int FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct scom_device *VAR_8, uint8_t VAR_9)
{
 uint32_t VAR_10 = -1;

 if (VAR_9 == VAR_7)
  return 0;
 if (VAR_9 == VAR_6)
  return -VAR_0;


 FUNC_0(VAR_8->fsi_dev, VAR_5, &VAR_10,
    sizeof(uint32_t));

 switch(VAR_9) {
 case 131:
  return -VAR_2;
 case 133:
  return -VAR_3;
 case 128:
  return -VAR_4;
 case 129:
 case 132:
 case 130:
 default:
  return -VAR_1;
 }
}
