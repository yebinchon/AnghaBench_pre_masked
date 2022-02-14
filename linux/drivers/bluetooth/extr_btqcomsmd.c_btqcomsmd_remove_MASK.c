
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct btqcomsmd {int acl_channel; int cmd_channel; int hdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct btqcomsmd* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct btqcomsmd *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->hdev);
 FUNC_0(VAR_1->hdev);

 FUNC_3(VAR_1->cmd_channel);
 FUNC_3(VAR_1->acl_channel);

 return 0;
}
