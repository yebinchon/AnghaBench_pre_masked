
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_pmu {struct nvkm_falcon* falcon; struct nvkm_subdev subdev; } ;
struct nvkm_falcon {int name; } ;
struct nvkm_device {int timer; } ;
struct gk20a_pmu {int alarm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gk20a_pmu* FUNC_0 (struct nvkm_pmu*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int ) ;
 int FUNC_2 (struct nvkm_falcon*,struct nvkm_subdev*) ;
 int FUNC_3 (struct nvkm_falcon*,int,int) ;
 int FUNC_4 (int ,int,int *) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_pmu *VAR_2)
{
 struct gk20a_pmu *VAR_3 = FUNC_0(VAR_2);
 struct nvkm_subdev *VAR_4 = &VAR_2->subdev;
 struct nvkm_device *VAR_5 = VAR_2->subdev.device;
 struct nvkm_falcon *VAR_6 = VAR_2->falcon;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_4, "cannot acquire %s falcon!\n", VAR_6->name);
  return VAR_7;
 }


 FUNC_3(VAR_6, 0x504 + (VAR_0 * 0x10), 0x00200001);
 FUNC_3(VAR_6, 0x50c + (VAR_0 * 0x10), 0x00000002);
 FUNC_3(VAR_6, 0x50c + (VAR_1 * 0x10), 0x00000003);

 FUNC_4(VAR_5->timer, 2000000000, &VAR_3->alarm);
 return 0;
}
