
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cyttsp4_mt_data {scalar_t__ num_prv_tch; int input; TYPE_3__* si; } ;
struct TYPE_5__ {TYPE_1__* tch_abs; } ;
struct TYPE_6__ {TYPE_2__ si_ofs; } ;
struct TYPE_4__ {int max; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cyttsp4_mt_data*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cyttsp4_mt_data *VAR_1)
{
 if (!VAR_1->si)
  return;

 if (VAR_1->num_prv_tch != 0) {
  FUNC_0(VAR_1,
    VAR_1->si->si_ofs.tch_abs[VAR_0].max);
  FUNC_1(VAR_1->input);
  VAR_1->num_prv_tch = 0;
 }
}
