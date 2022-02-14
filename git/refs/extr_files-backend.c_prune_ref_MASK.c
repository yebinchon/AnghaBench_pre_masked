
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct ref_to_prune {int oid; int name; } ;
struct files_ref_store {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 struct ref_transaction* FUNC_2 (int *,struct strbuf*) ;
 int FUNC_3 (struct ref_transaction*,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_4 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_5 (struct ref_transaction*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static void FUNC_7(struct files_ref_store *VAR_6, struct ref_to_prune *VAR_7)
{
 struct ref_transaction *VAR_8;
 struct strbuf VAR_9 = VAR_4;
 int VAR_10 = -1;

 if (FUNC_0(VAR_7->name, 0))
  return;

 VAR_8 = FUNC_2(&VAR_6->base, &VAR_9);
 if (!VAR_8)
  goto cleanup;
 FUNC_3(
   VAR_8, VAR_7->name,
   VAR_3 | VAR_0 | VAR_1 | VAR_2,
   &VAR_5, &VAR_7->oid, ((void*)0));
 if (FUNC_4(VAR_8, &VAR_9))
  goto cleanup;

 VAR_10 = 0;

cleanup:
 if (VAR_10)
  FUNC_1("%s", VAR_9.buf);
 FUNC_6(&VAR_9);
 FUNC_5(VAR_8);
 return;
}
