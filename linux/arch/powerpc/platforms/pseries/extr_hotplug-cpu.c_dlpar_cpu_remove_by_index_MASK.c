
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*,int ) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(u32 VAR_1)
{
 struct device_node *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) {
  FUNC_3("Cannot find CPU (drc index %x) to remove\n",
   VAR_1);
  return -VAR_0;
 }

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2);
 return VAR_3;
}
