
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int,int*,int,int*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int VAR_4 ;
 char* FUNC_5 (unsigned int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * FUNC_8 (int,char**,char const**,char*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (char*,int,int*,int*,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_10 (char*,char const*,int) ;
 scalar_t__ FUNC_11 (int,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 int FUNC_12 (int) ;

int
FUNC_13(int VAR_14, char *VAR_15[])
{
 char *VAR_16;
 int VAR_17;
 int VAR_18 = -1;
 char *VAR_19;
 int VAR_20 = VAR_2 + 1;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 char *VAR_25;
 char *VAR_26;
 char *VAR_27;
 const char *VAR_28;
 FILE *VAR_29;
 int VAR_30 = 0;
 int VAR_31 = 0;
 int VAR_32 = 0;
 int VAR_33 = 0;

 if ((VAR_25 = FUNC_5((unsigned)(VAR_10+VAR_8+1)*sizeof(char))) == ((void*)0)) {
  FUNC_7();
  return(1);
 }




 if ((VAR_26 = FUNC_5((unsigned)(VAR_0 + VAR_8)*sizeof(char))) == ((void*)0)) {
  FUNC_2(VAR_25);
  FUNC_7();
  return(1);
 }
 VAR_27 = VAR_26 + VAR_8;
 if (VAR_8) {
  (void)FUNC_6(VAR_25, (int)' ', VAR_8);
  (void)FUNC_6(VAR_26, (int)' ', VAR_8);
 }




 while ((VAR_29 = FUNC_8(VAR_14, VAR_15, &VAR_28, VAR_27, 0)) != ((void*)0)) {
  if (VAR_9) {
   if (FUNC_4(VAR_29, VAR_9, VAR_4))
    continue;
   VAR_24 = VAR_9;
  } else
   VAR_24 = 1;
  VAR_23 = 0;




  for(;;) {
   FUNC_12(VAR_24);




   for (VAR_22 = 0; VAR_22 < VAR_4; ++VAR_22) {
    VAR_16 = VAR_25 + VAR_8;
    VAR_19 = VAR_16;
    VAR_21 = 0;



    for(;;) {
     if (VAR_6) {



      FUNC_0(VAR_16, VAR_6, ++VAR_23);
      VAR_16 += VAR_6;
      *VAR_16++ = VAR_5;
     }



     if ((VAR_18 = FUNC_3(VAR_29,VAR_16,VAR_2,&VAR_31,1,
       &VAR_33)) < 0)
      break;
     VAR_16 += VAR_18;
     VAR_19 = VAR_16;




     if (++VAR_21 >= VAR_1)
      break;




     if (VAR_12)
      *VAR_16++ = VAR_11;
     else if ((VAR_17 = VAR_20 - VAR_18) > 0) {
      (void)FUNC_6(VAR_16,(int)' ',VAR_17);
      VAR_16 += VAR_17;
     }
    }




    if ((VAR_21 = VAR_19 - VAR_25) <= VAR_8)
     break;
    if (!VAR_22 && !VAR_7 &&
     FUNC_10(VAR_26, VAR_28, VAR_24))
     goto err;



    if (FUNC_9(VAR_25, VAR_21, &VAR_30, &VAR_32, 0))
     goto err;
   }




   if (VAR_22 && FUNC_11(VAR_4-VAR_22, 0))
    goto err;




   if (VAR_18 < 0)
    break;
   ++VAR_24;
  }
  if (VAR_29 != VAR_13)
   (void)FUNC_1(VAR_29);
 }
 if (VAR_3 < VAR_14)
  goto err;
 FUNC_2(VAR_26);
 FUNC_2(VAR_25);
 return(0);
err:
 FUNC_2(VAR_26);
 FUNC_2(VAR_25);
 return(1);
}
