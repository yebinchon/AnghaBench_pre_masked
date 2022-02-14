
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct device_node {int dummy; } ;


 unsigned int* FUNC_0 (struct device_node const*,char*,unsigned int*) ;

unsigned int FUNC_1(const struct device_node *VAR_0,
    unsigned int VAR_1)
{
 unsigned int VAR_2;
 const u32 *VAR_3 = FUNC_0(VAR_0, "dcr-reg", &VAR_2);

 if (VAR_3 == ((void*)0) || VAR_2 & 1 || VAR_1 >= (VAR_2 / 8))
  return 0;

 return VAR_3[VAR_1 * 2];
}
