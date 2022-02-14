
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int8 ;
typedef int bits64 ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int8 FUNC_1(bits64 VAR_0)
{
 int8 VAR_1;

 VAR_1 = 0;
 if (VAR_0 < ((bits64) 1) << 32) {
  VAR_1 += 32;
 } else {
  VAR_0 >>= 32;
 }
 VAR_1 += FUNC_0(VAR_0);
 return VAR_1;

}
