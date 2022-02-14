
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 unsigned long long VAR_4 ;
 scalar_t__ FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(bool VAR_5)
{
 u64 VAR_6;
 int VAR_7;


 if (FUNC_0(VAR_0, &VAR_6))
  return -1;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_3[VAR_7] = (VAR_6 >> 8) & 0x1FULL;







 if (VAR_5)
  VAR_3[VAR_2] = 16;
 VAR_4 = 2;
 if (VAR_3[0] < 32) {
  VAR_4 = (1000 / (2 * 100));
  VAR_4 *= (1ULL << (32 - VAR_3[0] - 1));
 }
 return 0;
}
