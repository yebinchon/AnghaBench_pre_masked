
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_vsi {int ilq; } ;
struct i40iw_puda_buf {int dummy; } ;
struct i40iw_cm_node {TYPE_1__* iwdev; } ;
struct TYPE_2__ {struct i40iw_sc_vsi vsi; } ;


 int VAR_0 ;
 struct i40iw_puda_buf* FUNC_0 (struct i40iw_cm_node*,int *,int *,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct i40iw_puda_buf*) ;

__attribute__((used)) static void FUNC_3(struct i40iw_cm_node *VAR_1)
{
 struct i40iw_puda_buf *VAR_2;
 struct i40iw_sc_vsi *VAR_3 = &VAR_1->iwdev->vsi;

 VAR_2 = FUNC_0(VAR_1, ((void*)0), ((void*)0), ((void*)0), VAR_0);
 if (VAR_2)
  FUNC_2(VAR_3->ilq, VAR_2);
 else
  FUNC_1("no sqbuf\n");
}
