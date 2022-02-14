
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int * VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 () ;
 int VAR_12 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (int *) ;

int
FUNC_15(int VAR_14, char *VAR_15[])
{
 int VAR_16 = 0;
 int VAR_17;
 int VAR_18 = VAR_0;

 FILE *VAR_19;

 VAR_12=FUNC_4(VAR_15[0]);

 VAR_9 = 0;
 while ( 1 ) {
  VAR_16 = 0;

  VAR_17 = FUNC_8(VAR_14, VAR_15, "b:B:c:dhkr:vw:x:");
  if (VAR_17 == -1)
   break;

  switch (VAR_17) {
  case 'b':
  case 'c':
  case 'r':
  case 'x':
   VAR_16 = FUNC_9(VAR_17,VAR_8);
   break;
  case 'w':
   if (VAR_8 != ((void*)0) && *VAR_8 == '-') {

    VAR_10--;
    VAR_8 = ((void*)0);
   }
   VAR_16 = FUNC_9(VAR_17,VAR_8);
   break;
  case 'd':
   VAR_5 = 0;
   break;
  case 'k':
   VAR_6 = 1;
   break;
  case 'B':
   VAR_16 = FUNC_10(VAR_17,VAR_8);
   break;
  case 'v':
   VAR_13++;
   break;
  case 'h':
   FUNC_13(VAR_3);
   break;
  default:
   VAR_16 = 1;
   break;
  }
  if (VAR_16 != 0 ){
   FUNC_1("invalid option: -%c", VAR_11);
   goto out;
  }
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_1("no board specified");
  goto out;
 }

 if (VAR_10 == VAR_14) {
  FUNC_1("no output file specified");
  goto out;
 }

 VAR_7 = VAR_15[VAR_10++];

 if (VAR_10 < VAR_14) {
  FUNC_1("invalid option: %s", VAR_15[VAR_10]);
  goto out;
 }

 VAR_18 = FUNC_11();
 if (VAR_18 == VAR_0)
  goto out;

 if (VAR_18 == VAR_1) {
  if (VAR_5)
   VAR_18 = VAR_0;

  if (VAR_6 == 0) {
   FUNC_3("generation of invalid images \"%s\" disabled", VAR_7);
   goto out;
  }

  FUNC_3("generating invalid image: \"%s\"", VAR_7);
 }

 VAR_19 = FUNC_7(VAR_7, "w");
 if (VAR_19 == ((void*)0)) {
  FUNC_2("could not open \"%s\" for writing", VAR_7);
  VAR_18 = VAR_0;
  goto out;
 }

 if (FUNC_14(VAR_19) != 0) {
  VAR_18 = VAR_0;
  goto out_flush;
 }

 FUNC_0(1,"Image file %s completed.", VAR_7);

out_flush:
 FUNC_6(VAR_19);
 FUNC_5(VAR_19);
 if (VAR_18 == VAR_0) {
  FUNC_12(VAR_7);
 }
out:
 if (VAR_18 == VAR_0)
  return VAR_2;

 return VAR_3;
}
