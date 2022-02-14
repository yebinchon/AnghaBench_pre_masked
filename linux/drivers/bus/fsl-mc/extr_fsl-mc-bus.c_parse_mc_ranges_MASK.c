
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct device*,char*,struct device_node*) ;
 int FUNC_2 (struct device*,char*,struct device_node*) ;
 int * FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1,
      int *VAR_2,
      int *VAR_3,
      int *VAR_4,
      const __be32 **VAR_5)
{
 const __be32 *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct device_node *VAR_10 = VAR_1->of_node;

 *VAR_5 = FUNC_3(VAR_10, "ranges", &VAR_8);
 if (!(*VAR_5) || !VAR_8) {
  FUNC_2(VAR_1,
    "missing or empty ranges property for device tree node '%pOFn'\n",
    VAR_10);
  return 0;
 }

 *VAR_2 = FUNC_4(VAR_10);

 VAR_6 = FUNC_3(VAR_10, "#address-cells", ((void*)0));
 if (VAR_6)
  *VAR_3 = FUNC_0(VAR_6);
 else
  *VAR_3 = *VAR_2;

 VAR_6 = FUNC_3(VAR_10, "#size-cells", ((void*)0));
 if (VAR_6)
  *VAR_4 = FUNC_0(VAR_6);
 else
  *VAR_4 = FUNC_5(VAR_10);

 VAR_7 = *VAR_2 + *VAR_3 +
     *VAR_4;

 VAR_9 = VAR_7 * sizeof(__be32);
 if (VAR_8 % VAR_9 != 0) {
  FUNC_1(VAR_1, "malformed ranges property '%pOFn'\n", VAR_10);
  return -VAR_0;
 }

 return VAR_8 / VAR_9;
}
