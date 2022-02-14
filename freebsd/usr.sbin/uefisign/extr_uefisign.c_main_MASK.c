
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int X509 ;
typedef int FILE ;
typedef int EVP_PKEY ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int * FUNC_4 (char const*,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char const*,char const*,int,int,int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,char**,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int *,int *,int) ;
 int VAR_6 ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__) ;

int
FUNC_15(int VAR_7, char **VAR_8)
{
 int VAR_9, VAR_10;
 bool VAR_11 = 0, VAR_12 = 0;
 const char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 FILE *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 X509 *VAR_19 = ((void*)0);
 EVP_PKEY *VAR_20 = ((void*)0);
 pid_t VAR_21;
 int VAR_22[2];

 while ((VAR_9 = FUNC_10(VAR_7, VAR_8, "Vc:k:o:v")) != -1) {
  switch (VAR_9) {
  case 'V':
   VAR_11 = 1;
   break;
  case 'c':
   VAR_13 = FUNC_5(VAR_4);
   break;
  case 'k':
   VAR_14 = FUNC_5(VAR_4);
   break;
  case 'o':
   VAR_15 = FUNC_5(VAR_4);
   break;
  case 'v':
   VAR_12 = 1;
   break;
  default:
   FUNC_13();
  }
 }

 VAR_7 -= VAR_5;
 VAR_8 += VAR_5;
 if (VAR_7 != 1)
  FUNC_13();

 if (VAR_11) {
  if (VAR_13 != ((void*)0))
   FUNC_8(1, "-V and -c are mutually exclusive");
  if (VAR_14 != ((void*)0))
   FUNC_8(1, "-V and -k are mutually exclusive");
  if (VAR_15 != ((void*)0))
   FUNC_8(1, "-V and -o are mutually exclusive");
 } else {
  if (VAR_13 == ((void*)0))
   FUNC_8(1, "-c option is mandatory");
  if (VAR_14 == ((void*)0))
   FUNC_8(1, "-k option is mandatory");
  if (VAR_15 == ((void*)0))
   FUNC_8(1, "-o option is mandatory");
 }

 VAR_16 = VAR_8[0];

 FUNC_1(VAR_2 |
     VAR_3 |
     VAR_0 | VAR_1, ((void*)0));

 VAR_10 = FUNC_11(VAR_22);
 if (VAR_10 != 0)
  FUNC_7(1, "pipe");

 VAR_21 = FUNC_9();
 if (VAR_21 < 0)
  FUNC_7(1, "fork");

 if (VAR_21 == 0)
  return (FUNC_6(VAR_16, VAR_15, VAR_22[1], VAR_11, VAR_12));

 if (!VAR_11) {
  VAR_17 = FUNC_4(VAR_13, "r");
  VAR_19 = FUNC_3(VAR_17, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_19 == ((void*)0)) {
   FUNC_0(VAR_6);
   FUNC_8(1, "failed to load certificate from %s", VAR_13);
  }

  VAR_18 = FUNC_4(VAR_14, "r");
  VAR_20 = FUNC_2(VAR_18, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_20 == ((void*)0)) {
   FUNC_0(VAR_6);
   FUNC_8(1, "failed to load private key from %s", VAR_14);
  }

  FUNC_12(VAR_19, VAR_20, VAR_22[0]);
 }

 return (FUNC_14(VAR_21));
}
