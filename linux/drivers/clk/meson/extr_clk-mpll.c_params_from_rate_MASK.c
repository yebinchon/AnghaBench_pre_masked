
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef int u8 ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned long) ;
 unsigned int FUNC_1 (unsigned int,unsigned long) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_2 (unsigned int,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4,
        unsigned long VAR_5,
        unsigned int *VAR_6,
        unsigned int *VAR_7,
        u8 VAR_8)
{
 uint64_t VAR_9 = VAR_5;
 uint64_t VAR_10 = FUNC_2(VAR_9, VAR_4);

 VAR_10 *= VAR_3;

 if (VAR_8 & VAR_0)
  *VAR_6 = FUNC_0(VAR_10, VAR_4);
 else
  *VAR_6 = FUNC_1(VAR_10, VAR_4);

 if (*VAR_6 == VAR_3) {
  *VAR_6 = 0;
  VAR_9 += 1;
 }

 if (VAR_9 < VAR_2) {
  *VAR_7 = VAR_2;
  *VAR_6 = 0;
 } else if (VAR_9 > VAR_1) {
  *VAR_7 = VAR_1;
  *VAR_6 = VAR_3 - 1;
 } else {
  *VAR_7 = VAR_9;
 }
}
