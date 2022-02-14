
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct ref_to_prune {struct ref_to_prune* next; int oid; } ;
struct ref_store {int dummy; } ;
struct ref_iterator {int oid; int refname; int flags; } ;
struct files_ref_store {int packed_ref_store; } ;


 int FUNC_0 (struct ref_to_prune*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct strbuf VAR_7 ;
 struct ref_iterator* FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (char*,...) ;
 struct files_ref_store* FUNC_3 (struct ref_store*,int,char*) ;
 int FUNC_4 (struct files_ref_store*) ;
 int VAR_8 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,struct strbuf*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct files_ref_store*,struct ref_to_prune**) ;
 int FUNC_9 (struct ref_iterator*) ;
 struct ref_transaction* FUNC_10 (int ,struct strbuf*) ;
 scalar_t__ FUNC_11 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_12 (struct ref_transaction*) ;
 scalar_t__ FUNC_13 (struct ref_transaction*,int ,int ,int *,int ,int *,struct strbuf*) ;
 int FUNC_14 (int ,int ,int ,unsigned int) ;
 int FUNC_15 (struct strbuf*) ;

__attribute__((used)) static int FUNC_16(struct ref_store *VAR_9, unsigned int VAR_10)
{
 struct files_ref_store *VAR_11 =
  FUNC_3(VAR_9, VAR_6 | VAR_5,
          "pack_refs");
 struct ref_iterator *VAR_12;
 int VAR_13;
 struct ref_to_prune *VAR_14 = ((void*)0);
 struct strbuf VAR_15 = VAR_7;
 struct ref_transaction *VAR_16;

 VAR_16 = FUNC_10(VAR_11->packed_ref_store, &VAR_15);
 if (!VAR_16)
  return -1;

 FUNC_6(VAR_11->packed_ref_store, VAR_2, &VAR_15);

 VAR_12 = FUNC_1(FUNC_4(VAR_11), ((void*)0), 0);
 while ((VAR_13 = FUNC_9(VAR_12)) == VAR_1) {





  if (!FUNC_14(VAR_12->refname, VAR_12->oid, VAR_12->flags,
         VAR_10))
   continue;





  if (FUNC_13(VAR_16, VAR_12->refname,
        VAR_12->oid, ((void*)0),
        VAR_4, ((void*)0), &VAR_15))
   FUNC_2("failure preparing to create packed reference %s: %s",
       VAR_12->refname, VAR_15.buf);


  if ((VAR_10 & VAR_3)) {
   struct ref_to_prune *VAR_17;
   FUNC_0(VAR_17, VAR_8, VAR_12->refname);
   FUNC_5(&VAR_17->oid, VAR_12->oid);
   VAR_17->next = VAR_14;
   VAR_14 = VAR_17;
  }
 }
 if (VAR_13 != VAR_0)
  FUNC_2("error while iterating over references");

 if (FUNC_11(VAR_16, &VAR_15))
  FUNC_2("unable to write new packed-refs: %s", VAR_15.buf);

 FUNC_12(VAR_16);

 FUNC_7(VAR_11->packed_ref_store);

 FUNC_8(VAR_11, &VAR_14);
 FUNC_15(&VAR_15);
 return 0;
}
