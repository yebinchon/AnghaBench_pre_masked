
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_device {int sc_dev; } ;
struct i40iw_ceq {int msix_idx; struct i40iw_device* iwdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_ceq*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct i40iw_ceq *VAR_1 = (struct i40iw_ceq *)VAR_0;
 struct i40iw_device *VAR_2 = VAR_1->iwdev;

 FUNC_1(VAR_2, VAR_1);
 FUNC_0(&VAR_2->sc_dev, VAR_1->msix_idx);
}
