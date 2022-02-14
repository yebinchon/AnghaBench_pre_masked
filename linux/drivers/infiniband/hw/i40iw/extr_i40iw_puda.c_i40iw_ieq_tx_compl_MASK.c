
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_vsi {struct i40iw_puda_rsrc* ieq; } ;
struct i40iw_puda_rsrc {int dummy; } ;
struct i40iw_puda_buf {int dummy; } ;


 int FUNC_0 (struct i40iw_puda_rsrc*,struct i40iw_puda_buf*) ;

__attribute__((used)) static void FUNC_1(struct i40iw_sc_vsi *VAR_0, void *VAR_1)
{
 struct i40iw_puda_rsrc *VAR_2 = VAR_0->ieq;
 struct i40iw_puda_buf *VAR_3 = (struct i40iw_puda_buf *)VAR_1;

 FUNC_0(VAR_2, VAR_3);
}
