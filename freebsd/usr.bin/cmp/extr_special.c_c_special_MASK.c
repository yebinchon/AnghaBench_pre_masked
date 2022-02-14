
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char const*,char const*,int,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (char*,long long,int,int) ;
 scalar_t__ VAR_5 ;

void
FUNC_12(int VAR_6, const char *VAR_7, off_t VAR_8,
    int VAR_9, const char *VAR_10, off_t VAR_11)
{
 int VAR_12, VAR_13;
 off_t VAR_14, VAR_15;
 FILE *VAR_16, *VAR_17;
 int VAR_18;

 if (FUNC_1(VAR_6, VAR_0) < 0)
  FUNC_4(VAR_3, "caph_limit_stream(%s)", VAR_7);
 if (FUNC_1(VAR_9, VAR_0) < 0)
  FUNC_4(VAR_3, "caph_limit_stream(%s)", VAR_10);
 if (FUNC_0() < 0)
  FUNC_4(VAR_3, "unable to enter capability mode");

 if ((VAR_16 = FUNC_7(VAR_6, "r")) == ((void*)0))
  FUNC_4(VAR_3, "%s", VAR_7);
 if ((VAR_17 = FUNC_7(VAR_9, "r")) == ((void*)0))
  FUNC_4(VAR_3, "%s", VAR_10);

 VAR_18 = 0;
 while (VAR_8--)
  if (FUNC_10(VAR_16) == VAR_2)
   goto eof;
 while (VAR_11--)
  if (FUNC_10(VAR_17) == VAR_2)
   goto eof;

 for (VAR_14 = VAR_15 = 1;; ++VAR_14) {
  VAR_12 = FUNC_10(VAR_16);
  VAR_13 = FUNC_10(VAR_17);
  if (VAR_12 == VAR_2 || VAR_13 == VAR_2)
   break;
  if (VAR_12 != VAR_13) {
   if (VAR_5) {
    VAR_18 = 1;
    (void)FUNC_11("%08llx %02x %02x\n",
        (long long)VAR_14 - 1, VAR_12, VAR_13);
   } else if (VAR_4) {
    VAR_18 = 1;
    (void)FUNC_11("%6lld %3o %3o\n",
        (long long)VAR_14, VAR_12, VAR_13);
   } else {
    FUNC_2(VAR_7, VAR_10, VAR_14, VAR_15);

   }
  }
  if (VAR_12 == '\n')
   ++VAR_15;
 }

eof: if (FUNC_9(VAR_16))
  FUNC_4(VAR_3, "%s", VAR_7);
 if (FUNC_9(VAR_17))
  FUNC_4(VAR_3, "%s", VAR_10);
 if (FUNC_8(VAR_16)) {
  if (!FUNC_8(VAR_17))
   FUNC_3(VAR_7);
 } else
  if (FUNC_8(VAR_17))
   FUNC_3(VAR_10);
 FUNC_6(VAR_17);
 FUNC_6(VAR_16);
 if (VAR_18)
  FUNC_5(VAR_1);
}
