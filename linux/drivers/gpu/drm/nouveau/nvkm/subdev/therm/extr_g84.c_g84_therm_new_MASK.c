
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_therm {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct nvkm_device*,int,struct nvkm_therm**) ;
 int FUNC_1 (struct nvkm_therm*,int ,int ) ;

int
FUNC_2(struct nvkm_device *VAR_6, int VAR_7, struct nvkm_therm **VAR_8)
{
 struct nvkm_therm *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(&VAR_5, VAR_6, VAR_7, &VAR_9);
 *VAR_8 = VAR_9;
 if (VAR_10)
  return VAR_10;


 FUNC_1(VAR_9, VAR_4,
           VAR_3);
 FUNC_1(VAR_9, VAR_2,
           VAR_3);
 FUNC_1(VAR_9, VAR_0,
           VAR_3);
 FUNC_1(VAR_9, VAR_1,
           VAR_3);
 return 0;
}
