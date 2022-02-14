
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_1)
{
 struct device_node *VAR_2;
 int VAR_3 = 0;


 if (FUNC_1(VAR_1, "altr,sdram-edac-s10"))
  return 0;


 VAR_2 = FUNC_3(VAR_1, "altr,ecc-parent", 0);
 if (VAR_2 && !FUNC_0(VAR_2))
  VAR_3 = -VAR_0;

 FUNC_2(VAR_2);
 return VAR_3;
}
