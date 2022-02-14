
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cpu_cacheinfo {struct cacheinfo* info_list; } ;
struct cacheinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct device_node*,int ,int) ;
 struct cpu_cacheinfo* FUNC_1 (unsigned int) ;
 struct device_node* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct device_node*,char*) ;
 struct device_node* FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_3)
{
 struct cpu_cacheinfo *VAR_4 = FUNC_1(VAR_3);
 struct cacheinfo *VAR_5 = VAR_4->info_list;
 struct device_node *VAR_6 = FUNC_2(VAR_3);
 struct device_node *VAR_7 = ((void*)0);
 int VAR_8 = 1, VAR_9 = 1;

 if (FUNC_6(VAR_6, "cache-size"))
  FUNC_0(VAR_5++, VAR_6, VAR_2, VAR_9);
 if (FUNC_6(VAR_6, "i-cache-size"))
  FUNC_0(VAR_5++, VAR_6, VAR_1, VAR_9);
 if (FUNC_6(VAR_6, "d-cache-size"))
  FUNC_0(VAR_5++, VAR_6, VAR_0, VAR_9);

 VAR_7 = VAR_6;
 while ((VAR_6 = FUNC_4(VAR_6))) {
  FUNC_5(VAR_7);
  VAR_7 = VAR_6;
  if (!FUNC_3(VAR_6, "cache"))
   break;
  if (FUNC_7(VAR_6, "cache-level", &VAR_9))
   break;
  if (VAR_9 <= VAR_8)
   break;
  if (FUNC_6(VAR_6, "cache-size"))
   FUNC_0(VAR_5++, VAR_6, VAR_2, VAR_9);
  if (FUNC_6(VAR_6, "i-cache-size"))
   FUNC_0(VAR_5++, VAR_6, VAR_1, VAR_9);
  if (FUNC_6(VAR_6, "d-cache-size"))
   FUNC_0(VAR_5++, VAR_6, VAR_0, VAR_9);
  VAR_8 = VAR_9;
 }
 FUNC_5(VAR_6);

 return 0;
}
