
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_outp {int dummy; } ;
struct nvkm_dp {int hpd; } ;


 struct nvkm_dp* FUNC_0 (struct nvkm_outp*) ;
 int FUNC_1 (struct nvkm_dp*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_outp *VAR_0)
{
 struct nvkm_dp *VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->hpd);
 FUNC_1(VAR_1, 0);
}
