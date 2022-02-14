
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int History ;
typedef int HistEvent ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (int *,int*) ;
 int * FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *,int ,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int *,int ,...) ;
 int * FUNC_7 () ;
 int FUNC_8 (char*,char const*,int) ;
 char* FUNC_9 (char*,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static char *
FUNC_10(int *VAR_13)
{

 static EditLine *VAR_14 = ((void*)0);
 static History *VAR_15 = ((void*)0);
 HistEvent VAR_16;
 static char VAR_17[80];
 int VAR_18 = 0;
 int VAR_19;
 const char *VAR_20 = ((void*)0);
 char *VAR_21;

 do {
  if (VAR_12) {
   if (!VAR_14) {
    VAR_14 = FUNC_1("cdcontrol", VAR_10, VAR_11,
        VAR_9);
    VAR_15 = FUNC_7();
    FUNC_6(VAR_15, &VAR_16, VAR_6, 100);
    FUNC_2(VAR_14, VAR_2, FUNC_6, VAR_15);
    FUNC_2(VAR_14, VAR_1, "emacs");
    FUNC_2(VAR_14, VAR_3, VAR_8);
    FUNC_2(VAR_14, VAR_4, 1);
    FUNC_3(VAR_14, ((void*)0));
   }
   if ((VAR_20 = FUNC_0(VAR_14, &VAR_18)) == ((void*)0) || VAR_18 == 0) {
    *VAR_13 = VAR_0;
    FUNC_5 (VAR_9, "\r\n");
    return (0);
   }

   VAR_19 = (VAR_18 > 80) ? 80 : VAR_18;
   FUNC_8(VAR_17, VAR_20, VAR_19);
   VAR_17[VAR_19] = 0;
   FUNC_6(VAR_15, &VAR_16, VAR_5, VAR_20);


  } else {
   if (! FUNC_4 (VAR_17, sizeof (VAR_17), VAR_10)) {
    *VAR_13 = VAR_0;
    FUNC_5 (VAR_9, "\r\n");
    return (0);
   }
  }
  VAR_21 = FUNC_9 (VAR_17, VAR_13);
 } while (! VAR_21);
 return (VAR_21);
}
