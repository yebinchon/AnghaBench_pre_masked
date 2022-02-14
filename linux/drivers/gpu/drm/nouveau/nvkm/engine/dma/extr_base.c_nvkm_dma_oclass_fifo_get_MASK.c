
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_oclass {int base; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct nvkm_oclass *VAR_1, int VAR_2)
{
 const int VAR_3 = FUNC_0(VAR_0);
 if (VAR_2 < VAR_3) {
  VAR_1->base = VAR_0[VAR_2];
  return VAR_2;
 }
 return VAR_3;
}
