
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
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct inf_hw *VAR_9)
{
 u16 VAR_10;
 u32 VAR_11;

 switch (VAR_9->ci->typ) {
 case 137:
 case 136:
  FUNC_5(0, VAR_9->cfg.p);
  break;
 case 128:
 case 130:
  FUNC_2(0, (u32)VAR_9->cfg.start + VAR_8);
  break;
 case 132:
  FUNC_2(VAR_4, (u32)VAR_9->cfg.start + VAR_0);
  break;
 case 131:
  FUNC_2(VAR_5, (u32)VAR_9->cfg.start + VAR_0);
  break;
 case 133:
  VAR_11 = FUNC_0((u32)VAR_9->cfg.start + VAR_2);
  VAR_11 &= VAR_3;
  FUNC_3(VAR_11, (u32)VAR_9->cfg.start + VAR_2);
  break;
 case 129:
  VAR_10 = FUNC_1((u32)VAR_9->cfg.start + VAR_6);
  VAR_10 &= (~VAR_7);
  FUNC_4(VAR_10, (u32)VAR_9->cfg.start + VAR_6);
  break;
 case 135:
 case 134:
  FUNC_2(0, (u32)VAR_9->cfg.start + VAR_1);
  break;
 default:
  break;
 }
}
