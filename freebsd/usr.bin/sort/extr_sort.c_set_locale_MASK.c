
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {int negative_sign; int positive_sign; int thousands_sep; int decimal_point; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_3 ;
 struct lconv* FUNC_2 () ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct lconv *VAR_8;
 const char *VAR_9;

 FUNC_3(VAR_0, "");

 VAR_8 = FUNC_2();

 if (VAR_8) {


  FUNC_0(&VAR_4, VAR_8->decimal_point,
      VAR_4);
  FUNC_0(&VAR_7, VAR_8->thousands_sep,
      VAR_7);
  FUNC_0(&VAR_6, VAR_8->positive_sign,
      VAR_6);
  FUNC_0(&VAR_5, VAR_8->negative_sign,
      VAR_5);
 }

 if (FUNC_1("GNUSORT_NUMERIC_COMPATIBILITY"))
  VAR_3 = 1;

 VAR_9 = FUNC_3(VAR_1, ((void*)0));

 if (VAR_9) {
  char *VAR_10;
  const char *VAR_11;

  VAR_10 = FUNC_5(VAR_9);
  VAR_11 = FUNC_3(VAR_1, "C");
  if (VAR_11 && !FUNC_6(VAR_11, VAR_10))
   VAR_2 = 1;
  else {
   const char *VAR_12;

   VAR_12 = FUNC_3(VAR_1, "POSIX");
   if (VAR_12 && !FUNC_6(VAR_12, VAR_10))
    VAR_2 = 1;
  }
  FUNC_3(VAR_1, VAR_10);
  FUNC_4(VAR_10);
 }
}
