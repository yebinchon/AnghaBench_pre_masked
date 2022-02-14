
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keylist {int top; struct bkey* keys; } ;
struct bkey {int dummy; } ;


 int FUNC_0 (struct bkey*) ;

__attribute__((used)) static inline void FUNC_1(struct keylist *VAR_0, struct bkey *VAR_1)
{
 VAR_0->keys = VAR_1;
 VAR_0->top = FUNC_0(VAR_1);
}
