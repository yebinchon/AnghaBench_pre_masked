
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d40_desc {int is_in_client_list; int node; } ;
struct d40_chan {int pending_queue; } ;


 int FUNC_0 (struct d40_desc*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct d40_chan *VAR_0, struct d40_desc *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_1->is_in_client_list = 0;
 FUNC_1(&VAR_1->node, &VAR_0->pending_queue);
}
