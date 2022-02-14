
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {void* a; void* b; } ;
typedef TYPE_1__ be128 ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_2(be128 *VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_1->a);
 u64 VAR_3 = FUNC_0(VAR_1->b);
 u64 VAR_4 = VAR_0[VAR_3 & 0xff];

 VAR_1->b = FUNC_1((VAR_3 >> 8) | (VAR_2 << 56));
 VAR_1->a = FUNC_1((VAR_2 >> 8) ^ (VAR_4 << 48));
}
