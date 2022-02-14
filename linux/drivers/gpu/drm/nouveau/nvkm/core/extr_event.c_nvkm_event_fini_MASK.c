
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_event {int * refs; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct nvkm_event *VAR_0)
{
 if (VAR_0->refs) {
  FUNC_0(VAR_0->refs);
  VAR_0->refs = ((void*)0);
 }
}
