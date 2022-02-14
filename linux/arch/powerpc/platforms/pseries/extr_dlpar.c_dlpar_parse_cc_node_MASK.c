
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int full_name; } ;
struct cc_workarea {int name_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (char const*,int ) ;
 struct device_node* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,int ) ;

__attribute__((used)) static struct device_node *FUNC_6(struct cc_workarea *VAR_2)
{
 struct device_node *VAR_3;
 const char *VAR_4;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = (const char *)VAR_2 + FUNC_0(VAR_2->name_offset);
 VAR_3->full_name = FUNC_2(VAR_4, VAR_0);
 if (!VAR_3->full_name) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 FUNC_5(VAR_3, VAR_1);
 FUNC_4(VAR_3);

 return VAR_3;
}
