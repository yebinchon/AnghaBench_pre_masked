
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iconv_fallbacks {int * data; int wc_to_mb_fallback; int mb_to_uc_fallback; int mb_to_wc_fallback; int uc_to_mb_fallback; } ;
typedef int iconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char*,char*,char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int *) ;
 char FUNC_3 (int,char**,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ,int ,struct iconv_fallbacks*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 () ;
 int VAR_15 ;

int
FUNC_9 (int VAR_16, char *VAR_17[])
{
 struct iconv_fallbacks VAR_18;
 iconv_t VAR_19;
 char *VAR_20;
 char VAR_21;

 while (((VAR_21 = FUNC_3(VAR_16, VAR_17, VAR_11, VAR_7, ((void*)0))) != -1)) {
  switch (VAR_21) {
  case 'c':
   VAR_2 = 1;
   break;
  case 'd':
   VAR_4 = 1;
   break;
  case 'i':
   VAR_5 = 1;
   break;
  case 'l':
   VAR_6 = 1;
   break;
  case 'r':
   VAR_12 = 1;
   break;
  case 't':
   VAR_13 = 1;
   break;
  }
 }
 VAR_16 -= VAR_10;
 VAR_17 += VAR_10;

 if (VAR_16 < 1)
  FUNC_8();

 VAR_18.uc_to_mb_fallback = VAR_14;
 VAR_18.mb_to_wc_fallback = VAR_9;
 VAR_18.mb_to_uc_fallback = VAR_8;
 VAR_18.wc_to_mb_fallback = VAR_15;
 VAR_18.data = ((void*)0);

 if (VAR_16 == 2) {
  FUNC_0(&VAR_20, "%s%s%s", VAR_17[1], VAR_13 ? "//TRASNLIT" : "",
      VAR_5 ? "//IGNORE" : "");

  if ((VAR_19 = FUNC_5(VAR_20, VAR_17[0])) == (iconv_t)-1)
   FUNC_2(1, ((void*)0));
  if (VAR_4) {
   if (FUNC_6(VAR_19, VAR_1, &VAR_18) != 0)
    FUNC_2(1, ((void*)0));
  }
  FUNC_1(VAR_19, 0);
 } else if (VAR_12) {
  FUNC_0(&VAR_20, "%s%s%s", VAR_17[0], VAR_13 ? "//TRANSLIT" : "",
      VAR_5 ? "//IGNORE" : "");

  if ((VAR_19 = FUNC_5(VAR_20, "UTF-32LE")) == (iconv_t)-1)
   FUNC_2(1, ((void*)0));
  if (VAR_4 && FUNC_6(VAR_19, VAR_1, &VAR_18) != 0)
   FUNC_2(1, ((void*)0));
  if (VAR_2) {
   FUNC_7("# $FreeBSD$\n\n");
   FUNC_7("TYPE\t\tROWCOL\n");
   FUNC_7("NAME\t\tUCS/%s\n", VAR_17[0]);
   FUNC_7("%s", VAR_3);
  }
  FUNC_1(VAR_19, 1);
 } else {
  if ((VAR_19 = FUNC_5("UTF-32LE//TRANSLIT", VAR_17[0])) == (iconv_t)-1)
   FUNC_2(1, ((void*)0));
  if (VAR_4 && (FUNC_6(VAR_19, VAR_1, &VAR_18) != 0))
   FUNC_2(1, ((void*)0));
  if (VAR_2) {
   FUNC_7("# $FreeBSD$\n\n");
   FUNC_7("TYPE\t\tROWCOL\n");
   FUNC_7("NAME\t\t%s/UCS\n", VAR_17[0]);
   FUNC_7("%s", VAR_3);
                }
  FUNC_1(VAR_19, 0);
 }

 if (FUNC_4(VAR_19) != 0)
  FUNC_2(1, ((void*)0));

 return (VAR_0);
}
