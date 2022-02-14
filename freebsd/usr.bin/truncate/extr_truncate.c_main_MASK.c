
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;
typedef int mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (char*,int,int) ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (char*,struct stat*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;

int
FUNC_11(int VAR_13, char **VAR_14)
{
 struct stat VAR_15;
 mode_t VAR_16;
 off_t VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 uint64_t VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 char *VAR_32, *VAR_33;

 VAR_25 = -1;
 VAR_18 = VAR_20 = VAR_19 = 0;
 VAR_27 = VAR_28 = VAR_29 = VAR_30 = VAR_31 = 0;
 VAR_24 = 0;
 VAR_33 = ((void*)0);
 while ((VAR_23 = FUNC_6(VAR_13, VAR_14, "cr:s:")) != -1)
  switch (VAR_23) {
  case 'c':
   VAR_27 = 1;
   break;
  case 'r':
   VAR_30 = 1;
   VAR_33 = VAR_11;
   break;
  case 's':
   if (*VAR_11 == '+' || *VAR_11 == '-') {
    VAR_28 = 1;
   } else if (*VAR_11 == '%' || *VAR_11 == '/') {
    VAR_29 = 1;
   }
   if (FUNC_3(VAR_28 || VAR_29 ?
       VAR_11 + 1 : VAR_11,
       &VAR_22) == -1 || (off_t)VAR_22 < 0)
    FUNC_2(VAR_2,
        "invalid size argument `%s'", VAR_11);

   VAR_19 = (*VAR_11 == '-' || *VAR_11 == '/') ?
    -(off_t)VAR_22 : (off_t)VAR_22;
   VAR_31 = 1;
   break;
  default:
   FUNC_9();

  }

 VAR_14 += VAR_12;
 VAR_13 -= VAR_12;






 if (VAR_30 + VAR_31 != 1 || VAR_13 < 1)
  FUNC_9();
 if (VAR_30) {
  if (FUNC_8(VAR_33, &VAR_15) == -1)
   FUNC_1(VAR_2, "%s", VAR_33);
  VAR_20 = VAR_15.st_size;
 } else if (VAR_28 || VAR_29)
  VAR_18 = VAR_19;
 else
  VAR_20 = VAR_19;

 if (VAR_27)
  VAR_26 = VAR_5;
 else
  VAR_26 = VAR_5 | VAR_4;
 VAR_16 = VAR_8 | VAR_9 | VAR_6 | VAR_7;

 while ((VAR_32 = *VAR_14++) != ((void*)0)) {
  if (VAR_25 != -1)
   FUNC_0(VAR_25);
  if ((VAR_25 = FUNC_7(VAR_32, VAR_26, VAR_16)) == -1) {
   if (VAR_10 != VAR_1) {
    FUNC_10("%s", VAR_32);
    VAR_24++;
   }
   continue;
  }
  if (VAR_28) {
   if (FUNC_4(VAR_25, &VAR_15) == -1) {
    FUNC_10("%s", VAR_32);
    VAR_24++;
    continue;
   }
   VAR_17 = VAR_15.st_size + VAR_18;
   if (VAR_17 < (VAR_15.st_size + VAR_18)) {
    VAR_10 = VAR_0;
    FUNC_10("%s", VAR_32);
    VAR_24++;
    continue;
   }
   VAR_20 = VAR_17;
  }
  if (VAR_29) {
   if (FUNC_4(VAR_25, &VAR_15) == -1) {
    FUNC_10("%s", VAR_32);
    VAR_24++;
    continue;
   }
   VAR_19 = VAR_18;
   if (VAR_19 < 0)
    VAR_19 = -VAR_19;
   if (VAR_15.st_size % VAR_19) {
    VAR_21 = VAR_15.st_size / VAR_19;
    if (VAR_21 != VAR_19 && VAR_18 < 0)
     VAR_21--;
    else if (VAR_18 > 0)
     VAR_21++;
    VAR_20 = (VAR_21 < 0 ? 0 : VAR_21) * VAR_19;
   } else
    VAR_20 = VAR_15.st_size;
  }
  if (VAR_20 < 0)
   VAR_20 = 0;

  if (FUNC_5(VAR_25, VAR_20) == -1) {
   FUNC_10("%s", VAR_32);
   VAR_24++;
   continue;
  }
 }
 if (VAR_25 != -1)
  FUNC_0(VAR_25);

 return VAR_24 ? VAR_2 : VAR_3;
}
