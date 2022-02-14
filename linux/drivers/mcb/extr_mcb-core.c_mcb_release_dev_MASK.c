
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcb_device {int bus; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct mcb_device*) ;
 int FUNC_1 (int ) ;
 struct mcb_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct mcb_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->bus);
 FUNC_0(VAR_1);
}
