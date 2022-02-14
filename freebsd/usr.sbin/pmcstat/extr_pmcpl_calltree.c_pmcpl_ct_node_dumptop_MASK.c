
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcpl_ct_sample {int dummy; } ;
struct pmcpl_ct_node {scalar_t__ pct_color; int pct_narc; struct pmcpl_ct_arc* pct_arc; } ;
struct pmcpl_ct_arc {struct pmcpl_ct_node* pcta_child; int pcta_samples; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pmcpl_ct_node*** VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_2(int VAR_6, struct pmcpl_ct_node *VAR_7,
    struct pmcpl_ct_sample *VAR_8, int VAR_9, int *VAR_10)
{
 int VAR_11, VAR_12;
 struct pmcpl_ct_arc *VAR_13;

 if (VAR_7->pct_color == VAR_3)
  return 0;

 if (VAR_9 >= VAR_0) {
  VAR_4[VAR_9][*VAR_10] = ((void*)0);
  return 1;
 }
 VAR_4[VAR_9][*VAR_10] = VAR_7;






 VAR_12 = 1;
 for (VAR_11 = 0; VAR_11 < VAR_7->pct_narc; VAR_11++) {
  VAR_13 = &VAR_7->pct_arc[VAR_11];
  if (VAR_13->pcta_child->pct_color != VAR_3 &&
      FUNC_0(VAR_6,
      &VAR_13->pcta_samples) != 0 &&
      FUNC_1(VAR_6,
      &VAR_13->pcta_samples) > VAR_5) {
   VAR_12 = 0;
   break;
  }
 }

 if (VAR_7->pct_narc == 0 || VAR_12) {
  VAR_4[VAR_9+1][*VAR_10] = ((void*)0);
  if (*VAR_10 >= VAR_1)
   return 1;
  *VAR_10 = *VAR_10 + 1;
  for (VAR_11=0; VAR_11 < VAR_9; VAR_11++)
   VAR_4[VAR_11][*VAR_10] =
       VAR_4[VAR_11][*VAR_10 - 1];
  return 0;
 }

 VAR_7->pct_color = VAR_3;
 for (VAR_11 = 0; VAR_11 < VAR_7->pct_narc; VAR_11++) {
  if (FUNC_0(VAR_6,
      &VAR_7->pct_arc[VAR_11].pcta_samples) == 0)
   continue;
  if (FUNC_1(VAR_6,
      &VAR_7->pct_arc[VAR_11].pcta_samples) > VAR_5) {
   if (FUNC_2(VAR_6,
           VAR_7->pct_arc[VAR_11].pcta_child,
           VAR_8, VAR_9+1, VAR_10)) {
    VAR_7->pct_color = VAR_2;
    return 1;
   }
  }
 }
 VAR_7->pct_color = VAR_2;

 return 0;
}
