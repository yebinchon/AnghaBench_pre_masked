
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,char**) ;
 scalar_t__ FUNC_6 (void**) ;
 char** FUNC_7 (void*,char*,char*) ;
 char* FUNC_8 (void*,char*,char*) ;
 int VAR_3 ;
 int FUNC_9 (char*,...) ;
 int VAR_4 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

int
FUNC_12(int VAR_5, char **VAR_6)
{
 char **VAR_7, **VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15;
 void *VAR_16;

 while ((VAR_15 = FUNC_3(VAR_5, VAR_6, "lb")) != -1) {
  switch (VAR_15) {
  case 'l':
   VAR_12 = 1;
   break;
  case 'b':
   VAR_14 = 1;
   break;
  default:
   VAR_13++;
   break;
  }
 }
 if (VAR_5 - VAR_3 != 2 || VAR_13) {
  FUNC_1(VAR_4, "usage: hesinfo [-bl] name type\n");
  FUNC_1(VAR_4, "\t-l selects long format\n");
  FUNC_1(VAR_4, "\t-b also does hes_to_bind conversion\n");
  FUNC_0(2);
 }
 VAR_10 = VAR_6[VAR_3];
 VAR_11 = VAR_6[VAR_3 + 1];

 if (FUNC_6(&VAR_16) < 0) {
  if (VAR_2 == VAR_1)
   FUNC_11(
       "hesiod_init: Invalid Hesiod configuration file.");
  else
   FUNC_10("hesiod_init");
 }

 if (VAR_14) {
  if (VAR_12)
   FUNC_9("hes_to_bind(%s, %s) expands to\n", VAR_10, VAR_11);
  VAR_9 = FUNC_8(VAR_16, VAR_10, VAR_11);
  if (!VAR_9) {
   if (VAR_12)
    FUNC_9("nothing\n");
   if (VAR_2 == VAR_0)
    FUNC_11("hesiod_to_bind: Unknown rhs-extension.");
   else
    FUNC_10("hesiod_to_bind");
   FUNC_0(1);
  }
  FUNC_9("%s\n", VAR_9);
  FUNC_2(VAR_9);
  if (VAR_12)
   FUNC_9("which ");
 }
 if (VAR_12)
  FUNC_9("resolves to\n");


 VAR_7 = FUNC_7(VAR_16, VAR_10, VAR_11);
 if (!VAR_7) {
  if (VAR_12)
   FUNC_9("nothing\n");
  if (VAR_2 == VAR_0)
   FUNC_11("hesiod_resolve: Hesiod name not found.");
  else
   FUNC_10("hesiod_resolve");
  FUNC_0(1);
 }

 for (VAR_8 = VAR_7; *VAR_8; VAR_8++)
  FUNC_9("%s\n", *VAR_8);

 FUNC_5(VAR_16, VAR_7);
 FUNC_4(VAR_16);
 FUNC_0(0);
}
