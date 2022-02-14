
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,int,struct resource*) ;
 int FUNC_1 (struct device_node*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_2,
           const char *VAR_3,
           struct resource *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_2, "reg-names", VAR_3);
 if (VAR_6 >= 0) {
  VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_4);
  if (VAR_5 < 0)
   return -VAR_0;
  return 0;
 }
 return -VAR_1;
}
