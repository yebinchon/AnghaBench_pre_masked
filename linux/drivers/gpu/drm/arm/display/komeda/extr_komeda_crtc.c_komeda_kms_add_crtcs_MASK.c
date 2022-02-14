
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_kms_dev {int n_crtcs; int * crtcs; } ;
struct komeda_dev {int dummy; } ;


 int FUNC_0 (struct komeda_kms_dev*,int *) ;

int FUNC_1(struct komeda_kms_dev *VAR_0, struct komeda_dev *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_crtcs; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, &VAR_0->crtcs[VAR_2]);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
