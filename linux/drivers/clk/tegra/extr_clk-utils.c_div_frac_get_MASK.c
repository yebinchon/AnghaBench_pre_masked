
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long) ;

int FUNC_2(unsigned long VAR_2, unsigned VAR_3, u8 VAR_4,
   u8 VAR_5, u8 VAR_6)
{
 u64 VAR_7 = VAR_3;
 int VAR_8;

 if (!VAR_2)
  return 0;

 VAR_8 = 1 << VAR_5;

 if (!(VAR_6 & VAR_0))
  VAR_7 *= VAR_8;

 if (VAR_6 & VAR_1)
  VAR_7 += VAR_2 - 1;

 FUNC_1(VAR_7, VAR_2);

 if (VAR_6 & VAR_0)
  VAR_7 *= VAR_8;

 if (VAR_7 < VAR_8)
  return 0;

 VAR_7 -= VAR_8;

 if (VAR_7 > FUNC_0(VAR_4))
  return FUNC_0(VAR_4);

 return VAR_7;
}
