
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {scalar_t__ vlan_ops; scalar_t__ port_ops; scalar_t__ ops; int id; } ;
struct attrlist_arg {scalar_t__* head; int * prev; int atype; int id; struct switch_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,struct attrlist_arg*) ;

int
FUNC_1(struct switch_dev *VAR_8)
{
 struct attrlist_arg VAR_9;

 if (VAR_8->ops || VAR_8->port_ops || VAR_8->vlan_ops)
  return 0;

 VAR_9.atype = VAR_3;
 VAR_9.dev = VAR_8;
 VAR_9.id = VAR_8->id;
 VAR_9.prev = ((void*)0);
 VAR_9.head = &VAR_8->ops;
 FUNC_0(VAR_0, VAR_6, VAR_7, &VAR_9);

 VAR_9.atype = VAR_4;
 VAR_9.prev = ((void*)0);
 VAR_9.head = &VAR_8->port_ops;
 FUNC_0(VAR_1, VAR_6, VAR_7, &VAR_9);

 VAR_9.atype = VAR_5;
 VAR_9.prev = ((void*)0);
 VAR_9.head = &VAR_8->vlan_ops;
 FUNC_0(VAR_2, VAR_6, VAR_7, &VAR_9);

 return 0;
}
