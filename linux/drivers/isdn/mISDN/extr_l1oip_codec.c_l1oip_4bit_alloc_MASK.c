
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 () ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* FUNC_1 (int) ;

int
FUNC_2(int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;


 if (VAR_5)
  return 0;


 VAR_4 = FUNC_1(65536);
 VAR_5 = FUNC_1(512);
 if (!VAR_4 || !VAR_5) {
  FUNC_0();
  return -VAR_0;
 }

 VAR_8 = 0;
 while (VAR_8 < 256) {
  if (VAR_7)
   VAR_10 = VAR_6[VAR_8];
  else
   VAR_10 = VAR_3[VAR_8];
  VAR_9 = 0;
  while (VAR_9 < 256) {
   VAR_4[(VAR_8 << 8) | VAR_9] |= (VAR_10 << 4);
   VAR_4[(VAR_9 << 8) | VAR_8] |= VAR_10;
   VAR_9++;
  }
  VAR_8++;
 }


 VAR_8 = 0;
 while (VAR_8 < 16) {
  if (VAR_7)
   VAR_11 = VAR_2[VAR_8];
  else
   VAR_11 = VAR_1[VAR_8];
  VAR_9 = 0;
  while (VAR_9 < 16) {
   VAR_5[(VAR_8 << 4) | VAR_9] |= (VAR_11 << 8);
   VAR_5[(VAR_9 << 4) | VAR_8] |= VAR_11;
   VAR_9++;
  }
  VAR_8++;
 }

 return 0;
}
