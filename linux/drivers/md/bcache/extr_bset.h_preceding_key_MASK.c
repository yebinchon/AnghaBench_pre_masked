
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bkey {int low; int high; } ;


 struct bkey FUNC_0 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct bkey*) ;
 scalar_t__ FUNC_2 (struct bkey*) ;

__attribute__((used)) static inline void FUNC_3(struct bkey *VAR_0, struct bkey **VAR_1)
{
 if (FUNC_1(VAR_0) || FUNC_2(VAR_0)) {
  (**VAR_1) = FUNC_0(FUNC_1(VAR_0), FUNC_2(VAR_0), 0);
  if (!(*VAR_1)->low)
   (*VAR_1)->high--;
  (*VAR_1)->low--;
 } else {
  (*VAR_1) = ((void*)0);
 }
}
