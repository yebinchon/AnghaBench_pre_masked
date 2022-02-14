
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {int cntval_bits; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned long long) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 unsigned int VAR_3;
 u64 VAR_4;






 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(FUNC_2(VAR_2), VAR_4);
  if (VAR_4 & (1ULL << (VAR_1.cntval_bits - 1)))
   break;


  FUNC_1(1);
 }
}
