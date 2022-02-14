
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int vcc; scalar_t__ on_off; int lna; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 struct sirf_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sirf_data*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct sirf_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;
 int VAR_3;

 if (VAR_1->on_off)
  VAR_3 = FUNC_4(VAR_1, 0);
 else
  VAR_3 = FUNC_2(VAR_1->vcc);

 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1->lna);
 if (VAR_3)
  goto err_reenable;

 return 0;

err_reenable:
 if (VAR_1->on_off)
  VAR_2 = FUNC_4(VAR_1, 1);
 else
  VAR_2 = FUNC_3(VAR_1->vcc);

 if (VAR_2)
  FUNC_0(VAR_0,
   "failed to reenable power on failed suspend: %d\n",
   VAR_2);

 return VAR_3;
}
