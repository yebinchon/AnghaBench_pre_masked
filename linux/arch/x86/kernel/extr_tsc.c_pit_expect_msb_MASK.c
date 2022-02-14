
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static inline int FUNC_2(unsigned char VAR_0, u64 *VAR_1, unsigned long *VAR_2)
{
 int VAR_3;
 u64 VAR_4 = 0, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < 50000; VAR_3++) {
  if (!FUNC_1(VAR_0))
   break;
  VAR_5 = VAR_4;
  VAR_4 = FUNC_0();
 }
 *VAR_2 = FUNC_0() - VAR_5;
 *VAR_1 = VAR_4;





 return VAR_3 > 5;
}
