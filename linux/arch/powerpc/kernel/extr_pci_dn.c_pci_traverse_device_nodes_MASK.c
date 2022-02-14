
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {struct device_node* sibling; struct device_node* parent; struct device_node* child; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (int const*,int) ;

void *FUNC_2(struct device_node *VAR_2,
    void *(*VAR_3)(struct device_node *, void *),
    void *VAR_4)
{
 struct device_node *VAR_5, *VAR_6;
 void *VAR_7;


 for (VAR_5 = VAR_2->child; VAR_5; VAR_5 = VAR_6) {
  const __be32 *VAR_8;
  u32 VAR_9 = 0;

  VAR_6 = ((void*)0);
  VAR_8 = FUNC_0(VAR_5, "class-code", ((void*)0));
  if (VAR_8)
   VAR_9 = FUNC_1(VAR_8, 1);

  if (VAR_3) {
   VAR_7 = VAR_3(VAR_5, VAR_4);
   if (VAR_7)
    return VAR_7;
  }


  if (VAR_5->child && ((VAR_9 >> 8) == VAR_1 ||
      (VAR_9 >> 8) == VAR_0))

   VAR_6 = VAR_5->child;
  else if (VAR_5->sibling)

   VAR_6 = VAR_5->sibling;
  if (!VAR_6) {

   do {
    VAR_5 = VAR_5->parent;
    if (VAR_5 == VAR_2)
     return ((void*)0);
   } while (VAR_5->sibling == ((void*)0));
   VAR_6 = VAR_5->sibling;
  }
 }
 return ((void*)0);
}
