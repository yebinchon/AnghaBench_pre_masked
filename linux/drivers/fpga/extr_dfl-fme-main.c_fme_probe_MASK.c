
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,int ) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *,int ) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  goto exit;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4)
  goto dev_destroy;

 VAR_4 = FUNC_2(VAR_3, &VAR_2, VAR_0);
 if (VAR_4)
  goto feature_uinit;

 return 0;

feature_uinit:
 FUNC_1(VAR_3);
dev_destroy:
 FUNC_3(VAR_3);
exit:
 return VAR_4;
}
