
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
typedef int locale_t ;
typedef int analyzer_states ;
typedef int FILE ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (struct sbuf*) ;
 char* FUNC_9 (struct sbuf*) ;
 int FUNC_10 (struct sbuf*) ;
 int FUNC_11 (struct sbuf*) ;
 int FUNC_12 (struct sbuf*) ;
 struct sbuf* FUNC_13 () ;
 int FUNC_14 (struct sbuf*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_15(FILE *VAR_5, const char *VAR_6, bool VAR_7)
{
 int VAR_8;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 analyzer_states VAR_11 = 132;
 struct sbuf *VAR_12 = FUNC_13();
 locale_t VAR_13;

 VAR_13 = FUNC_6(VAR_3, "C", ((void*)0));

 if (VAR_6 != ((void*)0))
  FUNC_7("%s:\n", VAR_6);

 while ((VAR_8 = FUNC_0(VAR_5)) != VAR_0) {
  switch (VAR_11) {
  case 132:
   if (VAR_8 == '$') {

    VAR_11 = 133;
   } else {

    continue;
   }
   break;
  case 133:
   if (FUNC_4(VAR_8, VAR_13)) {

    FUNC_8(VAR_12);
    FUNC_14(VAR_12, '$');
    FUNC_14(VAR_12, VAR_8);
    VAR_11 = 131;

    continue;
   } else if (VAR_8 == '$') {

    continue;
   } else {

    VAR_11 = 132;
   }
   break;
  case 131:
   FUNC_14(VAR_12, VAR_8);

   if (FUNC_4(VAR_8, VAR_13)) {



    continue;
   } else if (VAR_8 == ':') {




    VAR_11 = 130;
    VAR_10 = 0;
   } else if (VAR_8 == '$') {





    VAR_11 = 133;
   } else {



    VAR_11 = 132;
   }
   break;
  case 130:
  case 129:
   FUNC_14(VAR_12, VAR_8);

   switch (VAR_8) {
   case ':':
    if (VAR_11 == 130) {
     VAR_11 = 129;
     VAR_10 = 1;
    } else {
     VAR_11 = 132;
    }
    break;
   case ' ':




    VAR_11 = 128;
    break;
   default:

    VAR_11 = 132;
    break;
   }
   break;
  case 128:
   FUNC_14(VAR_12, VAR_8);

   if (FUNC_5(VAR_8, VAR_13)) {

    VAR_11 = 132;
   } else if (VAR_8 == '$') {
    FUNC_11(VAR_12);
    VAR_8 = FUNC_9(VAR_12)[FUNC_12(VAR_12) - 2];
    if (VAR_8 == ' ' || (VAR_10 && VAR_8 == '#')) {
     FUNC_7("     %s\n", FUNC_9(VAR_12));
     VAR_9 = 1;
    }
    VAR_11 = 132;
   }

   break;
  }
 }
 FUNC_10(VAR_12);
 FUNC_2(VAR_13);

 if (!VAR_9) {
  if (!VAR_7)
   FUNC_1(VAR_4, "%s warning: no id keywords in %s\n",
       FUNC_3(), VAR_6 ? VAR_6 : "standard input");

  return (VAR_1);
 }

 return (VAR_2);
}
