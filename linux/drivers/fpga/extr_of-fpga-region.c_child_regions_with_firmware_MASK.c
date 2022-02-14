
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (struct device_node*,int ) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,char const**) ;
 int FUNC_4 (char*,struct device_node*) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_2)
{
 struct device_node *VAR_3;
 const char *VAR_4;
 int VAR_5 = 0;

 FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 while (VAR_3) {
  if (!FUNC_3(VAR_3, "firmware-name",
          &VAR_4)) {
   VAR_5 = -VAR_0;
   break;
  }
  VAR_3 = FUNC_0(VAR_3,
           VAR_1);
 }

 FUNC_2(VAR_3);

 if (VAR_5)
  FUNC_4("firmware-name not allowed in child FPGA region: %pOF",
         VAR_3);

 return VAR_5;
}
