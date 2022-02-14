
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct nvkm_device*,int,int,int,struct nvkm_engine**) ;

int
FUNC_1(struct nvkm_device *VAR_5, int VAR_6,
      struct nvkm_engine **VAR_7)
{
 if (VAR_6 == VAR_1) {
  return FUNC_0(&VAR_3, VAR_5, VAR_6, 1,
     0x104000, VAR_7);
 } else
 if (VAR_6 == VAR_2) {
  return FUNC_0(&VAR_4, VAR_5, VAR_6, 1,
     0x105000, VAR_7);
 }
 return -VAR_0;
}
