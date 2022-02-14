
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned int FUNC_0 (int const) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned int) ;
 int * FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_1)
{
 const __be32 *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;
 int VAR_5 = -VAR_0;




 if (!FUNC_4(VAR_1, "memory"))
  return 0;




 VAR_2 = FUNC_3(VAR_1, "reg", ((void*)0));
 if (!VAR_2)
  return VAR_5;

 VAR_3 = FUNC_1(*(unsigned long *)VAR_2);
 VAR_4 = FUNC_0(VAR_2[3]);




 VAR_5 = FUNC_2(VAR_3, VAR_4);
 return (VAR_5 < 0) ? -VAR_0 : 0;
}
