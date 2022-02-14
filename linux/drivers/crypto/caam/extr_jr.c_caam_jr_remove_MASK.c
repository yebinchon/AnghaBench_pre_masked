
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct caam_drv_private_jr {int list_node; int tfm_count; } ;
struct TYPE_2__ {int jr_alloc_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 struct caam_drv_private_jr* FUNC_3 (struct device*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 int VAR_3;
 struct device *VAR_4;
 struct caam_drv_private_jr *VAR_5;

 VAR_4 = &VAR_2->dev;
 VAR_5 = FUNC_3(VAR_4);




 if (FUNC_0(&VAR_5->tfm_count)) {
  FUNC_2(VAR_4, "Device is busy\n");
  return -VAR_0;
 }


 FUNC_7();


 FUNC_5(&VAR_1.jr_alloc_lock);
 FUNC_4(&VAR_5->list_node);
 FUNC_6(&VAR_1.jr_alloc_lock);


 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3)
  FUNC_2(VAR_4, "Failed to shut down job ring\n");

 return VAR_3;
}
