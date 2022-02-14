
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (long,int) ;

__attribute__((used)) static char *FUNC_1(char *VAR_7, long VAR_8, int VAR_9, int VAR_10, int VAR_11,
      int VAR_12)
{

 static const char VAR_13[16] = "0123456789ABCDEF";

 char VAR_14[66];
 char VAR_15, VAR_16, VAR_17;
 int VAR_18;



 VAR_17 = (VAR_12 & VAR_3);
 if (VAR_12 & VAR_0)
  VAR_12 &= ~VAR_6;
 if (VAR_9 < 2 || VAR_9 > 16)
  return ((void*)0);
 VAR_15 = (VAR_12 & VAR_6) ? '0' : ' ';
 VAR_16 = 0;
 if (VAR_12 & VAR_2) {
  if (VAR_8 < 0) {
   VAR_16 = '-';
   VAR_8 = -VAR_8;
   VAR_10--;
  } else if (VAR_12 & VAR_1) {
   VAR_16 = '+';
   VAR_10--;
  } else if (VAR_12 & VAR_4) {
   VAR_16 = ' ';
   VAR_10--;
  }
 }
 if (VAR_12 & VAR_5) {
  if (VAR_9 == 16)
   VAR_10 -= 2;
  else if (VAR_9 == 8)
   VAR_10--;
 }
 VAR_18 = 0;
 if (VAR_8 == 0)
  VAR_14[VAR_18++] = '0';
 else
  while (VAR_8 != 0)
   VAR_14[VAR_18++] = (VAR_13[FUNC_0(VAR_8, VAR_9)] | VAR_17);
 if (VAR_18 > VAR_11)
  VAR_11 = VAR_18;
 VAR_10 -= VAR_11;
 if (!(VAR_12 & (VAR_6 + VAR_0)))
  while (VAR_10-- > 0)
   *VAR_7++ = ' ';
 if (VAR_16)
  *VAR_7++ = VAR_16;
 if (VAR_12 & VAR_5) {
  if (VAR_9 == 8)
   *VAR_7++ = '0';
  else if (VAR_9 == 16) {
   *VAR_7++ = '0';
   *VAR_7++ = ('X' | VAR_17);
  }
 }
 if (!(VAR_12 & VAR_0))
  while (VAR_10-- > 0)
   *VAR_7++ = VAR_15;
 while (VAR_18 < VAR_11--)
  *VAR_7++ = '0';
 while (VAR_18-- > 0)
  *VAR_7++ = VAR_14[VAR_18];
 while (VAR_10-- > 0)
  *VAR_7++ = ' ';
 return VAR_7;
}
