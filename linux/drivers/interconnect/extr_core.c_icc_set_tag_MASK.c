
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct icc_path {int num_nodes; TYPE_1__* reqs; } ;
struct TYPE_2__ {int tag; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct icc_path *VAR_1, u32 VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return;

 FUNC_0(&VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_nodes; VAR_3++)
  VAR_1->reqs[VAR_3].tag = VAR_2;

 FUNC_1(&VAR_0);
}
