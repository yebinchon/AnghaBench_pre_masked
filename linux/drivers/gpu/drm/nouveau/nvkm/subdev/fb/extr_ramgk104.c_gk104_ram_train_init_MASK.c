
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_ram {int type; TYPE_1__* fb; } ;
struct gk104_ram_train {int dummy; } ;
struct TYPE_2__ {int subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct nvkm_ram*,struct gk104_ram_train*) ;
 int FUNC_1 (struct nvkm_ram*,int,int ,struct gk104_ram_train*) ;
 int FUNC_2 (struct gk104_ram_train*) ;
 struct gk104_ram_train* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_ram *VAR_3)
{
 u8 VAR_4 = FUNC_4(&VAR_3->fb->subdev);
 struct gk104_ram_train *VAR_5;
 int VAR_6, VAR_7;

 if (!(VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2)))
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < 0x100; VAR_7++) {
  VAR_6 = FUNC_1(VAR_3, VAR_7, VAR_4, VAR_5);
  if (VAR_6 && VAR_6 != -VAR_0)
   break;
 }

 switch (VAR_3->type) {
 case 128:
  VAR_6 = FUNC_0(VAR_3, VAR_5);
  break;
 default:
  VAR_6 = 0;
  break;
 }

 FUNC_2(VAR_5);
 return VAR_6;
}
