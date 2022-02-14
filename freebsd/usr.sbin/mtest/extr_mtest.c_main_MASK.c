
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char*,int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,int,int ) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (char*,char) ;

int
FUNC_13(int VAR_10, char **VAR_11)
{
 char VAR_12[VAR_5];
 char *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_15 = -1;
 VAR_16 = -1;
 if (VAR_15 == -1 && VAR_16 == -1)
  FUNC_2(1, VAR_3, "can't open socket");

 if (VAR_10 < 2) {
  if (FUNC_6(VAR_7)) {
   FUNC_8("multicast membership test program; "
       "enter ? for list of commands\n");
  }
  do {
   if (FUNC_5(VAR_12, sizeof(VAR_12), VAR_9) != ((void*)0)) {
    if (VAR_12[0] != 'f')
     FUNC_9(VAR_12, VAR_15, VAR_16, VAR_9);
    else {

     for (VAR_14 = 1; FUNC_7(VAR_12[VAR_14]); VAR_14++);
     if ((VAR_13 = (char*)FUNC_12(VAR_12, '\n'))
         != ((void*)0))
      *VAR_13 = '\0';
     FUNC_10(&VAR_12[VAR_14], VAR_15, VAR_16);
    }
   }
  } while (!FUNC_4(VAR_9));
 } else {
  for (VAR_14 = 1; VAR_14 < VAR_10; VAR_14++) {
   FUNC_10(VAR_11[VAR_14], VAR_15, VAR_16);
  }
 }

 if (VAR_15 != -1)
  FUNC_0(VAR_15);
 if (VAR_16 != -1)
  FUNC_0(VAR_16);

 FUNC_3 (0);
}
