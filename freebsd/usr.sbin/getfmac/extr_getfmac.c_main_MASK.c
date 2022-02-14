
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mac_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char**) ;
 int VAR_1 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,char*) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_2, char *VAR_3[])
{
 char *VAR_4, *VAR_5;
 mac_t VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_4 = ((void*)0);
 VAR_8 = 0;
 while ((VAR_7 = FUNC_2(VAR_2, VAR_3, "hl:")) != -1) {
  switch (VAR_7) {
  case 'h':
   VAR_8 = 1;
   break;
  case 'l':
   if (VAR_4 != ((void*)0))
    FUNC_11();
   VAR_4 = VAR_3[VAR_1 - 1];
   break;
  default:
   FUNC_11();
  }

 }

 for (VAR_10 = VAR_1; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_4 != ((void*)0))
   VAR_9 = FUNC_6(&VAR_6, VAR_4);
  else
   VAR_9 = FUNC_7(&VAR_6);

  if (VAR_9 != 0) {
   FUNC_9("mac_prepare");
   return (-1);
  }

  if (VAR_8)
   VAR_9 = FUNC_5(VAR_3[VAR_10], VAR_6);
  else
   VAR_9 = FUNC_4(VAR_3[VAR_10], VAR_6);
  if (VAR_9) {
   FUNC_9(VAR_3[VAR_10]);
   FUNC_3(VAR_6);
   continue;
  }

  VAR_9 = FUNC_8(VAR_6, &VAR_5);
  if (VAR_9 != 0)
   FUNC_9("mac_to_text");
  else {
   FUNC_10("%s: %s\n", VAR_3[VAR_10], VAR_5);
   FUNC_1(VAR_5);
  }
  FUNC_3(VAR_6);
 }

 FUNC_0(VAR_0);
}
