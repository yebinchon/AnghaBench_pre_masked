
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int size; int timer; scalar_t__ map; } ;
struct mthca_dev {TYPE_1__ catas_err; } ;
struct TYPE_4__ {int timer; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct mthca_dev* VAR_2 ;
 struct mthca_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct mthca_dev*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct mthca_dev *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_1.timer);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->catas_err.size; ++VAR_6)
  if (FUNC_3(VAR_5->catas_err.map + VAR_6)) {
   FUNC_1(VAR_5);
   return;
  }

 FUNC_2(&VAR_5->catas_err.timer,
    FUNC_4(VAR_3 + VAR_0));
}
