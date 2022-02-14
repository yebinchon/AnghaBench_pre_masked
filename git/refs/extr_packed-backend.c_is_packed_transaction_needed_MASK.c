
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_update {int flags; int refname; int new_oid; } ;
struct ref_transaction {size_t nr; struct ref_update** updates; } ;
struct ref_store {int dummy; } ;
struct packed_ref_store {int lock; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct packed_ref_store* FUNC_3 (struct ref_store*,int ,char*) ;
 int FUNC_4 (struct ref_store*,int ,struct object_id*,struct strbuf*,unsigned int*) ;
 int FUNC_5 (struct strbuf*) ;

int FUNC_6(struct ref_store *VAR_6,
     struct ref_transaction *VAR_7)
{
 struct packed_ref_store *VAR_8 = FUNC_3(
   VAR_6,
   VAR_3,
   "is_packed_transaction_needed");
 struct strbuf VAR_9 = VAR_4;
 size_t VAR_10;
 int VAR_11;

 if (!FUNC_1(&VAR_8->lock))
  FUNC_0("is_packed_transaction_needed() called while unlocked");
 for (VAR_10 = 0; VAR_10 < VAR_7->nr; VAR_10++) {
  struct ref_update *VAR_12 = VAR_7->updates[VAR_10];

  if (VAR_12->flags & VAR_2)

   return 1;

  if ((VAR_12->flags & VAR_1) && !FUNC_2(&VAR_12->new_oid))

   return 1;
 }
 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_7->nr; VAR_10++) {
  struct ref_update *VAR_13 = VAR_7->updates[VAR_10];
  unsigned int VAR_14;
  struct object_id VAR_15;

  if (!(VAR_13->flags & VAR_1))




   continue;

  if (!FUNC_4(VAR_6, VAR_13->refname,
           &VAR_15, &VAR_9, &VAR_14) ||
      VAR_5 != VAR_0) {




   VAR_11 = 1;
   break;
  }
 }

 FUNC_5(&VAR_9);
 return VAR_11;
}
