
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_cq {int device; } ;
struct i40iw_sc_cq {int dummy; } ;
struct i40iw_device {int dummy; } ;
struct i40iw_cq {struct i40iw_sc_cq sc_cq; } ;


 int FUNC_0 (struct i40iw_device*,struct i40iw_cq*) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_sc_cq*) ;
 int FUNC_2 (struct i40iw_device*) ;
 struct i40iw_cq* FUNC_3 (struct ib_cq*) ;
 struct i40iw_device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ib_cq *VAR_0, struct ib_udata *VAR_1)
{
 struct i40iw_cq *VAR_2;
 struct i40iw_device *VAR_3;
 struct i40iw_sc_cq *VAR_4;

 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = FUNC_4(VAR_0->device);
 VAR_4 = &VAR_2->sc_cq;
 FUNC_1(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_2);
 FUNC_2(VAR_3);
}
