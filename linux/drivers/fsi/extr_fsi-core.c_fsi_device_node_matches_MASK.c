
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct device*,char*,int ,scalar_t__,scalar_t__) ;
 int * FUNC_1 (struct device_node*,char*,unsigned int*) ;
 unsigned int FUNC_2 (struct device_node*) ;
 unsigned int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (int const*,int) ;

__attribute__((used)) static bool FUNC_6(struct device *VAR_0, struct device_node *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 const __be32 *VAR_7;
 uint32_t VAR_8;

 VAR_5 = FUNC_2(VAR_1);
 VAR_6 = FUNC_3(VAR_1);

 if (VAR_5 != 1 || VAR_6 != 1)
  return 0;

 VAR_7 = FUNC_1(VAR_1, "reg", &VAR_4);
 if (!VAR_7 || VAR_4 != 8)
  return 0;

 if (FUNC_5(VAR_7, 1) != VAR_2)
  return 0;

 VAR_8 = FUNC_5(VAR_7 + 1, 1);
 if (VAR_8 != VAR_3) {
  FUNC_0(VAR_0,
   "node %s matches probed address, but not size (got 0x%x, expected 0x%x)",
   FUNC_4(VAR_1), VAR_8, VAR_3);
 }

 return 1;
}
