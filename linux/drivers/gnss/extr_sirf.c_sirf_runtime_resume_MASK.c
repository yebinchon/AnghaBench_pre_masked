
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int lna; int vcc; scalar_t__ on_off; } ;
struct device {int dummy; } ;


 struct sirf_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sirf_data*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct sirf_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->lna);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->on_off)
  VAR_2 = FUNC_3(VAR_1, 1);
 else
  VAR_2 = FUNC_2(VAR_1->vcc);

 if (VAR_2)
  goto err_disable_lna;

 return 0;

err_disable_lna:
 FUNC_1(VAR_1->lna);

 return VAR_2;
}
