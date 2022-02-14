
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tt ;
struct isar_hw {int iis; int cmsb; int bstat; int clsb; int name; int hw; int (* write_reg ) (int ,int ,int ) ;} ;
struct TYPE_2__ {int state; int ch; int err_rdo; int err_tx; } ;
struct isar_ch {TYPE_1__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int ,int,int*,int ) ;
 int FUNC_1 (struct isar_hw*,int) ;
 int FUNC_2 (struct isar_hw*) ;
 int FUNC_3 (struct isar_ch*,int) ;
 int FUNC_4 (struct isar_ch*,int) ;
 int FUNC_5 (struct isar_ch*) ;
 int FUNC_6 (struct isar_ch*) ;
 int FUNC_7 (char*,int ,int,...) ;
 int FUNC_8 (struct isar_hw*,int *) ;
 struct isar_ch* FUNC_9 (struct isar_hw*,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;

void
FUNC_15(struct isar_hw *VAR_11)
{
 struct isar_ch *VAR_12;

 FUNC_2(VAR_11);
 switch (VAR_11->iis & VAR_5) {
 case 128:
  VAR_12 = FUNC_9(VAR_11, VAR_11->iis >> 6);
  if (VAR_12)
   FUNC_6(VAR_12);
  else {
   FUNC_7("%s: ISAR spurious IIS_RDATA %x/%x/%x\n",
     VAR_11->name, VAR_11->iis, VAR_11->cmsb,
     VAR_11->clsb);
   VAR_11->write_reg(VAR_11->hw, VAR_4, 0);
  }
  break;
 case 133:
  VAR_11->write_reg(VAR_11->hw, VAR_4, 0);
  VAR_11->bstat |= VAR_11->cmsb;
  FUNC_1(VAR_11, VAR_11->cmsb);
  break;
 case 136:
  FUNC_7("%s: Buffer STEV dpath%d msb(%x)\n",
    VAR_11->name, VAR_11->iis >> 6, VAR_11->cmsb);
  VAR_11->write_reg(VAR_11->hw, VAR_4, 0);
  break;
 case 130:
  VAR_12 = FUNC_9(VAR_11, VAR_11->iis >> 6);
  if (VAR_12) {
   FUNC_8(VAR_11, ((void*)0));
   if (VAR_12->bch.state == VAR_6)
    FUNC_4(VAR_12, VAR_11->cmsb);
   else if (VAR_12->bch.state == VAR_8)
    FUNC_3(VAR_12, VAR_11->cmsb);
   else if (VAR_12->bch.state == VAR_7) {
    int VAR_13;
    VAR_13 = VAR_11->cmsb | 0x30;
    if (VAR_13 == 0x3e)
     VAR_13 = '*';
    else if (VAR_13 == 0x3f)
     VAR_13 = '#';
    else if (VAR_13 > '9')
     VAR_13 += 7;
    VAR_13 |= VAR_2;
    FUNC_0(&VAR_12->bch.ch, VAR_10,
         VAR_9, sizeof(VAR_13), &VAR_13,
         VAR_3);
   } else
    FUNC_7("%s: ISAR IIS_PSTEV pm %d sta %x\n",
      VAR_11->name, VAR_12->bch.state,
      VAR_11->cmsb);
  } else {
   FUNC_7("%s: ISAR spurious IIS_PSTEV %x/%x/%x\n",
     VAR_11->name, VAR_11->iis, VAR_11->cmsb,
     VAR_11->clsb);
   VAR_11->write_reg(VAR_11->hw, VAR_4, 0);
  }
  break;
 case 129:
  VAR_12 = FUNC_9(VAR_11, VAR_11->iis >> 6);
  if (VAR_12) {
   FUNC_8(VAR_11, ((void*)0));
   FUNC_5(VAR_12);
  } else {
   FUNC_7("%s: ISAR spurious IIS_PSTRSP %x/%x/%x\n",
     VAR_11->name, VAR_11->iis, VAR_11->cmsb,
     VAR_11->clsb);
   VAR_11->write_reg(VAR_11->hw, VAR_4, 0);
  }
  break;
 case 134:
 case 135:
 case 131:
  FUNC_8(VAR_11, ((void*)0));
  break;
 case 132:
  FUNC_8(VAR_11, ((void*)0));
  FUNC_7("%s: invalid msg his:%x\n", VAR_11->name, VAR_11->cmsb);
  break;
 default:
  FUNC_8(VAR_11, ((void*)0));
  FUNC_7("%s: unhandled msg iis(%x) ctrl(%x/%x)\n",
    VAR_11->name, VAR_11->iis, VAR_11->cmsb, VAR_11->clsb);
  break;
 }
}
