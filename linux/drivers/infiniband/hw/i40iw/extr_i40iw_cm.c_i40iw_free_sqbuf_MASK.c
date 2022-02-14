
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_vsi {struct i40iw_puda_rsrc* ilq; } ;
struct i40iw_puda_rsrc {int dummy; } ;
struct i40iw_puda_buf {int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40iw_puda_rsrc*,struct i40iw_puda_buf*) ;

void FUNC_2(struct i40iw_sc_vsi *VAR_0, void *VAR_1)
{
 struct i40iw_puda_buf *VAR_2 = (struct i40iw_puda_buf *)VAR_1;
 struct i40iw_puda_rsrc *VAR_3 = VAR_0->ilq;

 if (!FUNC_0(&VAR_2->refcount))
  FUNC_1(VAR_3, VAR_2);
}
