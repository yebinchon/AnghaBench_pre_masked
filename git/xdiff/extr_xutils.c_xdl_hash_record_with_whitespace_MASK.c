
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static unsigned long FUNC_1(char const **VAR_5,
  char const *VAR_6, long VAR_7) {
 unsigned long VAR_8 = 5381;
 char const *VAR_9 = *VAR_5;
 int VAR_10 = (VAR_7 & VAR_4) == VAR_0;

 for (; VAR_9 < VAR_6 && *VAR_9 != '\n'; VAR_9++) {
  if (VAR_10) {

   if (*VAR_9 == '\r' &&
       (VAR_9 + 1 < VAR_6 && VAR_9[1] == '\n'))
    continue;
  }
  else if (FUNC_0(*VAR_9)) {
   const char *VAR_11 = VAR_9;
   int VAR_12;
   while (VAR_9 + 1 < VAR_6 && FUNC_0(VAR_9[1])
     && VAR_9[1] != '\n')
    VAR_9++;
   VAR_12 = (VAR_6 <= VAR_9 + 1 || VAR_9[1] == '\n');
   if (VAR_7 & VAR_1)
    ;
   else if (VAR_7 & VAR_3
     && !VAR_12) {
    VAR_8 += (VAR_8 << 5);
    VAR_8 ^= (unsigned long) ' ';
   }
   else if (VAR_7 & VAR_2
     && !VAR_12) {
    while (VAR_11 != VAR_9 + 1) {
     VAR_8 += (VAR_8 << 5);
     VAR_8 ^= (unsigned long) *VAR_11;
     VAR_11++;
    }
   }
   continue;
  }
  VAR_8 += (VAR_8 << 5);
  VAR_8 ^= (unsigned long) *VAR_9;
 }
 *VAR_5 = VAR_9 < VAR_6 ? VAR_9 + 1: VAR_9;

 return VAR_8;
}
