
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* VAR_6 ;
 int FUNC_0 (char*,int *) ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (int *,size_t*) ;
 int * FUNC_6 (char*,size_t,int *) ;
 int * FUNC_7 (char const*,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,long,int ) ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 void* FUNC_10 (size_t) ;
 int FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (char const*,int,...) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (char*) ;
 int * VAR_13 ;
 int FUNC_15 (char*,int *) ;
 size_t FUNC_16 (char*) ;
 char** VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int FUNC_17 (char const*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_18 (int ,char*,size_t) ;

__attribute__((used)) static void
FUNC_19(const char *VAR_20)
{
 FILE *VAR_21;
 size_t VAR_22 = 0, VAR_23, VAR_24, VAR_25 = 1;
 char *VAR_26 = ((void*)0), *VAR_27;
 bool VAR_28 = (VAR_13 == ((void*)0));

 VAR_18 = 0;
 if ((VAR_21 = FUNC_7(VAR_20, "r")) == ((void*)0))
  FUNC_13("can't open file %s", VAR_20);
 FUNC_17(VAR_6);
 if ((VAR_16 = FUNC_12(VAR_6, VAR_2 | VAR_1 | VAR_4, 0666)) < 0)
  FUNC_13("can't open file %s", VAR_6);
 while ((VAR_27 = FUNC_5(VAR_21, &VAR_24)) != ((void*)0)) {
  if (VAR_27[VAR_24 - 1] == '\n')
   VAR_27[VAR_24 - 1] = '\0';
  else {

   if ((VAR_26 = FUNC_10(VAR_24 + 1)) == ((void*)0))
    FUNC_2("out of memory\n");
   FUNC_11(VAR_26, VAR_27, VAR_24);
   VAR_26[VAR_24] = '\0';
   VAR_27 = VAR_26;

   VAR_11 = 1;
   VAR_24++;
  }
  if (VAR_13 != ((void*)0) && !VAR_28 && FUNC_14(VAR_27))
   VAR_28 = 1;
  if (VAR_24 > VAR_25)
   VAR_25 = VAR_24;
 }
 FUNC_8(VAR_26);
 if (FUNC_4(VAR_21))
  FUNC_13("can't read file %s", VAR_20);

 if (VAR_13 != ((void*)0)) {
  if (!VAR_28) {
   if (VAR_9) {
    if (VAR_19)
     FUNC_15("Warning: this file doesn't appear "
         "to be the %s version--patching anyway.\n",
         VAR_13);
   } else if (VAR_7) {
    FUNC_2("this file doesn't appear to be the "
        "%s version--aborting.\n",
        VAR_13);
   } else {
    FUNC_0("This file doesn't appear to be the %s "
        "version--patch anyway? [n] ",
        VAR_13);
    if (*VAR_8 != 'y')
     FUNC_2("aborted\n");
   }
  } else if (VAR_19)
   FUNC_15("Good.  This file appears to be the %s version.\n",
       VAR_13);
 }
 FUNC_9(VAR_21, 0L, VAR_5);
 VAR_17 = VAR_25;
 VAR_15 = VAR_25 > VAR_0 ? VAR_25 : VAR_0;
 VAR_12 = VAR_15 / VAR_25;
 VAR_14[0] = FUNC_10(VAR_15 + 1);
 if (VAR_14[0] == ((void*)0))
  FUNC_2("out of memory\n");
 VAR_14[1] = FUNC_10(VAR_15 + 1);
 if (VAR_14[1] == ((void*)0))
  FUNC_2("out of memory\n");
 for (VAR_22 = 1;; VAR_22++) {
  VAR_27 = VAR_14[0] + VAR_25 * (VAR_22 % VAR_12);
  if (VAR_22 % VAR_12 == 0)
   if (FUNC_18(VAR_16, VAR_14[0], VAR_15) !=
       (ssize_t) VAR_15)
    FUNC_13("can't write temp file");
  if (FUNC_6(VAR_27, VAR_25 + 1, VAR_21) == ((void*)0)) {
   VAR_10 = VAR_22 - 1;
   if (VAR_22 % VAR_12 != 0)
    if (FUNC_18(VAR_16, VAR_14[0], VAR_15) !=
        (ssize_t) VAR_15)
     FUNC_13("can't write temp file");
   break;
  }
  VAR_23 = FUNC_16(VAR_27);

  if (VAR_23 == 0 || VAR_27[VAR_23 - 1] != '\n')
   VAR_27[VAR_23] = '\n';
 }
 FUNC_3(VAR_21);
 FUNC_1(VAR_16);
 if ((VAR_16 = FUNC_12(VAR_6, VAR_3)) < 0)
  FUNC_13("can't reopen file %s", VAR_6);
}
