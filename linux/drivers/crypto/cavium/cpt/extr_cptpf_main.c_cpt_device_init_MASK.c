
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct device {int dummy; } ;
struct cpt_device {int flags; scalar_t__ next_group; scalar_t__ next_mc_idx; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cpt_device*) ;
 scalar_t__ FUNC_1 (struct cpt_device*) ;
 int FUNC_2 (struct cpt_device*) ;
 int FUNC_3 (struct cpt_device*) ;
 int FUNC_4 (struct cpt_device*) ;
 int FUNC_5 (struct device*,char*,scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cpt_device *VAR_2)
{
 u64 VAR_3;
 struct device *VAR_4 = &VAR_2->pdev->dev;


 FUNC_4(VAR_2);
 FUNC_6(100);


 VAR_3 = (u64)FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_4, "RAM BIST failed with code 0x%llx", VAR_3);
  return -VAR_1;
 }

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_4, "Engine BIST failed with code 0x%llx", VAR_3);
  return -VAR_1;
 }



 FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 VAR_2->next_mc_idx = 0;
 VAR_2->next_group = 0;

 VAR_2->flags |= VAR_0;

 return 0;
}
