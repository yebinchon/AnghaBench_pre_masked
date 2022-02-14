
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mem_ctl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mem_ctl_info* FUNC_0 (int *) ;
 int FUNC_1 (struct mem_ctl_info*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct mem_ctl_info *VAR_4;


 FUNC_2(VAR_2, VAR_0,
      VAR_1, 0);


 VAR_4 = FUNC_0(&VAR_3->dev);
 if (VAR_4)
  FUNC_1(VAR_4);

 return 0;
}
