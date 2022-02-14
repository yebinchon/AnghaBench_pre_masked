
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_object_store {int * multi_pack_index; struct packed_git* packed_git; } ;
struct packed_git {scalar_t__ do_not_close; struct packed_git* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct raw_object_store*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct packed_git*) ;

void FUNC_4(struct raw_object_store *VAR_0)
{
 struct packed_git *VAR_1;

 for (VAR_1 = VAR_0->packed_git; VAR_1; VAR_1 = VAR_1->next)
  if (VAR_1->do_not_close)
   FUNC_0("want to close pack marked 'do-not-close'");
  else
   FUNC_3(VAR_1);

 if (VAR_0->multi_pack_index) {
  FUNC_2(VAR_0->multi_pack_index);
  VAR_0->multi_pack_index = ((void*)0);
 }

 FUNC_1(VAR_0);
}
