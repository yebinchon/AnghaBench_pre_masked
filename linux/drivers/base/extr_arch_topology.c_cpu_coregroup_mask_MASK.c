
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
typedef struct cpumask cpumask_t ;
struct TYPE_2__ {int llc_id; struct cpumask llc_sibling; struct cpumask core_sibling; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 struct cpumask* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cpumask*,struct cpumask const*) ;

const struct cpumask *FUNC_3(int VAR_1)
{
 const cpumask_t *VAR_2 = FUNC_1(FUNC_0(VAR_1));


 if (FUNC_2(&VAR_0[VAR_1].core_sibling, VAR_2)) {

  VAR_2 = &VAR_0[VAR_1].core_sibling;
 }
 if (VAR_0[VAR_1].llc_id != -1) {
  if (FUNC_2(&VAR_0[VAR_1].llc_sibling, VAR_2))
   VAR_2 = &VAR_0[VAR_1].llc_sibling;
 }

 return VAR_2;
}
