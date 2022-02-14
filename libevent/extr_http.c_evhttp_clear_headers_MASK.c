
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evkeyvalq {int dummy; } ;
struct evkeyval {struct evkeyval* value; struct evkeyval* key; } ;


 struct evkeyval* FUNC_0 (struct evkeyvalq*) ;
 int FUNC_1 (struct evkeyvalq*,struct evkeyval*,int ) ;
 int FUNC_2 (struct evkeyval*) ;
 int VAR_0 ;

void
FUNC_3(struct evkeyvalq *VAR_1)
{
 struct evkeyval *VAR_2;

 for (VAR_2 = FUNC_0(VAR_1);
     VAR_2 != ((void*)0);
     VAR_2 = FUNC_0(VAR_1)) {
  FUNC_1(VAR_1, VAR_2, VAR_0);
  FUNC_2(VAR_2->key);
  FUNC_2(VAR_2->value);
  FUNC_2(VAR_2);
 }
}
