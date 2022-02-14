
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_timer {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_device*,int ) ;
 int FUNC_2 (struct nvkm_subdev*,char*) ;
 int FUNC_3 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_timer *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_2->subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = 0;
 u32 VAR_6, VAR_7;


 VAR_7 = 1000000 / 32;
 VAR_6 = VAR_5;

 if (!VAR_5) {
  VAR_6 = FUNC_1(VAR_4, VAR_1);
  VAR_7 = FUNC_1(VAR_4, VAR_0);
  if (!VAR_6 || !VAR_7) {
   VAR_6 = 1;
   VAR_7 = 1;
  }
  FUNC_2(VAR_3, "unknown input clock freq\n");
 }


 while (((VAR_6 % 5) == 0) && ((VAR_7 % 5) == 0)) {
  VAR_6 /= 5;
  VAR_7 /= 5;
 }

 while (((VAR_6 % 2) == 0) && ((VAR_7 % 2) == 0)) {
  VAR_6 /= 2;
  VAR_7 /= 2;
 }

 while (VAR_6 > 0xffff || VAR_7 > 0xffff) {
  VAR_6 >>= 1;
  VAR_7 >>= 1;
 }

 FUNC_0(VAR_3, "input frequency : %dHz\n", VAR_5);
 FUNC_0(VAR_3, "numerator       : %08x\n", VAR_6);
 FUNC_0(VAR_3, "denominator     : %08x\n", VAR_7);
 FUNC_0(VAR_3, "timer frequency : %dHz\n", VAR_5 * VAR_7 / VAR_6);

 FUNC_3(VAR_4, VAR_1, VAR_6);
 FUNC_3(VAR_4, VAR_0, VAR_7);
}
