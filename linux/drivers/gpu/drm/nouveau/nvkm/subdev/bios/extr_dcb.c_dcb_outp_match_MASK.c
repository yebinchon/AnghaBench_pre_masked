
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct dcb_output {int dummy; } ;


 int FUNC_0 (struct dcb_output*) ;
 int FUNC_1 (struct dcb_output*) ;
 int FUNC_2 (struct nvkm_bios*,int ,int *,int *,struct dcb_output*) ;

u16
FUNC_3(struct nvkm_bios *VAR_0, u16 VAR_1, u16 VAR_2,
        u8 *VAR_3, u8 *VAR_4, struct dcb_output *VAR_5)
{
 u16 VAR_6, VAR_7 = 0;
 while ((VAR_6 = FUNC_2(VAR_0, VAR_7++, VAR_3, VAR_4, VAR_5))) {
  if ((FUNC_1(VAR_5) & 0x00ff) == (VAR_1 & 0x00ff)) {
   if ((FUNC_0(VAR_5) & VAR_2) == VAR_2)
    break;
  }
 }
 return VAR_6;
}
