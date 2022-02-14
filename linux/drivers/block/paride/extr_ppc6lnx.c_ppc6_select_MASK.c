
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int org_data; int org_ctrl; int cur_ctrl; int ppc_id; int mode; scalar_t__ lpt_addr; } ;
typedef TYPE_1__ Interface ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(Interface *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_4->lpt_addr + 1);

 if (VAR_5 & 1)
  FUNC_1(VAR_5, VAR_4->lpt_addr + 1);

 VAR_4->org_data = FUNC_0(VAR_4->lpt_addr);

 VAR_4->org_ctrl = FUNC_0(VAR_4->lpt_addr + 2) & 0x5F;

 VAR_4->cur_ctrl = VAR_4->org_ctrl;

 VAR_4->cur_ctrl |= VAR_3;

 FUNC_1(VAR_4->cur_ctrl, VAR_4->lpt_addr + 2);

 if (VAR_4->org_data == 'b')
  FUNC_1('x', VAR_4->lpt_addr);

 FUNC_1('b', VAR_4->lpt_addr);
 FUNC_1('p', VAR_4->lpt_addr);
 FUNC_1(VAR_4->ppc_id, VAR_4->lpt_addr);
 FUNC_1(~VAR_4->ppc_id,VAR_4->lpt_addr);

 VAR_4->cur_ctrl &= ~VAR_3;

 FUNC_1(VAR_4->cur_ctrl, VAR_4->lpt_addr + 2);

 VAR_4->cur_ctrl = (VAR_4->cur_ctrl & VAR_2) | VAR_1;

 FUNC_1(VAR_4->cur_ctrl, VAR_4->lpt_addr + 2);

 VAR_5 = VAR_4->mode & 0x0C;

 if (VAR_5 == 0)
  VAR_5 = (VAR_4->mode & 2) | 1;

 FUNC_1(VAR_5, VAR_4->lpt_addr);

 VAR_4->cur_ctrl |= VAR_3;

 FUNC_1(VAR_4->cur_ctrl, VAR_4->lpt_addr + 2);



 VAR_4->cur_ctrl |= VAR_0;

 FUNC_1(VAR_4->cur_ctrl, VAR_4->lpt_addr + 2);

 VAR_6 = ((VAR_5 & 0x08) << 4) | ((VAR_5 & 0x07) << 3);

 VAR_7 = FUNC_0(VAR_4->lpt_addr + 1) & 0xB8;

 if (VAR_6 == VAR_7)
 {
  VAR_4->cur_ctrl &= ~VAR_0;

  FUNC_1(VAR_4->cur_ctrl, VAR_4->lpt_addr + 2);

  VAR_7 = (FUNC_0(VAR_4->lpt_addr + 1) & 0xB8) ^ 0xB8;

  if (VAR_6 == VAR_7)
  {
   if (VAR_5 & 4)
    VAR_4->cur_ctrl &= ~(VAR_3 | VAR_1);
   else
    VAR_4->cur_ctrl &= ~VAR_3;

   FUNC_1(VAR_4->cur_ctrl, VAR_4->lpt_addr + 2);

   return(1);
  }
 }

 FUNC_1(VAR_4->org_ctrl, VAR_4->lpt_addr + 2);

 FUNC_1(VAR_4->org_data, VAR_4->lpt_addr);

 return(0);
}
