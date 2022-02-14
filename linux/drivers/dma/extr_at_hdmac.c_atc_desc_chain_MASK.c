
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phys; } ;
struct TYPE_3__ {int dscr; } ;
struct at_desc {int tx_list; int desc_node; TYPE_2__ txd; TYPE_1__ lli; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct at_desc **VAR_0, struct at_desc **VAR_1,
      struct at_desc *VAR_2)
{
 if (!(*VAR_0)) {
  *VAR_0 = VAR_2;
 } else {

  (*VAR_1)->lli.dscr = VAR_2->txd.phys;

  FUNC_0(&VAR_2->desc_node,
    &(*VAR_0)->tx_list);
 }
 *VAR_1 = VAR_2;
}
