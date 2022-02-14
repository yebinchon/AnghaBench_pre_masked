
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
typedef int rev ;
typedef int __le32 ;
struct TYPE_2__ {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,int) ;
 int FUNC_5 () ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 () ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 int VAR_9;
 __le32 VAR_10;







 if (VAR_6)
  return -VAR_0;


 VAR_9 = -VAR_1;
 VAR_6 = FUNC_7("by_key", VAR_7);
 if (!VAR_6)
  goto err_sel;
 VAR_3 = FUNC_8("by_name", ((void*)0), VAR_7);
 if (!VAR_3)
  goto err_name;


 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9)
  goto err_probe;


 VAR_9 = FUNC_4(VAR_2, &VAR_10, 0, sizeof(VAR_10));
 if (VAR_9 < 0)
  goto err_probe;

 VAR_4 = FUNC_9(VAR_10);
 VAR_9 = FUNC_11(VAR_7, &VAR_5.attr);
 if (VAR_9)
  goto err_rev;


 VAR_9 = FUNC_5();
 if (VAR_9)
  goto err_dir;


 FUNC_10("fw_cfg: loaded.\n");
 return 0;

err_dir:
 FUNC_6();
 FUNC_12(VAR_7, &VAR_5.attr);
err_rev:
 FUNC_1();
err_probe:
 FUNC_3(VAR_3);
err_name:
 FUNC_2(VAR_6);
err_sel:
 return VAR_9;
}
