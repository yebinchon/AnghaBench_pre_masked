
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kovaplus_device {int actual_y_sensitivity; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct kovaplus_device* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct kovaplus_device *VAR_4 =
   FUNC_1(FUNC_0(VAR_1->parent->parent));
 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_4->actual_y_sensitivity);
}
