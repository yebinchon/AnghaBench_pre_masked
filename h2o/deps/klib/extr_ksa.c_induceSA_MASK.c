
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t saint_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (size_t*,size_t*,size_t,int) ;
 int FUNC_2 (unsigned char const*,size_t*,size_t,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(const unsigned char *VAR_0, saint_t *VAR_1, saint_t *VAR_2, saint_t *VAR_3, saint_t VAR_4, saint_t VAR_5, saint_t VAR_6)
{
 saint_t *VAR_7, VAR_8, VAR_9;
 saint_t VAR_10, VAR_11;

 if (VAR_2 == VAR_3) FUNC_2(VAR_0, VAR_2, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_2, VAR_3, VAR_5, 0);
 for (VAR_8 = 0, VAR_7 = 0, VAR_11 = -1; VAR_8 < VAR_4; ++VAR_8) {
  VAR_9 = VAR_1[VAR_8], VAR_1[VAR_8] = ~VAR_9;
  if (0 < VAR_9) {
   --VAR_9;
   if ((VAR_10 = FUNC_0(VAR_9)) != VAR_11) {
    VAR_3[VAR_11 > 0? VAR_11 : 0] = VAR_7 - VAR_1;
    VAR_11 = VAR_10;
    VAR_7 = VAR_1 + VAR_3[VAR_11 > 0? VAR_11 : 0];
   }
   *VAR_7++ = (0 < VAR_9 && FUNC_0(VAR_9 - 1) < VAR_11) ? ~VAR_9 : VAR_9;
  }
 }

 if (VAR_2 == VAR_3) FUNC_2(VAR_0, VAR_2, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_2, VAR_3, VAR_5, 1);
 for (VAR_8 = VAR_4 - 1, VAR_7 = 0, VAR_11 = -1; 0 <= VAR_8; --VAR_8) {
  if (0 < (VAR_9 = VAR_1[VAR_8])) {
   --VAR_9;
   if ((VAR_10 = FUNC_0(VAR_9)) != VAR_11) {
    VAR_3[VAR_11 > 0? VAR_11 : 0] = VAR_7 - VAR_1;
    VAR_11 = VAR_10;
    VAR_7 = VAR_1 + VAR_3[VAR_11 > 0? VAR_11 : 0];
   }
   if (VAR_10 > 0) *--VAR_7 = (VAR_9 == 0 || FUNC_0(VAR_9 - 1) > VAR_11) ? ~VAR_9 : VAR_9;
  } else VAR_1[VAR_8] = ~VAR_9;
 }
}
