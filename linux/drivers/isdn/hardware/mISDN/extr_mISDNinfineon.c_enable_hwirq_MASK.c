
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_4__ {int start; int p; } ;
struct inf_hw {TYPE_2__ cfg; TYPE_1__* ci; } ;
struct TYPE_3__ {int typ; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct inf_hw *VAR_15)
{
 u16 VAR_16;
 u32 VAR_17;

 switch (VAR_15->ci->typ) {
 case 137:
 case 136:
  FUNC_5(VAR_8, VAR_15->cfg.p);
  break;
 case 128:
 case 130:
  FUNC_2(VAR_14, (u32)VAR_15->cfg.start + VAR_13);
  break;
 case 132:
  FUNC_2(VAR_9, (u32)VAR_15->cfg.start + VAR_0);
  break;
 case 131:
  FUNC_2(VAR_10, (u32)VAR_15->cfg.start + VAR_0);
  break;
 case 133:
  VAR_17 = FUNC_0((u32)VAR_15->cfg.start + VAR_6);
  VAR_17 |= VAR_7;
  FUNC_3(VAR_17, (u32)VAR_15->cfg.start + VAR_6);
  break;
 case 129:
  VAR_16 = FUNC_1((u32)VAR_15->cfg.start + VAR_11);
  VAR_16 |= VAR_12;
  FUNC_4(VAR_16, (u32)VAR_15->cfg.start + VAR_11);
  break;
 case 135:
  FUNC_2(VAR_4 + VAR_1 + VAR_5,
       (u32)VAR_15->cfg.start + VAR_2);
  break;
 case 134:
  FUNC_2(VAR_3 + VAR_5,
       (u32)VAR_15->cfg.start + VAR_2);
  break;
 default:
  break;
 }
}
