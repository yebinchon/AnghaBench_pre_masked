
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cpu_cacheinfo {int num_levels; int num_leaves; } ;


 struct cpu_cacheinfo* FUNC_0 (unsigned int) ;
 struct device_node* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device_node*,char*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_0)
{
 struct cpu_cacheinfo *VAR_1 = FUNC_0(VAR_0);
 struct device_node *VAR_2 = FUNC_1(VAR_0);
 struct device_node *VAR_3 = ((void*)0);
 int VAR_4 = 0, VAR_5 = 0, VAR_6;

 if (FUNC_5(VAR_2, "cache-size"))
  ++VAR_5;
 if (FUNC_5(VAR_2, "i-cache-size"))
  ++VAR_5;
 if (FUNC_5(VAR_2, "d-cache-size"))
  ++VAR_5;
 if (VAR_5 > 0)
  VAR_4 = 1;

 VAR_3 = VAR_2;
 while ((VAR_2 = FUNC_3(VAR_2))) {
  FUNC_4(VAR_3);
  VAR_3 = VAR_2;
  if (!FUNC_2(VAR_2, "cache"))
   break;
  if (FUNC_6(VAR_2, "cache-level", &VAR_6))
   break;
  if (VAR_6 <= VAR_4)
   break;
  if (FUNC_5(VAR_2, "cache-size"))
   ++VAR_5;
  if (FUNC_5(VAR_2, "i-cache-size"))
   ++VAR_5;
  if (FUNC_5(VAR_2, "d-cache-size"))
   ++VAR_5;
  VAR_4 = VAR_6;
 }

 FUNC_4(VAR_2);
 VAR_1->num_levels = VAR_4;
 VAR_1->num_leaves = VAR_5;

 return 0;
}
