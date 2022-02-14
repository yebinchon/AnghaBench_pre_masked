
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cam_device {int dummy; } ;


 int FUNC_0 (struct cam_device*,int ,int ,int,int*,int*) ;

int
FUNC_1(struct cam_device *VAR_0, uint32_t VAR_1, uint8_t VAR_2, int VAR_3) {
 uint8_t VAR_4;
 int VAR_5;
 uint8_t VAR_6;

 VAR_5 = FUNC_0(VAR_0, 0, VAR_1, 0, ((void*)0), &VAR_4);
 if (VAR_5 != 0)
  return VAR_5;

 VAR_6 = VAR_4 & (1 << VAR_2);
 if ((VAR_6 !=0 && VAR_3 == 1) || (VAR_6 == 0 && VAR_3 == 0))
  return 0;

 if (VAR_3)
  VAR_4 |= 1 << VAR_2;
 else
  VAR_4 &= ~ (1 << VAR_2);

 VAR_5 = FUNC_0(VAR_0, 0, VAR_1, 1, &VAR_4, &VAR_4);

 return VAR_5;
}
