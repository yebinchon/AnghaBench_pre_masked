
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lenovo_drvdata_cptkbd {int sensitivity; int fn_lock; } ;
struct hid_device {int dummy; } ;


 int FUNC_0 (struct hid_device*,char*,int) ;
 struct lenovo_drvdata_cptkbd* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_0)
{
 int VAR_1;
 struct lenovo_drvdata_cptkbd *VAR_2 = FUNC_1(VAR_0);

 VAR_1 = FUNC_2(VAR_0, 0x05, VAR_2->fn_lock);
 if (VAR_1)
  FUNC_0(VAR_0, "Fn-lock setting failed: %d\n", VAR_1);

 VAR_1 = FUNC_2(VAR_0, 0x02, VAR_2->sensitivity);
 if (VAR_1)
  FUNC_0(VAR_0, "Sensitivity setting failed: %d\n", VAR_1);
}
