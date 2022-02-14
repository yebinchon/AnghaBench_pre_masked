
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_therm {struct nvkm_fan* fan; } ;
struct nvkm_fan {char* type; int set; int get; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_fan* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_1(struct nvkm_therm *VAR_4)
{
 struct nvkm_fan *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 VAR_4->fan = VAR_5;
 if (!VAR_5)
  return -VAR_0;

 VAR_5->type = "none / external";
 VAR_5->get = VAR_2;
 VAR_5->set = VAR_3;
 return 0;
}
