
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 unsigned long long FUNC_0 (unsigned long long) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long long,int) ;

__attribute__((used)) static unsigned long long FUNC_2(s64 VAR_1, unsigned int VAR_2)
{
 unsigned long long VAR_3 = 1000000;

 if (VAR_1 <= 0)
  return 0;


 while (VAR_1 > VAR_0) {
  VAR_1 >>= 1;
  VAR_3 <<= 1;
 }

 VAR_3 *= VAR_2;
 VAR_3 = FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_1);

 return VAR_3;
}
