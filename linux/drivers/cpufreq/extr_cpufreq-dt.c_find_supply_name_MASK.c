
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int id; int of_node; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct property* FUNC_2 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static const char *FUNC_5(struct device *VAR_0)
{
 struct device_node *VAR_1;
 struct property *VAR_2;
 int VAR_3 = VAR_0->id;
 const char *VAR_4 = ((void*)0);

 VAR_1 = FUNC_3(VAR_0->of_node);


 if (FUNC_0(!VAR_1))
  return ((void*)0);


 if (!VAR_3) {
  VAR_2 = FUNC_2(VAR_1, "cpu0-supply", ((void*)0));
  if (VAR_2) {
   VAR_4 = "cpu0";
   goto node_put;
  }
 }

 VAR_2 = FUNC_2(VAR_1, "cpu-supply", ((void*)0));
 if (VAR_2) {
  VAR_4 = "cpu";
  goto node_put;
 }

 FUNC_1(VAR_0, "no regulator for cpu%d\n", VAR_3);
node_put:
 FUNC_4(VAR_1);
 return VAR_4;
}
