
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct npcm7xx_kcs_bmc {int map; } ;
struct kcs_bmc {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 struct npcm7xx_kcs_bmc* FUNC_1 (struct kcs_bmc*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static u8 FUNC_3(struct kcs_bmc *VAR_0, u32 VAR_1)
{
 struct npcm7xx_kcs_bmc *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->map, VAR_1, &VAR_3);
 FUNC_0(VAR_4 != 0, "regmap_read() failed: %d\n", VAR_4);

 return VAR_4 == 0 ? (u8)VAR_3 : 0;
}
