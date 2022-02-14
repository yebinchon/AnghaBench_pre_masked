
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2,
    unsigned long VAR_3,
    u32 *VAR_4, u32 *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 u64 VAR_9;
 if (VAR_3 <= VAR_2) {
  VAR_6 = 0;
  VAR_9 = 0;
  VAR_8 = 0;
  VAR_7 = 0;
 } else {
  VAR_6 = VAR_3 / (VAR_2 << 1);
  VAR_9 = VAR_3;
  VAR_9 <<= 8;
  FUNC_0(VAR_9, VAR_2);
  VAR_9 -= (u64)(VAR_6 << 9);

  VAR_8 = (VAR_6 > VAR_0) ? VAR_0 : VAR_6;
  VAR_7 = (VAR_9 >= VAR_1) ? VAR_1 : VAR_9;
 }

 if (VAR_4)
  *VAR_4 = VAR_8;

 if (VAR_5)
  *VAR_5 = VAR_7;
}
