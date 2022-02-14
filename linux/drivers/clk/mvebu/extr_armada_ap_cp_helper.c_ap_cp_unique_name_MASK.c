
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 char* FUNC_0 (struct device*,int ,char*,unsigned long long,char const*) ;
 int * FUNC_1 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_2 (struct device_node*,int const*) ;

char *FUNC_3(struct device *VAR_1, struct device_node *VAR_2,
   const char *VAR_3)
{
 const __be32 *VAR_4;
 u64 VAR_5;


 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2, "reg", ((void*)0));
 VAR_5 = FUNC_2(VAR_2, VAR_4);
 return FUNC_0(VAR_1, VAR_0, "%llx-%s",
         (unsigned long long)VAR_5, VAR_3);
}
