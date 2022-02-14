
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_volt {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct gk20a_volt {struct nvkm_volt base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nvkm_device*,int,int ,int ,int ,struct gk20a_volt*) ;
 struct gk20a_volt* FUNC_2 (int,int ) ;

int
FUNC_3(struct nvkm_device *VAR_3, int VAR_4, struct nvkm_volt **VAR_5)
{
 struct gk20a_volt *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 *VAR_5 = &VAR_6->base;

 return FUNC_1(VAR_3, VAR_4, VAR_2,
          FUNC_0(VAR_2), 0, VAR_6);
}
