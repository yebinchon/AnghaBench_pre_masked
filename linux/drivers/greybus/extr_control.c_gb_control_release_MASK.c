
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_control {struct gb_control* product_string; struct gb_control* vendor_string; int connection; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gb_control*) ;
 struct gb_control* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct gb_control *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->connection);

 FUNC_1(VAR_1->vendor_string);
 FUNC_1(VAR_1->product_string);

 FUNC_1(VAR_1);
}
