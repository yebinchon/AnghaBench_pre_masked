
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swnode {int * node; } ;
struct software_node {int * parent; } ;
struct property_entry {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fwnode_handle* FUNC_0 (struct fwnode_handle const*) ;
 struct fwnode_handle* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct fwnode_handle const*) ;
 int FUNC_3 (struct fwnode_handle const*) ;
 int FUNC_4 (struct software_node*) ;
 struct software_node* FUNC_5 (int,int ) ;
 int FUNC_6 (struct software_node*,struct property_entry const*) ;
 struct fwnode_handle* FUNC_7 (struct software_node*,struct swnode*,int) ;
 struct swnode* FUNC_8 (struct fwnode_handle const*) ;

struct fwnode_handle *
FUNC_9(const struct property_entry *VAR_3,
       const struct fwnode_handle *VAR_4)
{
 struct software_node *VAR_5;
 struct swnode *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_4) {
  if (FUNC_2(VAR_4))
   return FUNC_0(VAR_4);
  if (!FUNC_3(VAR_4))
   return FUNC_1(-VAR_0);
  VAR_6 = FUNC_8(VAR_4);
 }

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_1(-VAR_1);

 VAR_7 = FUNC_6(VAR_5, VAR_3);
 if (VAR_7) {
  FUNC_4(VAR_5);
  return FUNC_1(VAR_7);
 }

 VAR_5->parent = VAR_6 ? VAR_6->node : ((void*)0);

 return FUNC_7(VAR_5, VAR_6, 1);
}
