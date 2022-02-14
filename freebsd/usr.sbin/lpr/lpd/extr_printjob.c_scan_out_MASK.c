
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int page_width; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char FUNC_0 (char) ;
 int VAR_4 ;
 int FUNC_1 (char) ;
 int ** VAR_5 ;
 char* FUNC_2 (int ,char*,char) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct printer *VAR_6, int VAR_7, char *VAR_8, int VAR_9)
{
 register char *VAR_10;
 register int VAR_11, VAR_12;
 char VAR_13[VAR_3+1], *VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;

 for (VAR_18 = 0; VAR_18++ < VAR_2+VAR_1; ) {
  VAR_10 = &VAR_13[0];
  VAR_14 = VAR_8;
  for (VAR_11 = 0; ; ) {
   VAR_17 = FUNC_1(VAR_15 = FUNC_0(VAR_16 = *VAR_14++));
   if ((!VAR_17 && VAR_18 > VAR_2) || (VAR_18 <= VAR_1 && VAR_17))
    for (VAR_12 = VAR_4; --VAR_12;)
     *VAR_10++ = VAR_0;
   else
    VAR_10 = FUNC_2(VAR_5[(int)VAR_15][VAR_18-1-VAR_17], VAR_10, VAR_16);
   if (*VAR_14 == VAR_9 || *VAR_14 == '\0' ||
       VAR_11++ >= VAR_6->page_width/(VAR_4+1)-1)
    break;
   *VAR_10++ = VAR_0;
   *VAR_10++ = VAR_0;
  }
  while (*--VAR_10 == VAR_0 && VAR_10 >= VAR_13)
   ;
  VAR_10++;
  *VAR_10++ = '\n';
  (void) FUNC_3(VAR_7, VAR_13, VAR_10-VAR_13);
 }
}
