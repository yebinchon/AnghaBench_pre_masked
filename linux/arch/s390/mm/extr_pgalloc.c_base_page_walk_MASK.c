
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
     unsigned long VAR_4, int VAR_5)
{
 unsigned long *VAR_6, VAR_7;

 if (!VAR_5)
  return 0;
 VAR_6 = (unsigned long *) VAR_2;
 VAR_6 += (VAR_3 & VAR_0) >> VAR_1;
 do {
  VAR_7 = FUNC_1(VAR_3, VAR_4);
  *VAR_6 = FUNC_0(VAR_3);
 } while (VAR_6++, VAR_3 = VAR_7, VAR_3 < VAR_4);
 return 0;
}
