
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_memory {int kref; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

void
FUNC_1(struct nvkm_memory **VAR_1)
{
 struct nvkm_memory *VAR_2 = *VAR_1;
 if (VAR_2) {
  FUNC_0(&VAR_2->kref, VAR_0);
  *VAR_1 = ((void*)0);
 }
}
