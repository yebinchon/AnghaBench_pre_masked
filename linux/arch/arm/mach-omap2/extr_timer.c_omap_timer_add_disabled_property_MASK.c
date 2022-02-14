
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {char* name; char* value; int length; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct property* FUNC_0 (int,int ) ;
 int FUNC_1 (struct device_node*,struct property*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_2)
{
 struct property *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->name = "status";
 VAR_3->value = "disabled";
 VAR_3->length = FUNC_2(VAR_3->value);

 return FUNC_1(VAR_2, VAR_3);
}
