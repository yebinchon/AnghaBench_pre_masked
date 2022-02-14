
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct hostent* FUNC_2 (char*,int,int ) ;
 struct hostent* FUNC_3 (char*) ;
 struct hostent* FUNC_4 (char*,int ) ;
 struct hostent* FUNC_5 () ;
 int FUNC_6 (struct hostent*) ;
 scalar_t__ FUNC_7 (int ,char*,void*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(int VAR_6, char *VAR_7[])
{
 struct hostent *VAR_8, *VAR_9;
 char VAR_10[VAR_2];
 int VAR_11, VAR_12;

 FUNC_0(VAR_6 > 1);
 FUNC_0(VAR_7 != ((void*)0));

 FUNC_8(1);
 VAR_8 = VAR_9 = ((void*)0);
 VAR_12 = VAR_5;
 if (VAR_6 == 2) {
  while ((VAR_8 = FUNC_5()) != ((void*)0))
   FUNC_6(VAR_8);
 } else {
  for (VAR_11 = 2; VAR_11 < VAR_6; VAR_11++) {
   if (FUNC_7(VAR_1, VAR_7[VAR_11], (void *)VAR_10) > 0) {
    VAR_9 = FUNC_2(VAR_10, VAR_2, VAR_1);
    if (VAR_9 != ((void*)0))
     FUNC_6(VAR_9);
   } else if (FUNC_7(VAR_0, VAR_7[VAR_11],
       (void *)VAR_10) > 0) {
    VAR_8 = FUNC_2(VAR_10, VAR_3, VAR_0);
    if (VAR_8 != ((void*)0))
     FUNC_6(VAR_8);
          } else {
    VAR_9 = FUNC_4(VAR_7[VAR_11], VAR_1);
    if (VAR_9 != ((void*)0))
     FUNC_6(VAR_9);
    VAR_8 = FUNC_3(VAR_7[VAR_11]);
    if (VAR_8 != ((void*)0))
     FUNC_6(VAR_8);
   }
   if ( VAR_8 == ((void*)0) && VAR_9 == ((void*)0) ) {
    VAR_12 = VAR_4;
    break;
   }
  }
 }
 FUNC_1();
 return VAR_12;
}
