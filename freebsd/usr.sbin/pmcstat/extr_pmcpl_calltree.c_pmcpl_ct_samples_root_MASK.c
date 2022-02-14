
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmcpl_ct_sample {int * sb; } ;
struct TYPE_4__ {int pct_narc; TYPE_1__* pct_arc; } ;
struct TYPE_3__ {int pcta_samples; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct pmcpl_ct_sample*) ;
 int FUNC_2 (struct pmcpl_ct_sample*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct pmcpl_ct_sample *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0->pct_narc; VAR_3++)
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   VAR_2->sb[VAR_4] += FUNC_0(VAR_4,
       &VAR_0->pct_arc[VAR_3].pcta_samples);
}
