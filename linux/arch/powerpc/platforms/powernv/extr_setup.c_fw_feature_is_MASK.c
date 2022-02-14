
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*,char const*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char const*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0, const char *VAR_1,
     struct device_node *VAR_2)
{
 struct device_node *VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
