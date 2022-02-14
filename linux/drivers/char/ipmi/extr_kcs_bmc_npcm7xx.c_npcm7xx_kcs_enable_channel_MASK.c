
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct npcm7xx_kcs_bmc {TYPE_1__* reg; int map; } ;
struct kcs_bmc {int dummy; } ;
struct TYPE_2__ {int ie; int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct npcm7xx_kcs_bmc* FUNC_0 (struct kcs_bmc*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct kcs_bmc *VAR_3, bool VAR_4)
{
 struct npcm7xx_kcs_bmc *VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_5->map, VAR_5->reg->ctl, VAR_0,
      VAR_4 ? VAR_0 : 0);

 FUNC_1(VAR_5->map, VAR_5->reg->ie, VAR_2 | VAR_1,
      VAR_4 ? VAR_2 | VAR_1 : 0);
}
