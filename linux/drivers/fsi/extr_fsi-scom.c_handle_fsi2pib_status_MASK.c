
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scom_device {int fsi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct scom_device *VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9 = -1;

 if (VAR_8 & VAR_6)
  return -VAR_2;
 if (VAR_8 & VAR_4) {
  FUNC_0(VAR_7->fsi_dev, VAR_3, &VAR_9,
     sizeof(uint32_t));
  return -VAR_1;
 }

 if (VAR_8 & VAR_5)
  return -VAR_0;
 return 0;
}
