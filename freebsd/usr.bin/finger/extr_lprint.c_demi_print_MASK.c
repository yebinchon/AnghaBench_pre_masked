
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2, int VAR_3)
{
 static int VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_3) {
  VAR_6 = 5 * VAR_1;
  if (VAR_6 < VAR_4)
   VAR_6 = VAR_4;
  if (((((VAR_6 / VAR_1) + 1) * VAR_1) +
      VAR_5) <= VAR_0) {
   while(VAR_4 < (4 * VAR_1)) {
    FUNC_1('\t');
    VAR_4 += VAR_1;
   }
   (void)FUNC_0("\t%s\n", VAR_2);
  } else {
   (void)FUNC_0("\n%s", VAR_2);
   VAR_3 = !VAR_3;
  }
 } else
  (void)FUNC_0("%s", VAR_2);
 VAR_3 = !VAR_3;
 VAR_4 = VAR_5;
 return(VAR_3);
}
