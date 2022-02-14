
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,int ,struct resource*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_1,
           struct resource *VAR_2)
{
 struct device_node *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1, "altr,sdr-syscon", 0);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3, 0, VAR_2);
 FUNC_1(VAR_3);

 return VAR_4;
}
