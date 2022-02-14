
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct ref {int old_oid; TYPE_1__* peer_ref; struct ref* next; } ;
struct TYPE_2__ {int name; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct ref_transaction*,struct strbuf*) ;
 struct ref_transaction* FUNC_2 (struct strbuf*) ;
 scalar_t__ FUNC_3 (struct ref_transaction*,int ,int *,int ,int *,struct strbuf*) ;
 int FUNC_4 (struct ref_transaction*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(const struct ref *VAR_1)
{
 const struct ref *VAR_2;

 struct ref_transaction *VAR_3;
 struct strbuf VAR_4 = VAR_0;

 VAR_3 = FUNC_2(&VAR_4);
 if (!VAR_3)
  FUNC_0("%s", VAR_4.buf);

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
  if (!VAR_2->peer_ref)
   continue;
  if (FUNC_3(VAR_3, VAR_2->peer_ref->name, &VAR_2->old_oid,
        0, ((void*)0), &VAR_4))
   FUNC_0("%s", VAR_4.buf);
 }

 if (FUNC_1(VAR_3, &VAR_4))
  FUNC_0("%s", VAR_4.buf);

 FUNC_5(&VAR_4);
 FUNC_4(VAR_3);
}
