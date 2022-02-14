
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree_desc {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct tree {TYPE_1__ object; int size; int buffer; } ;
struct repository {int dummy; } ;
struct name_entry {int oid; int path; int mode; } ;
struct hashmap {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct blob {TYPE_2__ object; } ;




 int VAR_0 ;
 int FUNC_0 (struct tree*) ;
 int FUNC_1 (struct tree_desc*,int ,int ) ;
 struct blob* FUNC_2 (struct repository*,int *) ;
 struct tree* FUNC_3 (struct repository*,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct tree*,int) ;
 int FUNC_6 (struct hashmap*,int ,int *) ;
 scalar_t__ FUNC_7 (struct tree_desc*,struct name_entry*) ;

__attribute__((used)) static void FUNC_8(struct repository *VAR_1,
     struct tree *VAR_2,
     struct hashmap *VAR_3)
{
 struct tree_desc VAR_4;
 struct name_entry VAR_5;

 if (!VAR_2)
  return;

 if (FUNC_5(VAR_2, 1) < 0)
  return;

 FUNC_1(&VAR_4, VAR_2->buffer, VAR_2->size);
 while (FUNC_7(&VAR_4, &VAR_5)) {
  switch (FUNC_4(VAR_5.mode)) {
  case 128:
   FUNC_6(VAR_3, VAR_5.path, &VAR_5.oid);

   if (VAR_2->object.flags & VAR_0) {
    struct tree *VAR_6 = FUNC_3(VAR_1, &VAR_5.oid);
    if (VAR_6)
     VAR_6->object.flags |= VAR_0;
   }
   break;
  case 129:
   if (VAR_2->object.flags & VAR_0) {
    struct blob *VAR_7 = FUNC_2(VAR_1, &VAR_5.oid);
    if (VAR_7)
     VAR_7->object.flags |= VAR_0;
   }
   break;
  default:

   break;
  }
 }

 FUNC_0(VAR_2);
}
