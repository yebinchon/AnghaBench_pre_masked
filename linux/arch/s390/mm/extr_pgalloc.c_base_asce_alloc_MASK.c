
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (unsigned long,unsigned long,unsigned long,int) ;
 int FUNC_4 (unsigned long,unsigned long,unsigned long,int) ;
 int FUNC_5 (unsigned long,unsigned long,unsigned long,int) ;
 int FUNC_6 (unsigned long,unsigned long,unsigned long,int) ;

unsigned long FUNC_7(unsigned long VAR_13, unsigned long VAR_14)
{
 unsigned long VAR_15, VAR_16, VAR_17;
 int VAR_18;

 if (FUNC_2())
  return 0;
 VAR_17 = VAR_13 + VAR_14 * VAR_0;
 if (VAR_17 <= VAR_11) {
  VAR_16 = FUNC_1(VAR_12);
  if (!VAR_16)
   return 0;
  VAR_18 = FUNC_6(VAR_16, VAR_13, VAR_17, 1);
  VAR_15 = VAR_16 | VAR_5 | VAR_1;
 } else if (VAR_17 <= VAR_9) {
  VAR_16 = FUNC_1(VAR_10);
  if (!VAR_16)
   return 0;
  VAR_18 = FUNC_5(VAR_16, VAR_13, VAR_17, 1);
  VAR_15 = VAR_16 | VAR_4 | VAR_1;
 } else if (VAR_17 <= VAR_7) {
  VAR_16 = FUNC_1(VAR_8);
  if (!VAR_16)
   return 0;
  VAR_18 = FUNC_4(VAR_16, VAR_13, VAR_17, 1);
  VAR_15 = VAR_16 | VAR_3 | VAR_1;
 } else {
  VAR_16 = FUNC_1(VAR_6);
  if (!VAR_16)
   return 0;
  VAR_18 = FUNC_3(VAR_16, VAR_13, VAR_17, 1);
  VAR_15 = VAR_16 | VAR_2 | VAR_1;
 }
 if (VAR_18) {
  FUNC_0(VAR_15);
  VAR_15 = 0;
 }
 return VAR_15;
}
