
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct repository {int dummy; } ;
struct name_entry {int oid; int mode; } ;




 int FUNC_0 (struct tree*) ;
 int FUNC_1 (struct tree_desc*,int ,int ) ;
 int FUNC_2 (struct repository*,int *) ;
 int FUNC_3 (struct repository*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct repository*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct tree*,int) ;
 scalar_t__ FUNC_8 (struct tree_desc*,struct name_entry*) ;

__attribute__((used)) static void FUNC_9(struct repository *VAR_0,
          struct tree *VAR_1)
{
 struct tree_desc VAR_2;
 struct name_entry VAR_3;

 if (FUNC_7(VAR_1, 1) < 0)
  return;

 FUNC_1(&VAR_2, VAR_1->buffer, VAR_1->size);
 while (FUNC_8(&VAR_2, &VAR_3)) {
  switch (FUNC_6(VAR_3.mode)) {
  case 128:
   FUNC_5(VAR_0, FUNC_3(VAR_0, &VAR_3.oid));
   break;
  case 129:
   FUNC_4(FUNC_2(VAR_0, &VAR_3.oid));
   break;
  default:

   break;
  }
 }





 FUNC_0(VAR_1);
}
