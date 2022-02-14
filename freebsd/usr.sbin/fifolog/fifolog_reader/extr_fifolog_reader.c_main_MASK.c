
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifolog_reader {int dummy; } ;
typedef int off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,char*,char* const) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int) ;
 struct fifolog_reader* FUNC_5 (char* const) ;
 int FUNC_6 (struct fifolog_reader*,int ,int ,int *,int) ;
 int FUNC_7 (struct fifolog_reader*,int) ;
 int * VAR_4 ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,char*,char*,...) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int,char* const*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int,int *,char*,int) ;
 int VAR_12 ;
 int * VAR_13 ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (void*,int *,int ) ;
 int FUNC_16 (int*) ;

int
FUNC_17(int VAR_14, char * const *VAR_15)
{
 int VAR_16, VAR_17;
 off_t VAR_18;
 struct fifolog_reader *VAR_19;

 FUNC_16(&VAR_6);
 VAR_9 = "-";
 while ((VAR_16 = FUNC_11(VAR_14, VAR_15, "b:B:e:E:o:R:tT:")) != -1) {
  switch (VAR_16) {
  case 'b':
   VAR_5 = FUNC_15(VAR_10, ((void*)0), 0);
   break;
  case 'B':
   VAR_5 = FUNC_10(VAR_10);
   if (VAR_5 == -1)
    FUNC_3(1, "Didn't understand \"%s\"", VAR_10);
   break;
  case 'e':
   VAR_6 = FUNC_15(VAR_10, ((void*)0), 0);
   break;
  case 'E':
   VAR_6 = FUNC_10(VAR_10);
   if (VAR_6 == -1)
    FUNC_3(1, "Didn't understand \"%s\"", VAR_10);
   break;
  case 'o':
   VAR_9 = VAR_10;
   break;
  case 'R':
   VAR_7 = VAR_10;
   break;
  case 't':
   VAR_8 = "%Y%m%d%H%M%S";
   break;
  case 'T':
   VAR_8 = VAR_10;
   break;
  default:
   FUNC_0();
  }
 }
 VAR_14 -= VAR_11;
 VAR_15 += VAR_11;

 if (VAR_7 != ((void*)0)) {
  VAR_17 = FUNC_12(&VAR_1, VAR_7, VAR_2);
  if (VAR_17 != 0) {
   char VAR_20[VAR_0];
   (void)FUNC_13(VAR_17, &VAR_1, VAR_20, sizeof VAR_20);
   FUNC_9(VAR_12, "-R argument: %s\n", VAR_20);
   FUNC_4 (1);
  }
 }

 if (VAR_15[0] == ((void*)0))
  FUNC_0();

 FUNC_9(VAR_12, "From\t%s %d", (intmax_t)VAR_5, FUNC_1(&VAR_5));
 FUNC_9(VAR_12, "To\t%s %d", (intmax_t)VAR_6, FUNC_1(&VAR_6));
 if (VAR_5 >= VAR_6)
  FUNC_3(1, "Begin time not before End time");

 VAR_19 = FUNC_5(VAR_15[0]);

 if (!FUNC_14(VAR_9, "-"))
  VAR_4 = VAR_13;
 else {
  VAR_4 = FUNC_8(VAR_9, "w");
  if (VAR_4 == ((void*)0))
   FUNC_2(1, "Cannot open: %s", VAR_15[1]);
 }

 VAR_18 = FUNC_7(VAR_19, VAR_5);
 FUNC_6(VAR_19, VAR_18, VAR_3, ((void*)0), VAR_6);
 return (0);
}
