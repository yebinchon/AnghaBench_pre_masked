
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_iccsense {int rails; int sensors; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nvkm_iccsense* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvkm_device*,int,struct nvkm_iccsense*) ;

int
FUNC_3(struct nvkm_device *VAR_2, int VAR_3,
     struct nvkm_iccsense **VAR_4)
{
 if (!(*VAR_4 = FUNC_1(sizeof(**VAR_4), VAR_1)))
  return -VAR_0;
 FUNC_0(&(*VAR_4)->sensors);
 FUNC_0(&(*VAR_4)->rails);
 FUNC_2(VAR_2, VAR_3, *VAR_4);
 return 0;
}
