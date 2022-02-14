
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void
FUNC_2(void)
{
 char **VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_1;
 if (VAR_2 & VAR_0)
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   for (VAR_8 = VAR_7; VAR_8 < VAR_3; VAR_8 += VAR_5)
    FUNC_0(VAR_6[VAR_8], (VAR_8 - VAR_7) / VAR_5);
   FUNC_1('\n');
  }
 else
  for (VAR_7 = VAR_9 = 0; VAR_7 < VAR_5; VAR_7++) {
   for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_9++)
    if (VAR_9 < VAR_3)
     FUNC_0(VAR_6[VAR_9], VAR_8);
   FUNC_1('\n');
  }
}
