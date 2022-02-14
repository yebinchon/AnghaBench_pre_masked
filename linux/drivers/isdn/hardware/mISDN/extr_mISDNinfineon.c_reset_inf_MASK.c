
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_7__ {int adf2; } ;
struct TYPE_10__ {int conf; int (* write_reg ) (struct inf_hw*,int ,int) ;TYPE_3__* hscx; TYPE_2__ isac; } ;
struct TYPE_9__ {int start; scalar_t__ p; } ;
struct inf_hw {TYPE_5__ ipac; TYPE_4__ cfg; TYPE_1__* ci; int name; } ;
struct TYPE_8__ {int slot; } ;
struct TYPE_6__ {int typ; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct inf_hw*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inf_hw*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct inf_hw*,int ,int) ;
 int FUNC_10 (struct inf_hw*,int ,int) ;
 int FUNC_11 (struct inf_hw*,int ,int) ;
 int FUNC_12 (struct inf_hw*,int ,int) ;
 int FUNC_13 (struct inf_hw*,int ,int) ;
 int FUNC_14 (struct inf_hw*,int ,int) ;
 int FUNC_15 (struct inf_hw*,int ,int) ;
 int FUNC_16 (struct inf_hw*,int ,int) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_18(struct inf_hw *VAR_18)
{
 u16 VAR_19;
 u32 VAR_20;

 if (VAR_17 & VAR_0)
  FUNC_8("%s: resetting card\n", VAR_18->name);
 switch (VAR_18->ci->typ) {
 case 139:
 case 136:
  FUNC_5(0, (u32)VAR_18->cfg.start + VAR_2);
  FUNC_4(10);
  FUNC_5(VAR_3, (u32)VAR_18->cfg.start + VAR_2);
  FUNC_4(10);

  FUNC_5(9, (u32)VAR_18->cfg.start + 0x69);
  FUNC_5(VAR_3 | VAR_1,
       (u32)VAR_18->cfg.start + VAR_2);
  break;
 case 138:
  FUNC_17(VAR_13 | VAR_12,
         VAR_18->cfg.p + VAR_11);
  FUNC_4(1);
  FUNC_17(VAR_12, VAR_18->cfg.p + VAR_11);
  FUNC_4(10);
  break;
 case 137:
  FUNC_17(VAR_13 | VAR_12,
         VAR_18->cfg.p + VAR_11);
  FUNC_4(1);
  FUNC_17(VAR_12 | VAR_14,
         VAR_18->cfg.p + VAR_11);
  FUNC_4(10);
  break;
 case 128:
 case 130:
  FUNC_3(VAR_18);
  VAR_18->ipac.write_reg(VAR_18, VAR_7, 0xff);
  VAR_18->ipac.write_reg(VAR_18, VAR_8, 0x00);
  VAR_18->ipac.write_reg(VAR_18, VAR_10, 0x12);
  break;
 case 132:
 case 131:
  FUNC_3(VAR_18);
  VAR_18->ipac.write_reg(VAR_18, VAR_7, 0x00);
  VAR_18->ipac.write_reg(VAR_18, VAR_8, 0x3c);
  VAR_18->ipac.write_reg(VAR_18, VAR_9, 0xff);
  break;
 case 133:
  break;
 case 129:
  VAR_19 = FUNC_2((u32)VAR_18->cfg.start + VAR_15);
  VAR_19 &= (~VAR_16);
  FUNC_7(VAR_19, (u32)VAR_18->cfg.start + VAR_15);
  FUNC_4(10);
  VAR_19 = FUNC_2((u32)VAR_18->cfg.start + VAR_15);
  VAR_19 |= VAR_16;
  FUNC_7(VAR_19, (u32)VAR_18->cfg.start + VAR_15);
  FUNC_4(10);
  break;
 case 135:
  VAR_20 = FUNC_1((u32)VAR_18->cfg.start + VAR_4);
  VAR_20 |= (VAR_6 + VAR_5);
  FUNC_6(VAR_20, (u32)VAR_18->cfg.start + VAR_4);
  VAR_20 &= ~(VAR_6 + VAR_5);
  FUNC_4(4);
  FUNC_6(VAR_20, (u32)VAR_18->cfg.start + VAR_4);
  FUNC_4(10);
  VAR_18->ipac.isac.adf2 = 0x87;
  VAR_18->ipac.hscx[0].slot = 0x1f;
  VAR_18->ipac.hscx[1].slot = 0x23;
  break;
 case 134:
  VAR_20 = FUNC_1((u32)VAR_18->cfg.start + VAR_4);
  VAR_20 |= (VAR_6 + VAR_5);
  FUNC_6(VAR_20, (u32)VAR_18->cfg.start + VAR_4);
  VAR_20 &= ~(VAR_6 + VAR_5);
  FUNC_4(4);
  FUNC_6(VAR_20, (u32)VAR_18->cfg.start + VAR_4);
  FUNC_4(10);
  FUNC_3(VAR_18);
  VAR_18->ipac.write_reg(VAR_18, VAR_7, 0xff);
  VAR_18->ipac.write_reg(VAR_18, VAR_8, 0x00);
  VAR_18->ipac.conf = 0x01;
  break;
 default:
  return;
 }
 FUNC_0(VAR_18);
}
