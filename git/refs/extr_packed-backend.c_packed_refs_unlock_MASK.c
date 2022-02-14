
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct packed_ref_store {int lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct packed_ref_store* FUNC_2 (struct ref_store*,int,char*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ref_store *VAR_2)
{
 struct packed_ref_store *VAR_3 = FUNC_2(
   VAR_2,
   VAR_0 | VAR_1,
   "packed_refs_unlock");

 if (!FUNC_1(&VAR_3->lock))
  FUNC_0("packed_refs_unlock() called when not locked");
 FUNC_3(&VAR_3->lock);
}
