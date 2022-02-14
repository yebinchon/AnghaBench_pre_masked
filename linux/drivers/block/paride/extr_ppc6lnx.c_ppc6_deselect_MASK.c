
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int cur_ctrl; int org_data; int org_ctrl; scalar_t__ lpt_addr; } ;
typedef TYPE_1__ Interface ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(Interface *VAR_2)
{
 if (VAR_2->mode & 4)
  VAR_2->cur_ctrl |= VAR_0;
 else
  VAR_2->cur_ctrl |= VAR_1;

 FUNC_0(VAR_2->cur_ctrl, VAR_2->lpt_addr + 2);

 FUNC_0(VAR_2->org_data, VAR_2->lpt_addr);

 FUNC_0((VAR_2->org_ctrl | VAR_1), VAR_2->lpt_addr + 2);

 FUNC_0(VAR_2->org_ctrl, VAR_2->lpt_addr + 2);
}
