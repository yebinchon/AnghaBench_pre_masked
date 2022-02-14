
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_xfer {int node; } ;
struct scpi_chan {int xfers_lock; int xfers_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct scpi_xfer *VAR_0, struct scpi_chan *VAR_1)
{
 FUNC_1(&VAR_1->xfers_lock);
 FUNC_0(&VAR_0->node, &VAR_1->xfers_list);
 FUNC_2(&VAR_1->xfers_lock);
}
