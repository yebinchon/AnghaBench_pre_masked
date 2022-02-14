
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_conn {int hpd; } ;


 int FUNC_0 (struct nvkm_conn*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nvkm_conn **VAR_0)
{
 struct nvkm_conn *VAR_1 = *VAR_0;
 if (VAR_1) {
  FUNC_1(&VAR_1->hpd);
  FUNC_0(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
