
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notes_tree {int dummy; } ;
struct TYPE_2__ {int hash; } ;
struct leaf_node {TYPE_1__ key_oid; } ;
struct int_node {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (unsigned char const*,int ) ;
 void** FUNC_3 (struct notes_tree*,struct int_node**,unsigned char*,unsigned char const*) ;

__attribute__((used)) static struct leaf_node *FUNC_4(struct notes_tree *VAR_1,
  struct int_node *VAR_2, unsigned char VAR_3,
  const unsigned char *VAR_4)
{
 void **VAR_5 = FUNC_3(VAR_1, &VAR_2, &VAR_3, VAR_4);
 if (FUNC_1(*VAR_5) == VAR_0) {
  struct leaf_node *VAR_6 = (struct leaf_node *) FUNC_0(*VAR_5);
  if (FUNC_2(VAR_4, VAR_6->key_oid.hash))
   return VAR_6;
 }
 return ((void*)0);
}
