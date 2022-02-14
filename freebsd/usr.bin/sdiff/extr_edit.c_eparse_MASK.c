
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char const*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*,int,int,int *) ;
 int FUNC_10 (char*) ;
 size_t FUNC_11 (char*,int,size_t,int ) ;
 scalar_t__ FUNC_12 (char const) ;
 int FUNC_13 (char*) ;
 int VAR_1 ;
 size_t FUNC_14 (char*) ;
 char const* VAR_2 ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int,char*,size_t) ;

int
FUNC_19(const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
 FILE *VAR_6;
 size_t VAR_7;
 int VAR_8;
 char *VAR_9;
 char VAR_10[VAR_0], *VAR_11;


 while (FUNC_12(*VAR_3))
  ++VAR_3;

 VAR_11 = ((void*)0);
 switch (*VAR_3) {
 case '\0':

  break;

 case 'b':

  if (VAR_4 == ((void*)0))
   goto RIGHT;
  if (VAR_5 == ((void*)0))
   goto LEFT;


  if (FUNC_0(&VAR_11, "%s\n%s\n", VAR_4, VAR_5) == -1)
   FUNC_4(2, "could not allocate memory");
  break;

 case 'l':
LEFT:

  if (VAR_4 == ((void*)0))
   break;

  if (FUNC_0(&VAR_11, "%s\n", VAR_4) == -1)
   FUNC_4(2, "could not allocate memory");

  break;

 case 'r':
RIGHT:

  if (VAR_5 == ((void*)0))
   break;

  if (FUNC_0(&VAR_11, "%s\n", VAR_5) == -1)
   FUNC_4(2, "could not allocate memory");

  break;

 default:
  return (-1);
 }


 if (FUNC_0(&VAR_9, "%s/sdiff.XXXXXXXXXX", VAR_2) == -1)
  FUNC_4(2, "asprintf");
 if ((VAR_8 = FUNC_13(VAR_9)) == -1)
  FUNC_4(2, "mkstemp");
 if (VAR_11 != ((void*)0)) {
  size_t VAR_12;
  ssize_t VAR_13;

  VAR_12 = FUNC_14(VAR_11);
  if ((VAR_13 = FUNC_18(VAR_8, VAR_11, VAR_12)) == -1 ||
      (size_t)VAR_13 != VAR_12) {
   FUNC_16("error writing to temp file");
   FUNC_1(VAR_9);
  }
 }
 FUNC_2(VAR_8);


 FUNC_10(VAR_11);


 if (FUNC_3(VAR_9) == -1) {
  FUNC_16("error editing %s", VAR_9);
  FUNC_1(VAR_9);
 }


 if (!(VAR_6 = FUNC_8(VAR_9, "r"))) {
  FUNC_16("could not open edited file: %s", VAR_9);
  FUNC_1(VAR_9);
 }


 for (VAR_7 = sizeof(VAR_10); VAR_7 == sizeof(VAR_10);) {
  size_t VAR_14;

  VAR_7 = FUNC_9(VAR_10, sizeof(*VAR_10), sizeof(VAR_10), VAR_6);

  if (VAR_7 != sizeof(VAR_10) &&
      (FUNC_7(VAR_6) || !FUNC_6(VAR_6))) {
   FUNC_17("error reading edited file: %s", VAR_9);
   FUNC_1(VAR_9);
  }





  if (!VAR_7)
   break;


  VAR_14 = FUNC_11(VAR_10, sizeof(*VAR_10), VAR_7, VAR_1);
  if (VAR_14 != VAR_7) {
   FUNC_17("error writing to output file");
   FUNC_1(VAR_9);
  }
 }


 if (FUNC_15(VAR_9))
  FUNC_16("could not delete: %s", VAR_9);
 FUNC_5(VAR_6);

 FUNC_10(VAR_9);

 return (0);
}
