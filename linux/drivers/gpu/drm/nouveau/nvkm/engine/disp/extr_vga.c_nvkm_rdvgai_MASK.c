
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

u8
FUNC_3(struct nvkm_device *VAR_0, int VAR_1, u16 VAR_2, u8 VAR_3)
{
 if (VAR_2 == 0x03c4) return FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_2 == 0x03ce) return FUNC_1(VAR_0, VAR_1, VAR_3);
 if (VAR_2 == 0x03d4) return FUNC_0(VAR_0, VAR_1, VAR_3);
 return 0x00;
}
