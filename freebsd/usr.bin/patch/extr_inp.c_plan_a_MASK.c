
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int) ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_4 (char*,...) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (char**) ;
 char** VAR_13 ;
 size_t VAR_14 ;
 char* VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (char*,size_t,int ) ;
 int FUNC_7 (char const*,int) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_11 (char*,size_t) ;
 scalar_t__ VAR_18 ;
 int FUNC_12 (char const*,int ) ;
 int VAR_19 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (size_t*) ;
 int FUNC_16 (char*) ;
 char const* VAR_20 ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 () ;
 int FUNC_19 (char const*,struct stat*) ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static bool
FUNC_20(const char *VAR_22)
{
 int VAR_23, VAR_24;
 char *VAR_25, *VAR_26;
 struct stat VAR_27;
 ptrdiff_t VAR_28;
 size_t VAR_29;
 size_t VAR_30, VAR_31;






 if (VAR_22 == ((void*)0) || *VAR_22 == '\0')
  return 0;

 VAR_24 = FUNC_19(VAR_22, &VAR_27);
 if (VAR_24 && VAR_18) {
  if (VAR_21)
   FUNC_17("(Creating file %s...)\n", VAR_22);






  if (VAR_8)
   return 1;
  FUNC_7(VAR_22, 1);
  FUNC_2(FUNC_3(VAR_22, 0666));
  VAR_24 = FUNC_19(VAR_22, &VAR_27);
 }
 if (VAR_24)
  FUNC_4("can't find %s\n", VAR_22);
 VAR_11 = VAR_27.st_mode;
 if (!FUNC_0(VAR_11))
  FUNC_4("%s is not a normal file--can't patch\n", VAR_22);
 if ((uint64_t)VAR_27.st_size > VAR_5) {
  FUNC_17("block too large to mmap\n");
  return 0;
 }
 VAR_14 = (size_t)VAR_27.st_size;
 if (VAR_19) {
  FUNC_18();
  VAR_19 = 0;
  return 0;
 }
 if ((VAR_23 = FUNC_12(VAR_22, VAR_3)) < 0)
  FUNC_14("can't open file %s", VAR_22);

 if (VAR_14) {
  VAR_15 = FUNC_10(((void*)0), VAR_14, VAR_4, VAR_2, VAR_23, 0);
  if (VAR_15 == VAR_1) {
   FUNC_13("mmap failed");
   VAR_15 = ((void*)0);
   FUNC_2(VAR_23);
   return 0;
  }
 } else {
  VAR_15 = ((void*)0);
 }

 FUNC_2(VAR_23);
 if (VAR_14)
  FUNC_6(VAR_15, VAR_14, VAR_0);


 VAR_31 = VAR_14 / 25;
 if (VAR_31 < 100)
  VAR_31 = 100;

 if (!FUNC_15(&VAR_31))
  return 0;


 VAR_30 = 1;
 VAR_13[VAR_30] = VAR_15;




 for (VAR_26 = VAR_15, VAR_29 = 0; VAR_29 < VAR_14; VAR_26++, VAR_29++) {
  if (*VAR_26 == '\n') {
   if (VAR_30 == VAR_31) {
    if (!FUNC_15(&VAR_31))
     return 0;
   }

   VAR_13[++VAR_30] = VAR_26 + 1;
  }
 }

 if (VAR_14 > 0 && VAR_15[VAR_14 - 1] != '\n') {
  VAR_17 = 1;

  VAR_28 = VAR_26 - VAR_13[VAR_30];
  VAR_25 = FUNC_8(VAR_28 + 1);
  if (VAR_25 == ((void*)0)) {
   FUNC_5(VAR_13);
   VAR_13 = ((void*)0);
   FUNC_11(VAR_15, VAR_14);
   VAR_15 = ((void*)0);
   return 0;
  }

  FUNC_9(VAR_25, VAR_13[VAR_30], VAR_28);
  VAR_25[VAR_28] = '\n';
  VAR_13[VAR_30] = VAR_25;

  VAR_13[++VAR_30] = VAR_10;
 } else
  VAR_17 = 0;

 VAR_16 = VAR_30 - 1;



 if (VAR_20 != ((void*)0)) {
  if (VAR_15 == ((void*)0) || !FUNC_16(VAR_15)) {
   if (VAR_12) {
    if (VAR_21)
     FUNC_17("Warning: this file doesn't appear "
         "to be the %s version--patching anyway.\n",
         VAR_20);
   } else if (VAR_6) {
    FUNC_4("this file doesn't appear to be the "
        "%s version--aborting.\n",
        VAR_20);
   } else {
    FUNC_1("This file doesn't appear to be the "
        "%s version--patch anyway? [n] ",
        VAR_20);
    if (*VAR_7 != 'y')
     FUNC_4("aborted\n");
   }
  } else if (VAR_21)
   FUNC_17("Good.  This file appears to be the %s version.\n",
       VAR_20);
 }
 return 1;
}
