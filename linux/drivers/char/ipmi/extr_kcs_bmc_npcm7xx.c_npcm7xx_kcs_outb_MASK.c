
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct npcm7xx_kcs_bmc {int map; } ;
struct kcs_bmc {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 struct npcm7xx_kcs_bmc* FUNC_1 (struct kcs_bmc*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct kcs_bmc *VAR_0, u32 VAR_1, u8 VAR_2)
{
 struct npcm7xx_kcs_bmc *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->map, VAR_1, VAR_2);
 FUNC_0(VAR_4 != 0, "regmap_write() failed: %d\n", VAR_4);
}
