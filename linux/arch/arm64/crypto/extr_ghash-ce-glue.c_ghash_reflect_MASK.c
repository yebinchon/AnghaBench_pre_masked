
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int b; int a; } ;
typedef TYPE_1__ be128 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(u64 VAR_0[], const be128 *VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_1->a) & FUNC_0(63) ? 1 : 0;

 VAR_0[0] = (FUNC_1(VAR_1->b) << 1) | VAR_2;
 VAR_0[1] = (FUNC_1(VAR_1->a) << 1) | (FUNC_1(VAR_1->b) >> 63);

 if (VAR_2)
  VAR_0[1] ^= 0xc200000000000000UL;
}
