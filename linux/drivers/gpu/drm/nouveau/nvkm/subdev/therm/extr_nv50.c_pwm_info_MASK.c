
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_therm {struct nvkm_subdev subdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_therm *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_1->subdev;

 if (*VAR_2 == 0x04) {
  *VAR_3 = 0x00e100;
  *VAR_2 = 4;
  *VAR_4 = 0;
 } else
 if (*VAR_2 == 0x09) {
  *VAR_3 = 0x00e100;
  *VAR_2 = 9;
  *VAR_4 = 1;
 } else
 if (*VAR_2 == 0x10) {
  *VAR_3 = 0x00e28c;
  *VAR_2 = 0;
  *VAR_4 = 0;
 } else {
  FUNC_0(VAR_5, "unknown pwm ctrl for gpio %d\n", *VAR_2);
  return -VAR_0;
 }

 return 0;
}
