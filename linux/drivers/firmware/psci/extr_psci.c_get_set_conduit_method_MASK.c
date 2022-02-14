
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,char const**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_4)
{
 const char *VAR_5;

 FUNC_1("probing for conduit method from DT.\n");

 if (FUNC_0(VAR_4, "method", &VAR_5)) {
  FUNC_2("missing \"method\" property\n");
  return -VAR_1;
 }

 if (!FUNC_4("hvc", VAR_5)) {
  FUNC_3(VAR_2);
 } else if (!FUNC_4("smc", VAR_5)) {
  FUNC_3(VAR_3);
 } else {
  FUNC_2("invalid \"method\" property: %s\n", VAR_5);
  return -VAR_0;
 }
 return 0;
}
