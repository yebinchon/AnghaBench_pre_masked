
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {void* a; void* b; } ;
typedef TYPE_1__ le128 ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static inline void FUNC_2(le128 *VAR_0, const le128 *VAR_1, const le128 *VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_1->b);
 u64 VAR_4 = FUNC_1(VAR_2->b);

 VAR_0->b = FUNC_0(VAR_3 - VAR_4);
 VAR_0->a = FUNC_0(FUNC_1(VAR_1->a) - FUNC_1(VAR_2->a) -
      (VAR_3 - VAR_4 > VAR_3));
}
