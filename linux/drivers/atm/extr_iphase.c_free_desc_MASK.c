
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
struct TYPE_4__ {int fdq_wr; int fdq_ed; int fdq_st; } ;
struct TYPE_5__ {scalar_t__ reass_reg; TYPE_1__ rfL; scalar_t__ reass_ram; } ;
typedef TYPE_2__ IADEV ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atm_dev *VAR_1, int VAR_2)
{
 IADEV *VAR_3;
 VAR_3 = FUNC_0(VAR_1);
        FUNC_1(VAR_2, VAR_3->reass_ram+VAR_3->rfL.fdq_wr);
 VAR_3->rfL.fdq_wr +=2;
 if (VAR_3->rfL.fdq_wr > VAR_3->rfL.fdq_ed)
  VAR_3->rfL.fdq_wr = VAR_3->rfL.fdq_st;
 FUNC_1(VAR_3->rfL.fdq_wr, VAR_3->reass_reg+VAR_0);
}
