
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_addr_info {int link; int added_client; } ;
struct platform_device {int dev; } ;


 struct ssif_addr_info* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ssif_addr_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct ssif_addr_info *VAR_2 = FUNC_0(&VAR_1->dev);

 if (!VAR_2)
  return 0;

 FUNC_4(&VAR_0);
 FUNC_1(VAR_2->added_client);

 FUNC_3(&VAR_2->link);
 FUNC_2(VAR_2);
 FUNC_5(&VAR_0);
 return 0;
}
