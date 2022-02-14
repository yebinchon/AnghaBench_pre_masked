
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
typedef long u32 ;


 long VAR_0 ;
 int FUNC_0 (long,long) ;

__attribute__((used)) static long FUNC_1(unsigned long VAR_1,
        u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u64 VAR_5;

 if (VAR_4 == 0)
  return 0;

 VAR_5 = (u64)VAR_1 * ((VAR_2 << VAR_0) + VAR_3);
 FUNC_0(VAR_5, VAR_4);
 return VAR_5 >> VAR_0;
}
