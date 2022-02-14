
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int wq; } ;
struct cdns_i3c_master {int hj_work; TYPE_1__ base; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;



 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cdns_i3c_master*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct cdns_i3c_master *VAR_6)
{
 u32 VAR_7;

 FUNC_6(VAR_3, VAR_6->regs + VAR_2);

 for (VAR_7 = FUNC_5(VAR_6->regs + VAR_4);
      !(VAR_7 & VAR_5);
      VAR_7 = FUNC_5(VAR_6->regs + VAR_4)) {
  u32 VAR_8 = FUNC_5(VAR_6->regs + VAR_0);

  switch (FUNC_0(VAR_8)) {
  case 129:
   FUNC_3(VAR_6, VAR_8);
   break;

  case 130:
   FUNC_2(FUNC_1(VAR_8) || (VAR_8 & VAR_1));
   FUNC_4(VAR_6->base.wq, &VAR_6->hj_work);
   break;

  case 128:
   FUNC_2(FUNC_1(VAR_8) || (VAR_8 & VAR_1));
  default:
   break;
  }
 }
}
