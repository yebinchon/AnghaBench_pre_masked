
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct journal_completion {TYPE_1__* ic; } ;
struct crypto_async_request {struct journal_completion* data; } ;
struct TYPE_2__ {int crypto_backoff; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct journal_completion*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct journal_completion *VAR_3 = VAR_1->data;
 if (FUNC_4(VAR_2)) {
  if (FUNC_3(VAR_2 == -VAR_0)) {
   FUNC_0(&VAR_3->ic->crypto_backoff);
   return;
  }
  FUNC_2(VAR_3->ic, "asynchronous encrypt", VAR_2);
 }
 FUNC_1(VAR_3);
}
