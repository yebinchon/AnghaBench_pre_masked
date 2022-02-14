
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (long long,long long) ;

__attribute__((used)) static unsigned long FUNC_1(u64 VAR_3, u64 VAR_4, u64 VAR_5)
{
 u64 VAR_6;

 if (!VAR_4 && !VAR_5)
  return VAR_2;

 if (VAR_5 < VAR_4)
  VAR_5 += (u64)VAR_0;
 VAR_5 -= VAR_4;
 VAR_6 = VAR_5 * 1000000000LL;
 FUNC_0(VAR_6, VAR_1);
 FUNC_0(VAR_3, VAR_6);

 return (unsigned long) VAR_3;
}
