
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svc_invoke_fn ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 scalar_t__ FUNC_2 (int ,char*,char const**) ;
 int FUNC_3 (char const*,char*) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static svc_invoke_fn *FUNC_4(struct device *VAR_4)
{
 const char *VAR_5;

 if (FUNC_2(VAR_4->of_node, "method", &VAR_5)) {
  FUNC_1(VAR_4, "missing \"method\" property\n");
  return FUNC_0(-VAR_1);
 }

 if (!FUNC_3(VAR_5, "smc"))
  return VAR_3;
 if (!FUNC_3(VAR_5, "hvc"))
  return VAR_2;

 FUNC_1(VAR_4, "invalid \"method\" property: %s\n", VAR_5);

 return FUNC_0(-VAR_0);
}
