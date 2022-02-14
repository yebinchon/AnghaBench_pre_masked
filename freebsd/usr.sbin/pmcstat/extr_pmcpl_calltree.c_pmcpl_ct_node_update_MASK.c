
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmcpl_ct_node {int pct_narc; struct pmcpl_ct_arc* pct_arc; int pct_arc_c; } ;
struct TYPE_3__ {unsigned int* sb; } ;
struct pmcpl_ct_arc {int pcta_call; struct pmcpl_ct_node* pcta_child; TYPE_1__ pcta_callid; TYPE_1__ pcta_samples; } ;
struct TYPE_4__ {int* sb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *,struct pmcpl_ct_arc**) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct pmcpl_ct_node *VAR_1,
    struct pmcpl_ct_node *VAR_2, int VAR_3, unsigned VAR_4, int VAR_5)
{
 struct pmcpl_ct_arc *VAR_6;
 int VAR_7;

 FUNC_0(VAR_1 != ((void*)0));





 for (VAR_7 = 0; VAR_7 < VAR_1->pct_narc; VAR_7++) {
  if (VAR_1->pct_arc[VAR_7].pcta_child == VAR_2) {
   VAR_6 = &VAR_1->pct_arc[VAR_7];
   FUNC_2(&VAR_6->pcta_samples);
   VAR_6->pcta_samples.sb[VAR_3] += VAR_4;

   if (VAR_5) {
   FUNC_2(&VAR_6->pcta_callid);
   if (VAR_0.sb[VAR_3] -
       VAR_6->pcta_callid.sb[VAR_3] > 1)
    VAR_6->pcta_call++;
   VAR_6->pcta_callid.sb[VAR_3] =
       VAR_0.sb[VAR_3];
   }
   return;
  }
 }




 FUNC_1(VAR_1->pct_narc,
     &VAR_1->pct_arc_c, &VAR_1->pct_arc);
 VAR_6 = &VAR_1->pct_arc[VAR_1->pct_narc];
 FUNC_2(&VAR_6->pcta_samples);
 VAR_6->pcta_samples.sb[VAR_3] = VAR_4;
 VAR_6->pcta_call = 1;
 if (VAR_5) {
  FUNC_2(&VAR_6->pcta_callid);
  VAR_6->pcta_callid.sb[VAR_3] = VAR_0.sb[VAR_3];
 }
 VAR_6->pcta_child = VAR_2;
 VAR_1->pct_narc++;
}
