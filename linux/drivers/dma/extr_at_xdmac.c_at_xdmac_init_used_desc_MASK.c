
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_xdmac_desc {int active_xfer; scalar_t__ xfer_size; int direction; int descs_list; int lld; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct at_xdmac_desc *VAR_1)
{
 FUNC_1(&VAR_1->lld, 0, sizeof(VAR_1->lld));
 FUNC_0(&VAR_1->descs_list);
 VAR_1->direction = VAR_0;
 VAR_1->xfer_size = 0;
 VAR_1->active_xfer = 0;
}
