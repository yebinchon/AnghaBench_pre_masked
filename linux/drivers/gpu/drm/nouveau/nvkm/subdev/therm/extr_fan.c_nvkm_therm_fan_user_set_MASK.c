
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_therm {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nvkm_therm*,int,int) ;

int
FUNC_1(struct nvkm_therm *VAR_2, int VAR_3)
{
 if (VAR_2->mode != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, 1, VAR_3);
}
