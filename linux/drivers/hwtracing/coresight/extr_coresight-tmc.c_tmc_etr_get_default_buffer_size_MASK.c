
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;

__attribute__((used)) static u32 FUNC_1(struct device *VAR_1)
{
 u32 VAR_2;

 if (FUNC_0(VAR_1->fwnode, "arm,buffer-size", &VAR_2))
  VAR_2 = VAR_0;
 return VAR_2;
}
