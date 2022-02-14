
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cam_device {int dummy; } ;


 int FUNC_0 (struct cam_device*,int ,int ,int ,int *,int*) ;

int
FUNC_1(struct cam_device *VAR_0, uint32_t VAR_1, uint8_t VAR_2, uint8_t *VAR_3) {
 uint8_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, 0, VAR_1, 0, ((void*)0), &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_3 = (VAR_4 & (1 << VAR_2)) > 0 ? 1 : 0;

 return (0);
}
