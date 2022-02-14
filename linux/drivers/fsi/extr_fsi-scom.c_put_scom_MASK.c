
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct scom_device {int fsi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (struct scom_device*,int) ;
 int FUNC_2 (struct scom_device*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct scom_device*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct scom_device *VAR_6, uint64_t VAR_7,
      uint64_t VAR_8)
{
 uint32_t VAR_9, VAR_10 = -1;
 int VAR_11, VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_11 = FUNC_4(VAR_6, VAR_7, VAR_8, &VAR_9);
  if (VAR_11) {

   if (VAR_11 != -VAR_1 && VAR_12 == 0) {
    FUNC_0(VAR_6->fsi_dev, VAR_2,
       &VAR_10, sizeof(uint32_t));
    VAR_11 = -VAR_0;
   } else
    return VAR_11;
  } else
   VAR_11 = FUNC_1(VAR_6, VAR_9);
  if (VAR_11 && VAR_11 != -VAR_0)
   break;
  if (VAR_11 == 0) {
   VAR_11 = FUNC_2(VAR_6,
            (VAR_9 & VAR_4)
            >> VAR_5);
   if (VAR_11 && VAR_11 != -VAR_0)
    break;
  }
  if (VAR_11 == 0)
   break;
  FUNC_3(1);
 }
 return VAR_11;
}
