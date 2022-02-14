
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_secboot {int dummy; } ;
struct gm200_secboot {int dummy; } ;


 int VAR_0 ;
 struct gm200_secboot* FUNC_0 (struct nvkm_secboot*) ;
 int FUNC_1 (struct nvkm_secboot*) ;
 int FUNC_2 (struct gm200_secboot*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_secboot *VAR_1)
{
 struct gm200_secboot *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1);
}
