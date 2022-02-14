
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 () ;
 long VAR_3 ;
 int VAR_4 ;
 int * FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_8 (char const*,char**,int) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_8)
{
 long VAR_9, VAR_10;
 char *VAR_11, *VAR_12;
 FILE *VAR_13;

 VAR_2 = 0;
 VAR_10 = FUNC_8(VAR_8, &VAR_11, 10);
 if (VAR_10 <= 0 || VAR_2 != 0 || *VAR_11 != '\0')
  FUNC_1(1, "%s: bad line number", VAR_8);
 VAR_9 = VAR_10;
 if (VAR_9 <= VAR_3)
  FUNC_1(1, "%s: can't go backwards", VAR_8);

 while (VAR_5 < VAR_4 - 1) {
  VAR_13 = FUNC_6();
  while (VAR_3 + 1 != VAR_9) {
   if ((VAR_12 = FUNC_5()) == ((void*)0))
    FUNC_1(1, "%ld: out of range", VAR_9);
   if (FUNC_3(VAR_12, VAR_13) == VAR_0)
    break;
  }
  if (!VAR_7)
   FUNC_7("%jd\n", (intmax_t)FUNC_4(VAR_13));
  if (FUNC_2(VAR_13) != 0)
   FUNC_0(1, "%s", VAR_1);
  if (VAR_6-- == 0)
   break;
  VAR_9 += VAR_10;
 }
}
