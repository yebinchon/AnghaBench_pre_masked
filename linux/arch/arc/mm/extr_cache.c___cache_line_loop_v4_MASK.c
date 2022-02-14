
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned long phys_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (unsigned int,unsigned long) ;

__attribute__((used)) static inline
void FUNC_3(phys_addr_t VAR_9, unsigned long VAR_10,
     unsigned long VAR_11, const int VAR_12, const int VAR_13)
{
 unsigned int VAR_14;
 int VAR_15;

 if (VAR_12 == VAR_8) {
  VAR_14 = VAR_3;
 } else {

  VAR_14 = VAR_12 & VAR_7 ? VAR_1 : VAR_0;
 }







 if (!VAR_13) {
  VAR_11 += VAR_9 & ~VAR_5;
  VAR_9 &= VAR_5;
 }

 VAR_15 = FUNC_0(VAR_11, VAR_6);






 if (FUNC_1()) {
  if (VAR_12 == VAR_8)




   FUNC_2(VAR_4, (u64)VAR_9 >> 32);
  else
   FUNC_2(VAR_2, (u64)VAR_9 >> 32);
 }

 while (VAR_15-- > 0) {
  FUNC_2(VAR_14, VAR_9);
  VAR_9 += VAR_6;
 }
}
