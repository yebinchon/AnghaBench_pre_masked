
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_transaction {int state; struct ref_store* ref_store; } ;
struct ref_store {TYPE_1__* be; } ;
struct TYPE_2__ {int (* transaction_prepare ) (struct ref_store*,struct ref_transaction*,struct strbuf*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;



 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct ref_store*,struct ref_transaction*,struct strbuf*) ;

int FUNC_5(struct ref_transaction *VAR_1,
       struct strbuf *VAR_2)
{
 struct ref_store *VAR_3 = VAR_1->ref_store;

 switch (VAR_1->state) {
 case 129:

  break;
 case 128:
  FUNC_0("prepare called twice on reference transaction");
  break;
 case 130:
  FUNC_0("prepare called on a closed reference transaction");
  break;
 default:
  FUNC_0("unexpected reference transaction state");
  break;
 }

 if (FUNC_2(VAR_0)) {
  FUNC_3(VAR_2,
         FUNC_1("ref updates forbidden inside quarantine environment"));
  return -1;
 }

 return VAR_3->be->transaction_prepare(VAR_3, VAR_1, VAR_2);
}
