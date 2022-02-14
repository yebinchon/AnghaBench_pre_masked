
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {void* b; void* a; } ;
typedef TYPE_1__ be128 ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(be128 *VAR_0, const be128 *VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_1->a);
 u64 VAR_3 = FUNC_0(VAR_1->b);

 VAR_0->a = FUNC_1((VAR_2 << 1) | (VAR_3 >> 63));
 VAR_0->b = FUNC_1((VAR_3 << 1) ^ ((VAR_2 >> 63) ? 0x87 : 0));
}
