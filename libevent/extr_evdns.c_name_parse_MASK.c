
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*,int) ;

__attribute__((used)) static int
FUNC_2(u8 *VAR_0, int VAR_1, int *VAR_2, char *VAR_3, int VAR_4) {
 int VAR_5 = -1;
 int VAR_6 = *VAR_2;
 int VAR_7 = 0;




 char *VAR_8 = VAR_3;
 const char *const VAR_9 = VAR_3 + VAR_4;







 for (;;) {
  u8 VAR_10;
  do { if (VAR_6 >= VAR_1) goto err; VAR_10 = VAR_0[VAR_6++]; } while (0);
  if (!VAR_10) break;
  if (VAR_10 & 0xc0) {
   u8 VAR_11;
   do { if (VAR_6 >= VAR_1) goto err; VAR_11 = VAR_0[VAR_6++]; } while (0);
   if (VAR_5 < 0) VAR_5 = VAR_6;
   VAR_6 = (((int)VAR_10 & 0x3f) << 8) + VAR_11;

   if (VAR_6 < 0 || VAR_6 >= VAR_1) return -1;


   if (++VAR_7 > VAR_1) return -1;
   continue;
  }
  if (VAR_10 > 63) return -1;
  if (VAR_8 != VAR_3) {
   if (VAR_8 + 1 >= VAR_9) return -1;
   *VAR_8++ = '.';
  }
  if (VAR_8 + VAR_10 >= VAR_9) return -1;
  if (VAR_6 + VAR_10 > VAR_1) return -1;
  FUNC_1(VAR_8, VAR_0 + VAR_6, VAR_10);
  VAR_8 += VAR_10;
  VAR_6 += VAR_10;
 }
 if (VAR_8 >= VAR_9) return -1;
 *VAR_8 = '\0';
 if (VAR_5 < 0)
  *VAR_2 = VAR_6;
 else
  *VAR_2 = VAR_5;
 return 0;
 err:
 return -1;
}
