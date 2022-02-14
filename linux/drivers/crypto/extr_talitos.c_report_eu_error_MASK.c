
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct talitos_private {TYPE_1__* chan; scalar_t__ reg_crcu; scalar_t__ reg_mdeu; scalar_t__ reg_pkeu; scalar_t__ reg_aesu; scalar_t__ reg_rngu; scalar_t__ reg_deu; scalar_t__ reg_afeu; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ reg; } ;







 int VAR_0 ;





 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 struct talitos_private* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_8, int VAR_9, u32 VAR_10)
{
 struct talitos_private *VAR_11 = FUNC_1(VAR_8);
 int VAR_12;

 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_11->chan[VAR_9].reg + VAR_2);

 switch (VAR_10 & VAR_0) {
 case 138:
  FUNC_0(VAR_8, "AFEUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_afeu + VAR_4),
   FUNC_2(VAR_11->reg_afeu + VAR_5));
  break;
 case 136:
  FUNC_0(VAR_8, "DEUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_deu + VAR_4),
   FUNC_2(VAR_11->reg_deu + VAR_5));
  break;
 case 134:
 case 133:
  FUNC_0(VAR_8, "MDEUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_mdeu + VAR_4),
   FUNC_2(VAR_11->reg_mdeu + VAR_5));
  break;
 case 131:
  FUNC_0(VAR_8, "RNGUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_rngu + VAR_6),
   FUNC_2(VAR_11->reg_rngu + VAR_7));
  break;
 case 132:
  FUNC_0(VAR_8, "PKEUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_pkeu + VAR_4),
   FUNC_2(VAR_11->reg_pkeu + VAR_5));
  break;
 case 139:
  FUNC_0(VAR_8, "AESUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_aesu + VAR_4),
   FUNC_2(VAR_11->reg_aesu + VAR_5));
  break;
 case 137:
  FUNC_0(VAR_8, "CRCUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_crcu + VAR_4),
   FUNC_2(VAR_11->reg_crcu + VAR_5));
  break;
 case 135:
  FUNC_0(VAR_8, "KEUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_pkeu + VAR_4),
   FUNC_2(VAR_11->reg_pkeu + VAR_5));
  break;
 }

 switch (VAR_10 & VAR_1) {
 case 129:
 case 128:
  FUNC_0(VAR_8, "MDEUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_mdeu + VAR_4),
   FUNC_2(VAR_11->reg_mdeu + VAR_5));
  break;
 case 130:
  FUNC_0(VAR_8, "CRCUISR 0x%08x_%08x\n",
   FUNC_2(VAR_11->reg_crcu + VAR_4),
   FUNC_2(VAR_11->reg_crcu + VAR_5));
  break;
 }

 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  FUNC_0(VAR_8, "DESCBUF 0x%08x_%08x\n",
   FUNC_2(VAR_11->chan[VAR_9].reg + VAR_2 + 8*VAR_12),
   FUNC_2(VAR_11->chan[VAR_9].reg + VAR_3 + 8*VAR_12));
}
