
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct journal_completion {TYPE_1__* ic; } ;
struct TYPE_2__ {int crypto_backoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct skcipher_request*,int ,int ,struct journal_completion*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(bool VAR_4, struct skcipher_request *VAR_5, struct journal_completion *VAR_6)
{
 int VAR_7;
 FUNC_5(VAR_5, VAR_0,
          VAR_3, VAR_6);
 if (FUNC_3(VAR_4))
  VAR_7 = FUNC_1(VAR_5);
 else
  VAR_7 = FUNC_0(VAR_5);
 if (FUNC_3(!VAR_7))
  return 0;
 if (FUNC_3(VAR_7 == -VAR_2))
  return 1;
 if (FUNC_3(VAR_7 == -VAR_1)) {
  FUNC_6(&VAR_6->ic->crypto_backoff);
  FUNC_4(&VAR_6->ic->crypto_backoff);
  return 1;
 }
 FUNC_2(VAR_6->ic, "encrypt", VAR_7);
 return 0;
}
