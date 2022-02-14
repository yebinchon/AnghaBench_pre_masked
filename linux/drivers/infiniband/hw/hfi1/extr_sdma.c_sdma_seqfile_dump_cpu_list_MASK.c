
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct sdma_rht_node {TYPE_2__** map; } ;
struct hfi1_devdata {int sdma_rht; } ;
struct TYPE_4__ {int ctr; TYPE_1__** sde; } ;
struct TYPE_3__ {int this_idx; } ;


 int VAR_0 ;
 struct sdma_rht_node* FUNC_0 (int ,unsigned long*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 int FUNC_2 (struct seq_file*,char*) ;

void FUNC_3(struct seq_file *VAR_2,
    struct hfi1_devdata *VAR_3,
    unsigned long VAR_4)
{
 struct sdma_rht_node *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_3->sdma_rht, &VAR_4,
       VAR_1);
 if (!VAR_5)
  return;

 FUNC_1(VAR_2, "cpu%3lu: ", VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!VAR_5->map[VAR_6] || !VAR_5->map[VAR_6]->ctr)
   continue;

  FUNC_1(VAR_2, " vl%d: [", VAR_6);

  for (VAR_7 = 0; VAR_7 < VAR_5->map[VAR_6]->ctr; VAR_7++) {
   if (!VAR_5->map[VAR_6]->sde[VAR_7])
    continue;

   if (VAR_7 > 0)
    FUNC_2(VAR_2, ",");

   FUNC_1(VAR_2, " sdma%2d",
       VAR_5->map[VAR_6]->sde[VAR_7]->this_idx);
  }
  FUNC_2(VAR_2, " ]");
 }

 FUNC_2(VAR_2, "\n");
}
