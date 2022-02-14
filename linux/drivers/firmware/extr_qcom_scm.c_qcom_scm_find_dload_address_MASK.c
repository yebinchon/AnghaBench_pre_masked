
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct resource {scalar_t__ start; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device_node*,int ,struct resource*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (struct device_node*,char*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, u64 *VAR_1)
{
 struct device_node *VAR_2;
 struct device_node *VAR_3 = VAR_0->of_node;
 struct resource VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_2 = FUNC_2(VAR_3, "qcom,dload-mode", 0);
 if (!VAR_2)
  return 0;

 VAR_6 = FUNC_0(VAR_2, 0, &VAR_4);
 FUNC_1(VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_3, "qcom,dload-mode", 1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_1 = VAR_4.start + VAR_5;

 return 0;
}
