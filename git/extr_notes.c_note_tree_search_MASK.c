
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notes_tree {int dummy; } ;
struct TYPE_2__ {int hash; } ;
struct leaf_node {TYPE_1__ key_oid; } ;
struct int_node {void** a; } ;


 struct int_node* FUNC_0 (void*) ;
 unsigned char FUNC_1 (unsigned char,unsigned char const*) ;
 int FUNC_2 (void*) ;


 int FUNC_3 (unsigned char const*,int ) ;
 int FUNC_4 (struct leaf_node*) ;
 int FUNC_5 (struct notes_tree*,struct leaf_node*,struct int_node*,unsigned char) ;

__attribute__((used)) static void **FUNC_6(struct notes_tree *VAR_0, struct int_node **VAR_1,
  unsigned char *VAR_2, const unsigned char *VAR_3)
{
 struct leaf_node *VAR_4;
 unsigned char VAR_5;
 void *VAR_6 = (*VAR_1)->a[0];

 if (FUNC_2(VAR_6) == 128) {
  VAR_4 = (struct leaf_node *) FUNC_0(VAR_6);
  if (!FUNC_3(VAR_3, VAR_4->key_oid.hash)) {

   (*VAR_1)->a[0] = ((void*)0);
   FUNC_5(VAR_0, VAR_4, *VAR_1, *VAR_2);
   FUNC_4(VAR_4);
   return FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
  }
 }

 VAR_5 = FUNC_1(*VAR_2, VAR_3);
 VAR_6 = (*VAR_1)->a[VAR_5];
 switch (FUNC_2(VAR_6)) {
 case 129:
  *VAR_1 = FUNC_0(VAR_6);
  (*VAR_2)++;
  return FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
 case 128:
  VAR_4 = (struct leaf_node *) FUNC_0(VAR_6);
  if (!FUNC_3(VAR_3, VAR_4->key_oid.hash)) {

   (*VAR_1)->a[VAR_5] = ((void*)0);
   FUNC_5(VAR_0, VAR_4, *VAR_1, *VAR_2);
   FUNC_4(VAR_4);
   return FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
  }

 default:
  return &((*VAR_1)->a[VAR_5]);
 }
}
