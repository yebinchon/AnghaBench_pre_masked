
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct object {int flags; int oid; } ;
struct tree {int size; int buffer; struct object object; } ;
struct object_list {int dummy; } ;
struct name_entry {int oid; int mode; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct object_list** FUNC_0 (struct object*,struct object_list**) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct tree*) ;
 int FUNC_3 (struct tree_desc*,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 struct tree* FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct tree*) ;
 struct object_list** FUNC_9 (int ,struct object_list**) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (struct tree_desc*,struct name_entry*) ;

__attribute__((used)) static struct object_list **FUNC_11(struct tree *VAR_4,
      struct object_list **VAR_5)
{
 struct object *VAR_6 = &VAR_4->object;
 struct tree_desc VAR_7;
 struct name_entry VAR_8;

 VAR_6->flags |= VAR_0;

 if (VAR_6->flags & (VAR_2 | VAR_1))
  return VAR_5;
 if (FUNC_8(VAR_4) < 0)
  FUNC_1("bad tree object %s", FUNC_7(&VAR_6->oid));

 VAR_6->flags |= VAR_1;
 VAR_5 = FUNC_0(VAR_6, VAR_5);

 FUNC_3(&VAR_7, VAR_4->buffer, VAR_4->size);

 while (FUNC_10(&VAR_7, &VAR_8))
  switch (FUNC_6(VAR_8.mode)) {
  case 128:
   VAR_5 = FUNC_11(FUNC_5(VAR_3, &VAR_8.oid),
      VAR_5);
   break;
  case 129:
   VAR_5 = FUNC_9(FUNC_4(VAR_3, &VAR_8.oid),
      VAR_5);
   break;
  default:

   break;
  }

 FUNC_2(VAR_4);
 return VAR_5;
}
