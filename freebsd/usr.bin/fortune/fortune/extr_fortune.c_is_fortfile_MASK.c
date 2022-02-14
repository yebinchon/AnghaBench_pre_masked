
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 char* FUNC_2 (char const*,unsigned int) ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_8, char **VAR_9, char **VAR_10, int VAR_11)
{
 int VAR_12;
 const char *VAR_13;
 char *VAR_14;
 static const char *VAR_15[] = {

  "dat", "pos", "c", "h", "p", "i", "f",
  "pas", "ftn", "ins.c", "ins,pas",
  "ins.ftn", "sml",
  ((void*)0)
 };

 FUNC_0(2, (VAR_7, "is_fortfile(%s) returns ", VAR_8));





 if (VAR_11 && !VAR_0) {
  VAR_12 = FUNC_6(VAR_8);
  if (VAR_3 ^ (VAR_8[VAR_12 - 2] == '-' && VAR_8[VAR_12 - 1] == 'o')) {
   FUNC_0(2, (VAR_7, "FALSE (offending file)\n"));
   return (VAR_1);
  }
 }

 if ((VAR_13 = FUNC_8(VAR_8, '/')) == ((void*)0))
  VAR_13 = VAR_8;
 else
  VAR_13++;
 if (*VAR_13 == '.') {
  FUNC_0(2, (VAR_7, "FALSE (file starts with '.')\n"));
  return (VAR_1);
 }
 if (VAR_2 && FUNC_7(VAR_13, "fortunes", 8) != 0) {
  FUNC_0(2, (VAR_7, "FALSE (check fortunes only)\n"));
  return (VAR_1);
 }
 if ((VAR_13 = FUNC_8(VAR_13, '.')) != ((void*)0)) {
  VAR_13++;
  for (VAR_12 = 0; VAR_15[VAR_12] != ((void*)0); VAR_12++)
   if (FUNC_5(VAR_13, VAR_15[VAR_12]) == 0) {
    FUNC_0(2, (VAR_7, "FALSE (file has suffix \".%s\")\n", VAR_13));
    return (VAR_1);
   }
 }

 VAR_14 = FUNC_2(VAR_8, (unsigned int) (FUNC_6(VAR_8) + 4));
 FUNC_4(VAR_14, ".dat");
 if (FUNC_1(VAR_14, VAR_4) < 0) {
  FUNC_0(2, (VAR_7, "FALSE (no readable \".dat\" file)\n"));
  FUNC_3(VAR_14);
  return (VAR_1);
 }
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_14;
 else
  FUNC_3(VAR_14);
 if (VAR_10 != ((void*)0)) {
  if (VAR_6) {
   *VAR_10 = FUNC_2(VAR_8, (unsigned int) (FUNC_6(VAR_8) + 4));
   FUNC_4(*VAR_10, ".pos");
  }
  else {
   *VAR_10 = ((void*)0);
  }
 }
 FUNC_0(2, (VAR_7, "TRUE\n"));

 return (VAR_5);
}
