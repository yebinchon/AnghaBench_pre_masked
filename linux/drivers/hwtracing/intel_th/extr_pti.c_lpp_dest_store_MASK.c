
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pti_device {int lpp_dest_mask; int lpp_dest; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct pti_device* FUNC_1 (struct device*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct pti_device *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 if (!(VAR_6->lpp_dest_mask & FUNC_0(VAR_7)))
  return -VAR_0;

 VAR_6->lpp_dest = VAR_7;
 return VAR_5;
}
