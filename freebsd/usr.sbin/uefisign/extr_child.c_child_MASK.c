
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct executable {char const* x_path; int * x_fp; } ;
typedef int FILE ;


 struct executable* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct executable*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (struct executable*) ;
 int FUNC_7 (struct executable*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct executable*,int) ;
 int FUNC_10 (struct executable*,int *,char const*) ;
 int FUNC_11 (struct executable*,int) ;
 int FUNC_12 (struct executable*) ;
 int FUNC_13 (struct executable*) ;
 scalar_t__ FUNC_14 (struct executable*) ;
 int FUNC_15 (struct executable*) ;

int
FUNC_16(const char *VAR_0, const char *VAR_1, int VAR_2,
    bool VAR_3, bool VAR_4)
{
 FILE *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 struct executable *VAR_7;

 VAR_6 = FUNC_2(VAR_0, "r");
 if (VAR_1 != ((void*)0))
  VAR_5 = FUNC_2(VAR_1, "w");

 if (FUNC_1() < 0)
  FUNC_4(1, "cap_enter");

 VAR_7 = FUNC_0(1, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  FUNC_4(1, "calloc");
 VAR_7->x_path = VAR_0;
 VAR_7->x_fp = VAR_6;

 FUNC_6(VAR_7);
 FUNC_7(VAR_7);
 if (VAR_3) {
  if (FUNC_14(VAR_7) == 0)
   FUNC_5(1, "file not signed");

  FUNC_8("file contains signature\n");
  if (VAR_4) {
   FUNC_3(VAR_7);
   FUNC_13(VAR_7);
   FUNC_12(VAR_7);
  }
 } else {
  if (FUNC_14(VAR_7) != 0)
   FUNC_5(1, "file already signed");

  FUNC_3(VAR_7);
  if (VAR_4)
   FUNC_13(VAR_7);
  FUNC_11(VAR_7, VAR_2);
  FUNC_9(VAR_7, VAR_2);
  FUNC_15(VAR_7);
  FUNC_10(VAR_7, VAR_5, VAR_1);
 }

 return (0);
}
