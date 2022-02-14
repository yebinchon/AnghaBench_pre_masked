
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,scalar_t__,int*,int ,int*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int VAR_3 ;
 char* FUNC_5 (unsigned int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 () ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_8 (int,char**,char const**,char*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,int,int*,int*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (char*,char const*,int) ;
 scalar_t__ FUNC_11 (int,int) ;
 int * VAR_9 ;
 int FUNC_12 (int) ;

int
FUNC_13(int VAR_10, char *VAR_11[])
{
 int VAR_12 = -1;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 char *VAR_22;
 char *VAR_23;
 char *VAR_24;
 char *VAR_25;
 char *VAR_26;
 FILE *VAR_27;
 const char *VAR_28;
 int VAR_29;

 if (VAR_5)
  VAR_16 = VAR_5 + 1;
 else
  VAR_16 = 0;
 VAR_13 = VAR_16 + VAR_7;




 if ((VAR_22 = FUNC_5((unsigned)(VAR_1 + VAR_13)*sizeof(char))) == ((void*)0)) {
  FUNC_7();
  return(1);
 }



 if ((VAR_25 = FUNC_5((unsigned)(VAR_0 + VAR_7)*sizeof(char))) == ((void*)0)) {
  FUNC_2(VAR_22);
  FUNC_7();
  return(1);
 }

 VAR_26 = VAR_25 + VAR_7;
 VAR_24 = VAR_22 + VAR_7;
 VAR_23 = VAR_24 + VAR_16;
 if (VAR_16)
  VAR_24[--VAR_16] = VAR_4;
 if (VAR_7) {
  (void)FUNC_6(VAR_22, (int)' ', VAR_7);
  (void)FUNC_6(VAR_25, (int)' ', VAR_7);
 }




 while ((VAR_27 = FUNC_8(VAR_10, VAR_11, &VAR_28, VAR_26, 0)) != ((void*)0)) {
  if (VAR_8) {



   if (FUNC_4(VAR_27, VAR_8, VAR_3))
    continue;
   VAR_18 = VAR_8;
  } else
   VAR_18 = 1;
  VAR_17 = 0;




  for(;;) {
   VAR_15 = 0;
   VAR_14 = 0;
   VAR_20 = 0;
   VAR_19 = 0;
   VAR_21 = 0;

   FUNC_12(VAR_18);




   while (VAR_15 < VAR_3) {



    if ((VAR_12 = FUNC_3(VAR_27,VAR_23,VAR_1,&VAR_21,0,&VAR_29)) < 0)
     break;
    if (!VAR_15 && !VAR_6 &&
     FUNC_10(VAR_25, VAR_28, VAR_18))
     goto err;




    if (!VAR_14) {
     if (VAR_16)
      FUNC_0(VAR_24, VAR_16, ++VAR_17);
     if (FUNC_9(VAR_22,VAR_12+VAR_13, &VAR_19, &VAR_20, VAR_29))
      goto err;
    } else if (FUNC_9(VAR_23, VAR_12, &VAR_19, &VAR_20, VAR_29))
     goto err;




    if (VAR_29) {
     VAR_14 = 1;
     continue;
    }




    ++VAR_15;
    VAR_14 = 0;
    VAR_20 = 0;
    VAR_19 = 0;
   }




   if (VAR_15 && FUNC_11(VAR_3-VAR_15-VAR_14, VAR_14))
    goto err;




   if (VAR_12 < 0)
    break;
   ++VAR_18;
  }
  if (VAR_27 != VAR_9)
   (void)FUNC_1(VAR_27);
 }
 if (VAR_2 < VAR_10)
  goto err;
 FUNC_2(VAR_25);
 FUNC_2(VAR_22);
 return(0);
err:
 FUNC_2(VAR_25);
 FUNC_2(VAR_22);
 return(1);
}
