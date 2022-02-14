
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static u32 FUNC_1(struct device_node *VAR_1)
{
 const u32 *VAR_2 = FUNC_0(VAR_1, "reg", ((void*)0));
 u32 VAR_3;

 if (VAR_2 == ((void*)0))
  return 0;






 VAR_3 = *VAR_2;
 if (VAR_3 < VAR_0)
  VAR_3 += VAR_0;
 return VAR_3;
}
