
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {char* ifnam; } ;
typedef int data ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char**,int ,int) ;
 char** VAR_5 ;
 char** FUNC_3 (char**,int) ;
 int FUNC_4 (char*,int,char*,int,...) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char const*,char*,int*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static char **
FUNC_11(struct ctx *VAR_7)
{
 char VAR_8[64], VAR_9[128];
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 char **VAR_15 = ((void*)0);
 size_t VAR_16;
 const char **VAR_17, *VAR_18;




 for (VAR_11 = 0; ; VAR_11++) {

  FUNC_4(VAR_8, 64, VAR_3, VAR_11);
  VAR_16 = 127;
  VAR_10 = FUNC_10(VAR_8, VAR_9, &VAR_16, ((void*)0), 0);
  VAR_9[VAR_16] = '\0';




  if (VAR_10 < 0 || FUNC_7(VAR_9, "uhso") != 0)
   return ((void*)0);


  FUNC_4(VAR_8, 64, VAR_2, VAR_11);
  VAR_16 = 127;
  VAR_10 = FUNC_10(VAR_8, VAR_9, &VAR_16, ((void*)0), 0);
  VAR_9[VAR_16] = '\0';




  if (VAR_10 == 0 && FUNC_7(VAR_9, VAR_7->ifnam) == 0)
   break;
 }


 FUNC_4(VAR_8, 64, VAR_0, VAR_11);
 VAR_16 = 127;
 VAR_10 = FUNC_10(VAR_8, VAR_9, &VAR_16, ((void*)0), 0);
 VAR_9[VAR_16] = '\0';




 if (VAR_10 != 0)
  return (((void*)0));

 VAR_18 = FUNC_9(VAR_9, "port=");
 if (VAR_18 != ((void*)0)) {
  VAR_10 = FUNC_6(VAR_18, " port=%d", &VAR_12);
  if (VAR_10 != 1) {



   return (((void*)0));
  }
 } else {



   return (((void*)0));
 }
 for (VAR_11 = 0; ; VAR_11++) {
  FUNC_4(VAR_8, 64, VAR_0, VAR_11);
  VAR_16 = 127;
  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  VAR_10 = FUNC_10(VAR_8, VAR_9, &VAR_16, ((void*)0), 0);
  if (VAR_10 != 0)
   break;
  VAR_9[VAR_16] = '\0';
  VAR_18 = FUNC_9(VAR_9, "port=");
  if (VAR_18 == ((void*)0))
   continue;
  FUNC_6(VAR_18, " port=%d", &VAR_13);
  if (VAR_12 != VAR_13)
   continue;


  for (VAR_17 = VAR_5; *VAR_17 != ((void*)0); VAR_17++) {
   FUNC_4(VAR_8, 64, VAR_1, VAR_11, *VAR_17);
   VAR_16 = 127;
   FUNC_2(&VAR_9, 0, sizeof(VAR_9));
   VAR_10 = FUNC_10(VAR_8, VAR_9, &VAR_16, ((void*)0), 0);
   VAR_9[VAR_16] = '\0';




   if (VAR_10 == 0) {
    VAR_15 = FUNC_3(VAR_15, (VAR_14 + 1) * sizeof(char *));
    VAR_15[VAR_14] = FUNC_1(FUNC_8(VAR_9) + FUNC_8(VAR_4));
        FUNC_5(VAR_15[VAR_14], VAR_4, VAR_9);
        VAR_14++;
   }
  }
 }
 VAR_15 = FUNC_3(VAR_15, (VAR_14 + 1) * sizeof(char *));
 VAR_15[VAR_14] = ((void*)0);
 return (VAR_15);
}
