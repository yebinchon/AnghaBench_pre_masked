
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int,int*,int,int*) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 int VAR_5 ;
 char* FUNC_6 (unsigned int) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_9 (int,char**,char const**,char*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (char*,int,int*,int*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (char*,char const*,int) ;
 scalar_t__ FUNC_12 (int,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 int FUNC_13 (int) ;

int
FUNC_14(int VAR_15, char *VAR_16[])
{
 char *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 char *VAR_21;
 int VAR_22;
 FILE **VAR_23 = ((void*)0);
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 char *VAR_29 = ((void*)0);
 char *VAR_30 = ((void*)0);
 char *VAR_31;
 const char *VAR_32;
 int VAR_33 = 0;
 int VAR_34 = 0;
 int VAR_35 = 0;
 int VAR_36 = 0;
 int VAR_37 = 1;




 if ((VAR_23 = (FILE **)FUNC_6((unsigned)VAR_1*sizeof(FILE *))) == ((void*)0)) {
  FUNC_8();
  goto out;
 }




 if ((VAR_30 = FUNC_6((unsigned)(VAR_0 + VAR_9)*sizeof(char))) == ((void*)0)) {
  FUNC_8();
  goto out;
 }
 VAR_31 = VAR_30 + VAR_9;
 VAR_18 = 0;
 while (VAR_18 < VAR_1) {
  if ((VAR_23[VAR_18] = FUNC_9(VAR_15, VAR_16, &VAR_32, VAR_31, 1)) == ((void*)0))
   break;
  if (VAR_10 && (FUNC_5(VAR_23[VAR_18], VAR_10, VAR_5)))
   VAR_23[VAR_18] = ((void*)0);
  ++VAR_18;
 }




 if (!VAR_18)
  goto out;




 VAR_1 = VAR_18;
 if (VAR_7) {
  VAR_2 = (VAR_11 - VAR_1 - VAR_7)/VAR_1;
  VAR_11 = ((VAR_2 + 1) * VAR_1) - VAR_7 - 2;
 } else {
  VAR_2 = (VAR_11 + 1 - VAR_1)/VAR_1;
  VAR_11 = ((VAR_2 + 1) * VAR_1) - 1;
 }
 if (VAR_2 < 1) {
  (void)FUNC_2(VAR_4,
    "pr: page width too small for %d columns\n", VAR_1);
  goto out;
 }
 VAR_24 = VAR_1;
 VAR_26 = VAR_2 + 1;




 if ((VAR_29 = FUNC_6((unsigned)(VAR_11+VAR_9+1)*sizeof(char))) == ((void*)0)) {
  FUNC_8();
  goto out;
 }
 if (VAR_9) {
  (void)FUNC_7(VAR_29, (int)' ', VAR_9);
  (void)FUNC_7(VAR_30, (int)' ', VAR_9);
 }
 if (VAR_10)
  VAR_27 = VAR_10;
 else
  VAR_27 = 1;
 VAR_25 = 0;




 while (VAR_24 > 0) {
  FUNC_13(VAR_27);




  for (VAR_22 = 0; VAR_22 < VAR_5; ++VAR_22) {
   VAR_17 = VAR_29 + VAR_9;
   VAR_21 = VAR_17;
   if (VAR_7) {



    FUNC_0(VAR_17, VAR_7, ++VAR_25);
    VAR_17 += VAR_7;
    *VAR_17++ = VAR_6;
   }
   VAR_18 = 0;
   VAR_28 = 0;




   for (VAR_18 = 0; VAR_18 < VAR_1; ++VAR_18) {
    if (VAR_23[VAR_18] == ((void*)0)) {



     VAR_20 = 0;
    } else if ((VAR_20 = FUNC_4(VAR_23[VAR_18], VAR_17, VAR_2,
       &VAR_34, 1, &VAR_36)) < 0) {



     if (VAR_23[VAR_18] != VAR_14)
      (void)FUNC_1(VAR_23[VAR_18]);
     VAR_23[VAR_18] = ((void*)0);
     --VAR_24;
     VAR_20 = 0;
    } else {



     VAR_17 += VAR_20;
     VAR_21 = VAR_17;
     VAR_28++;
    }




    if (VAR_28 >= VAR_24)
     break;




    if (VAR_13) {
     *VAR_17++ = VAR_12;
    } else if ((VAR_19 = VAR_26 - VAR_20) > 0) {
     (void)FUNC_7(VAR_17, (int)' ', VAR_19);
     VAR_17 += VAR_19;
    }
   }




   if ((VAR_18 = VAR_21 - VAR_29) <= VAR_9)
    break;

   if (!VAR_22 && !VAR_8 && FUNC_11(VAR_30, VAR_32, VAR_27))
    goto out;




   if (FUNC_10(VAR_29, VAR_18, &VAR_33, &VAR_35, 0))
    goto out;




   if (VAR_24 <= 0) {
    ++VAR_22;
    break;
   }
  }




  if (VAR_22 && FUNC_12(VAR_5-VAR_22, 0))
   goto out;
  ++VAR_27;
 }
 if (VAR_3 < VAR_15)
  goto out;
 VAR_37 = 0;
out:
 FUNC_3(VAR_29);
 FUNC_3(VAR_30);
 FUNC_3(VAR_23);
 return(VAR_37);
}
