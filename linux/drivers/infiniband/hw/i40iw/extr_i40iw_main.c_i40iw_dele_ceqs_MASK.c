
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40iw_sc_dev {int ceq_valid; } ;
struct i40iw_msix_vector {int dummy; } ;
struct i40iw_device {scalar_t__ ceqs_count; struct i40iw_sc_dev sc_dev; scalar_t__ msix_shared; struct i40iw_msix_vector* iw_msixtbl; struct i40iw_ceq* ceqlist; } ;
struct i40iw_ceq {int dummy; } ;


 int FUNC_0 (struct i40iw_device*,struct i40iw_ceq*) ;
 int FUNC_1 (struct i40iw_sc_dev*,struct i40iw_msix_vector*,void*) ;

__attribute__((used)) static void FUNC_2(struct i40iw_device *VAR_0)
{
 u32 VAR_1 = 0;
 struct i40iw_sc_dev *VAR_2 = &VAR_0->sc_dev;
 struct i40iw_ceq *VAR_3 = VAR_0->ceqlist;
 struct i40iw_msix_vector *VAR_4 = VAR_0->iw_msixtbl;

 if (VAR_0->msix_shared) {
  FUNC_1(VAR_2, VAR_4, (void *)VAR_0);
  FUNC_0(VAR_0, VAR_3);
  VAR_3++;
  VAR_1++;
 }

 for (VAR_4++; VAR_1 < VAR_0->ceqs_count; VAR_1++, VAR_4++, VAR_3++) {
  FUNC_1(VAR_2, VAR_4, (void *)VAR_3);
  FUNC_0(VAR_0, VAR_3);
 }

 VAR_0->sc_dev.ceq_valid = 0;
}
