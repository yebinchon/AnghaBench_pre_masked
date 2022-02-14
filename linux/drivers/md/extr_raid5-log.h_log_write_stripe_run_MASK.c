
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {scalar_t__ log; } ;


 int FUNC_0 (struct r5conf*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct r5conf*) ;

__attribute__((used)) static inline void FUNC_3(struct r5conf *VAR_0)
{
 if (VAR_0->log)
  FUNC_1(VAR_0->log);
 else if (FUNC_2(VAR_0))
  FUNC_0(VAR_0);
}
