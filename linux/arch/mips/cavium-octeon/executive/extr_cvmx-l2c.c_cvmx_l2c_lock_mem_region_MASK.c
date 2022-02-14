
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(uint64_t VAR_2, uint64_t VAR_3)
{
 int VAR_4 = 0;


 VAR_3 += VAR_2 & VAR_0;
 VAR_2 &= ~VAR_0;
 VAR_3 = (VAR_3 + VAR_0) & ~VAR_0;

 while (VAR_3) {
  VAR_4 += FUNC_0(VAR_2);
  VAR_2 += VAR_1;
  VAR_3 -= VAR_1;
 }
 return VAR_4;
}
