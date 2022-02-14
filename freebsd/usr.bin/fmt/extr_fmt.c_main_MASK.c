
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*,int) ;
 void* FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int,char**,char*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t FUNC_8 (int *,char const**,size_t,int *) ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 size_t VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int * VAR_16 ;
 int FUNC_11 (int ,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;

int
FUNC_12(int VAR_20, char *VAR_21[])
{
 int VAR_22;
 wchar_t *VAR_23;
 size_t VAR_24;
 const char *VAR_25;

 (void)FUNC_11(VAR_2, "");



 while ((VAR_22 = FUNC_7(VAR_20, VAR_21, "0123456789cd:hl:mnpst:w:")) != -1)
  switch (VAR_22) {
  case 'c':
   VAR_5 = 1;
   VAR_7 = 1;
   continue;
  case 'd':
   VAR_25 = VAR_12;
   VAR_24 = FUNC_8(((void*)0), &VAR_25, 0, ((void*)0));
   if (VAR_24 == (size_t)-1)
    FUNC_1(VAR_1, "bad sentence-ending character set");
   VAR_23 = FUNC_0((VAR_24 + 1) * sizeof(wchar_t));
   FUNC_8(VAR_23, &VAR_25, VAR_24 + 1, ((void*)0));
   VAR_16 = VAR_23;
   continue;
  case 'l':
   VAR_15
       = FUNC_5(VAR_12, "output tab width must be non-negative", 1);
   continue;
  case 'm':
   VAR_9 = 1;
   continue;
  case 'n':
   VAR_7 = 1;
   continue;
  case 'p':
   VAR_4 = 1;
   continue;
  case 's':
   VAR_6 = 1;
   continue;
  case 't':
   VAR_19 = FUNC_6(VAR_12, "tab width must be positive", 1);
   continue;
  case 'w':
   VAR_8 = FUNC_6(VAR_12, "width must be positive", 1);
   VAR_10 = VAR_8;
   continue;
  case '0': case '1': case '2': case '3': case '4': case '5':
  case '6': case '7': case '8': case '9':




   if (VAR_8 == 0) {
    char *VAR_26;

    VAR_26 = VAR_21[VAR_13 - 1];
    if (VAR_26[0] == '-' && VAR_26[1] == VAR_22 && !VAR_26[2])
     VAR_8 = FUNC_6(++VAR_26, "width must be nonzero", 1);
    else
     VAR_8 = FUNC_6(VAR_21[VAR_13] + 1,
         "width must be nonzero", 1);
    VAR_10 = VAR_8;
   }
   continue;
  case 'h':
  default:
   FUNC_4(VAR_17,
       "usage:   fmt [-cmps] [-d chars] [-l num] [-t num]\n"
       "             [-w width | -width | goal [maximum]] [file ...]\n"
       "Options: -c     center each line instead of formatting\n"
       "         -d <chars> double-space after <chars> at line end\n"
       "         -l <n> turn each <n> spaces at start of line into a tab\n"
       "         -m     try to make sure mail header lines stay separate\n"
       "         -n     format lines beginning with a dot\n"
       "         -p     allow indented paragraphs\n"
       "         -s     coalesce whitespace inside lines\n"
       "         -t <n> have tabs every <n> columns\n"
       "         -w <n> set maximum width to <n>\n"
       "         goal   set target width to goal\n");
   FUNC_3(VAR_22 == 'h' ? 0 : VAR_1);
  }
 VAR_20 -= VAR_13;
 VAR_21 += VAR_13;



 if (VAR_20 > 0 && VAR_8 == 0
     && (VAR_8 = FUNC_6(*VAR_21, "goal length must be positive", 0))
     != 0) {
  --VAR_20;
  ++VAR_21;
  if (VAR_20 > 0
      && (VAR_10 = FUNC_6(*VAR_21, "max length must be positive", 0))
      != 0) {
   --VAR_20;
   ++VAR_21;
   if (VAR_10 < VAR_8)
    FUNC_2(VAR_1, "max length must be >= goal length");
  }
 }
 if (VAR_8 == 0)
  VAR_8 = 65;
 if (VAR_10 == 0)
  VAR_10 = VAR_8 + 10;
 if (VAR_10 >= VAR_3 / sizeof(wchar_t))
  FUNC_2(VAR_1, "max length too large");

 VAR_14 = FUNC_0((VAR_10 + 1) * sizeof(wchar_t));



 if (VAR_20 > 0) {
  while (VAR_20-- > 0)
   FUNC_9(*VAR_21++);
 } else {
  FUNC_10(VAR_18, "standard input");
 }



 return VAR_11 ? VAR_0 : 0;

}
