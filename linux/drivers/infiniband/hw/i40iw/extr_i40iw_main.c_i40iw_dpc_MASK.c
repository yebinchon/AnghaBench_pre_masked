
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_device {TYPE_1__* iw_msixtbl; int sc_dev; int ceqlist; scalar_t__ msix_shared; } ;
struct TYPE_2__ {int idx; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct i40iw_device*) ;
 int FUNC_2 (struct i40iw_device*,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct i40iw_device *VAR_1 = (struct i40iw_device *)VAR_0;

 if (VAR_1->msix_shared)
  FUNC_2(VAR_1, VAR_1->ceqlist);
 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->sc_dev, VAR_1->iw_msixtbl[0].idx);
}
