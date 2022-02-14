
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_transaction {int dummy; } ;
struct ref_store {int dummy; } ;
struct packed_ref_store {int path; int tempfile; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct packed_ref_store*) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 struct packed_ref_store* FUNC_3 (struct ref_store*,int,char*) ;
 int FUNC_4 (struct packed_ref_store*,struct ref_transaction*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (struct strbuf*,char*,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ref_store *VAR_5,
         struct ref_transaction *VAR_6,
         struct strbuf *VAR_7)
{
 struct packed_ref_store *VAR_8 = FUNC_3(
   VAR_5,
   VAR_1 | VAR_2 | VAR_0,
   "ref_transaction_finish");
 int VAR_9 = VAR_3;
 char *VAR_10;

 FUNC_0(VAR_8);

 VAR_10 = FUNC_2(&VAR_8->lock);
 if (FUNC_5(&VAR_8->tempfile, VAR_10)) {
  FUNC_6(VAR_7, "error replacing %s: %s",
       VAR_8->path, FUNC_7(VAR_4));
  goto cleanup;
 }

 VAR_9 = 0;

cleanup:
 FUNC_1(VAR_10);
 FUNC_4(VAR_8, VAR_6);
 return VAR_9;
}
