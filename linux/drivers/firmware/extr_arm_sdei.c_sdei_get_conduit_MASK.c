
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct device_node*,char*,char const**) ;
 int FUNC_3 (char*,...) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_8)
{
 const char *VAR_9;
 struct device_node *VAR_10 = VAR_8->dev.of_node;

 VAR_5 = ((void*)0);
 if (VAR_10) {
  if (FUNC_2(VAR_10, "method", &VAR_9)) {
   FUNC_3("missing \"method\" property\n");
   return VAR_1;
  }

  if (!FUNC_4("hvc", VAR_9)) {
   VAR_5 = &VAR_6;
   return VAR_0;
  } else if (!FUNC_4("smc", VAR_9)) {
   VAR_5 = &VAR_7;
   return VAR_2;
  }

  FUNC_3("invalid \"method\" property: %s\n", VAR_9);
 } else if (FUNC_0(VAR_3) && !VAR_4) {
  if (FUNC_1()) {
   VAR_5 = &VAR_6;
   return VAR_0;
  } else {
   VAR_5 = &VAR_7;
   return VAR_2;
  }
 }

 return VAR_1;
}
