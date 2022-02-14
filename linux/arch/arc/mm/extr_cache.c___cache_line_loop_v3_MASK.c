
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
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (unsigned int,unsigned long) ;

__attribute__((used)) static inline
void FUNC_3(phys_addr_t VAR_10, unsigned long VAR_11,
     unsigned long VAR_12, const int VAR_13, const int VAR_14)
{
 unsigned int VAR_15, VAR_16;
 int VAR_17;

 if (VAR_13 == VAR_9) {
  VAR_15 = VAR_3;
  VAR_16 = VAR_4;
 } else {
  VAR_15 = VAR_13 & VAR_8 ? VAR_1 : VAR_0;
  VAR_16 = VAR_2;
 }







 if (!VAR_14) {
  VAR_12 += VAR_10 & ~VAR_6;
  VAR_10 &= VAR_6;
  VAR_11 &= VAR_6;
 }
 VAR_17 = FUNC_0(VAR_12, VAR_7);





 if (VAR_14)
  FUNC_2(VAR_16, VAR_10);
 if (FUNC_1() && VAR_13 == VAR_9)
  FUNC_2(VAR_5, (u64)VAR_10 >> 32);

 while (VAR_17-- > 0) {
  if (!VAR_14) {
   FUNC_2(VAR_16, VAR_10);
   VAR_10 += VAR_7;
  }

  FUNC_2(VAR_15, VAR_11);
  VAR_11 += VAR_7;
 }
}
