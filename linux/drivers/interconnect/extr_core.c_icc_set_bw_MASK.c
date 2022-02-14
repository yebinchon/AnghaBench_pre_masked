
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct icc_path {size_t num_nodes; TYPE_1__* reqs; } ;
struct icc_node {int dummy; } ;
struct TYPE_2__ {void* peak_bw; void* avg_bw; struct icc_node* node; } ;


 int FUNC_0 (struct icc_node*) ;
 int FUNC_1 (struct icc_path*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct icc_path *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct icc_node *VAR_4;
 u32 VAR_5, VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (!VAR_1 || !VAR_1->num_nodes)
  return 0;

 FUNC_2(&VAR_0);

 VAR_5 = VAR_1->reqs[0].avg_bw;
 VAR_6 = VAR_1->reqs[0].peak_bw;

 for (VAR_7 = 0; VAR_7 < VAR_1->num_nodes; VAR_7++) {
  VAR_4 = VAR_1->reqs[VAR_7].node;


  VAR_1->reqs[VAR_7].avg_bw = VAR_2;
  VAR_1->reqs[VAR_7].peak_bw = VAR_3;


  FUNC_0(VAR_4);
 }

 VAR_8 = FUNC_1(VAR_1);
 if (VAR_8) {
  FUNC_4("interconnect: error applying constraints (%d)\n",
    VAR_8);

  for (VAR_7 = 0; VAR_7 < VAR_1->num_nodes; VAR_7++) {
   VAR_4 = VAR_1->reqs[VAR_7].node;
   VAR_1->reqs[VAR_7].avg_bw = VAR_5;
   VAR_1->reqs[VAR_7].peak_bw = VAR_6;
   FUNC_0(VAR_4);
  }
  FUNC_1(VAR_1);
 }

 FUNC_3(&VAR_0);

 return VAR_8;
}
