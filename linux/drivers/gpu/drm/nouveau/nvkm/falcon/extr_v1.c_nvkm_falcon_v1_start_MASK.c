
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_falcon {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_falcon*,int) ;
 int FUNC_2 (struct nvkm_falcon*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_falcon *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0, 0x100);

 if (VAR_1 & FUNC_0(6))
  FUNC_2(VAR_0, 0x130, 0x2);
 else
  FUNC_2(VAR_0, 0x100, 0x2);
}
