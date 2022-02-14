
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 unsigned int VAR_0 ;
 unsigned long long VAR_1 ;
 void* FUNC_0 (unsigned long long,unsigned long long) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned long long VAR_2,
           unsigned long long VAR_3,
           unsigned int *VAR_4,
           unsigned int *VAR_5,
           unsigned int *VAR_6,
           unsigned int *VAR_7)
{
 unsigned long long VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_0(VAR_2, VAR_3);
 VAR_8 = VAR_8 * VAR_1;
 *VAR_6 = FUNC_0(VAR_8, VAR_3);

 *VAR_4 = VAR_2;
 *VAR_5 = VAR_8;

 *VAR_7 = VAR_3;

 while (*VAR_7 > VAR_0) {
  *VAR_7 >>= 1;
  *VAR_6 >>= 1;
 }

 VAR_9 = FUNC_1(*VAR_6, *VAR_7);
 *VAR_7 /= VAR_9;
 *VAR_6 /= VAR_9;
}
