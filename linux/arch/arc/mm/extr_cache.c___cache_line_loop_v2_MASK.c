
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long phys_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (unsigned int,unsigned long) ;

__attribute__((used)) static inline
void FUNC_2(phys_addr_t VAR_8, unsigned long VAR_9,
     unsigned long VAR_10, const int VAR_11, const int VAR_12)
{
 unsigned int VAR_13;
 int VAR_14;

 if (VAR_11 == VAR_6) {
  VAR_13 = VAR_2;
 } else {

  VAR_13 = VAR_11 & VAR_5 ? VAR_1 : VAR_0;
 }







 if (!VAR_12) {
  VAR_10 += VAR_8 & ~VAR_3;
  VAR_8 &= VAR_3;
  VAR_9 &= VAR_3;
 }

 VAR_14 = FUNC_0(VAR_10, VAR_4);


 VAR_8 |= (VAR_9 >> VAR_7) & 0x1F;

 while (VAR_14-- > 0) {
  FUNC_1(VAR_13, VAR_8);
  VAR_8 += VAR_4;
 }
}
