
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker {int dummy; } ;
struct tree_desc {int dummy; } ;
struct object {int dummy; } ;
struct tree {struct object object; int size; int buffer; } ;
struct name_entry {int oid; int mode; } ;
struct blob {struct object object; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tree*) ;
 int FUNC_3 (struct tree_desc*,int ,int ) ;
 struct blob* FUNC_4 (int ,int *) ;
 struct tree* FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (struct tree*) ;
 scalar_t__ FUNC_7 (struct walker*,struct object*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (struct tree_desc*,struct name_entry*) ;

__attribute__((used)) static int FUNC_9(struct walker *VAR_1, struct tree *VAR_2)
{
 struct tree_desc VAR_3;
 struct name_entry VAR_4;

 if (FUNC_6(VAR_2))
  return -1;

 FUNC_3(&VAR_3, VAR_2->buffer, VAR_2->size);
 while (FUNC_8(&VAR_3, &VAR_4)) {
  struct object *VAR_5 = ((void*)0);


  if (FUNC_1(VAR_4.mode))
   continue;
  if (FUNC_0(VAR_4.mode)) {
   struct tree *VAR_6 = FUNC_5(VAR_0,
       &VAR_4.oid);
   if (VAR_6)
    VAR_5 = &VAR_6->object;
  }
  else {
   struct blob *VAR_7 = FUNC_4(VAR_0,
       &VAR_4.oid);
   if (VAR_7)
    VAR_5 = &VAR_7->object;
  }
  if (!VAR_5 || FUNC_7(VAR_1, VAR_5))
   return -1;
 }
 FUNC_2(VAR_2);
 return 0;
}
