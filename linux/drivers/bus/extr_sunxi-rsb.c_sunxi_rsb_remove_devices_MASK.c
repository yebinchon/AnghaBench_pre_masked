
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb_device {int dummy; } ;
struct device {int * bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct sunxi_rsb_device*) ;
 struct sunxi_rsb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, void *VAR_2)
{
 struct sunxi_rsb_device *VAR_3 = FUNC_1(VAR_1);

 if (VAR_1->bus == &VAR_0)
  FUNC_0(VAR_3);

 return 0;
}
