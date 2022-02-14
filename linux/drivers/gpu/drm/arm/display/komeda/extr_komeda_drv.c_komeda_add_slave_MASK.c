
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct component_match**,int ,struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,int ,int ) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1,
        struct component_match **VAR_2,
        struct device_node *VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 struct device_node *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_1, VAR_2, VAR_0, VAR_6);
  FUNC_2(VAR_6);
 }
}
