
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;

__attribute__((used)) static inline u64 FUNC_2(struct device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->of_node;

 if (VAR_1 != sizeof(u64))
  return FUNC_0(32);

 if (VAR_0)
  return FUNC_0(49);

 if (FUNC_1(VAR_3, "fsl,sec-v5.0-job-ring") ||
     FUNC_1(VAR_3, "fsl,sec-v5.0"))
  return FUNC_0(40);

 return FUNC_0(36);
}
