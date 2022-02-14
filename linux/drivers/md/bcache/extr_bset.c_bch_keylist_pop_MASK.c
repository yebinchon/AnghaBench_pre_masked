
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keylist {struct bkey* top; struct bkey* keys; } ;
struct bkey {int dummy; } ;


 struct bkey* FUNC_0 (struct bkey*) ;

struct bkey *FUNC_1(struct keylist *VAR_0)
{
 struct bkey *VAR_1 = VAR_0->keys;

 if (VAR_1 == VAR_0->top)
  return ((void*)0);

 while (FUNC_0(VAR_1) != VAR_0->top)
  VAR_1 = FUNC_0(VAR_1);

 return VAR_0->top = VAR_1;
}
