
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct fwnode_handle {int * ops; } ;
struct TYPE_5__ {int kset; } ;
struct swnode {int id; unsigned int allocated; struct fwnode_handle fwnode; TYPE_1__ kobj; int children; int entry; int child_ids; struct swnode* parent; struct software_node const* node; } ;
struct software_node {int name; int properties; } ;


 int VAR_0 ;
 struct fwnode_handle* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (struct swnode*) ;
 int FUNC_5 (TYPE_1__*,int *,TYPE_1__*,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 struct swnode* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static struct fwnode_handle *
FUNC_11(const struct software_node *VAR_7, struct swnode *VAR_8,
  unsigned int VAR_9)
{
 struct swnode *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto out_err;
 }

 VAR_11 = FUNC_3(VAR_8 ? &VAR_8->child_ids : &VAR_6,
        0, 0, VAR_1);
 if (VAR_11 < 0) {
  FUNC_4(VAR_10);
  goto out_err;
 }

 VAR_10->id = VAR_11;
 VAR_10->node = VAR_7;
 VAR_10->parent = VAR_8;
 VAR_10->allocated = VAR_9;
 VAR_10->kobj.kset = VAR_5;
 VAR_10->fwnode.ops = &VAR_3;

 FUNC_2(&VAR_10->child_ids);
 FUNC_1(&VAR_10->entry);
 FUNC_1(&VAR_10->children);

 if (VAR_7->name)
  VAR_11 = FUNC_5(&VAR_10->kobj, &VAR_4,
        VAR_8 ? &VAR_8->kobj : ((void*)0),
        "%s", VAR_7->name);
 else
  VAR_11 = FUNC_5(&VAR_10->kobj, &VAR_4,
        VAR_8 ? &VAR_8->kobj : ((void*)0),
        "node%d", VAR_10->id);
 if (VAR_11) {
  FUNC_6(&VAR_10->kobj);
  return FUNC_0(VAR_11);
 }

 if (VAR_8)
  FUNC_9(&VAR_10->entry, &VAR_8->children);

 FUNC_7(&VAR_10->kobj, VAR_2);
 return &VAR_10->fwnode;

out_err:
 if (VAR_9)
  FUNC_10(VAR_7->properties);
 return FUNC_0(VAR_11);
}
