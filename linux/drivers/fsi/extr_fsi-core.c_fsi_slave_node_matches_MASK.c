
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int * FUNC_0 (struct device_node*,char*,unsigned int*) ;
 unsigned int FUNC_1 (struct device_node*) ;
 unsigned int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int const*,int) ;

__attribute__((used)) static bool FUNC_4(struct device_node *VAR_0,
  int VAR_1, uint8_t VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 const __be32 *VAR_6;

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_2(VAR_0);




 if (VAR_4 != 2 || VAR_5 != 0)
  return 0;

 VAR_6 = FUNC_0(VAR_0, "reg", &VAR_3);
 if (!VAR_6 || VAR_3 != 8)
  return 0;

 return (FUNC_3(VAR_6, 1) == VAR_1) &&
  (FUNC_3(VAR_6 + 1, 1) == VAR_2);
}
