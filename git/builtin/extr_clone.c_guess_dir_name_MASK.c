
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 int * FUNC_5 (char const*,char,int) ;
 int FUNC_6 (char const*,size_t*,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char*,int) ;
 char* FUNC_9 (char const*,char*) ;
 char* FUNC_10 (char*,int,char const*) ;
 char* FUNC_11 (char const*,size_t) ;

__attribute__((used)) static char *FUNC_12(const char *VAR_0, int VAR_1, int VAR_2)
{
 const char *VAR_3 = VAR_0 + FUNC_7(VAR_0), *VAR_4, *VAR_5;
 size_t VAR_6;
 char *VAR_7;




 VAR_4 = FUNC_9(VAR_0, "://");
 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_0;
 else
  VAR_4 += 3;






 for (VAR_5 = VAR_4; VAR_5 < VAR_3 && !FUNC_2(*VAR_5); VAR_5++) {
  if (*VAR_5 == '@')
   VAR_4 = VAR_5 + 1;
 }




 while (VAR_4 < VAR_3 && (FUNC_2(VAR_3[-1]) || FUNC_4(VAR_3[-1])))
  VAR_3--;
 if (VAR_3 - VAR_4 > 5 && FUNC_2(VAR_3[-5]) &&
     !FUNC_8(VAR_3 - 4, ".git", 4)) {
  VAR_3 -= 5;
  while (VAR_4 < VAR_3 && FUNC_2(VAR_3[-1]))
   VAR_3--;
 }
 if (FUNC_5(VAR_4, '/', VAR_3 - VAR_4) == ((void*)0)
     && FUNC_5(VAR_4, ':', VAR_3 - VAR_4) != ((void*)0)) {
  VAR_5 = VAR_3;
  while (VAR_4 < VAR_5 && FUNC_3(VAR_5[-1]) && VAR_5[-1] != ':')
   VAR_5--;
  if (VAR_4 < VAR_5 && VAR_5[-1] == ':')
   VAR_3 = VAR_5 - 1;
 }







 VAR_5 = VAR_3;
 while (VAR_4 < VAR_5 && !FUNC_2(VAR_5[-1]) && VAR_5[-1] != ':')
  VAR_5--;
 VAR_4 = VAR_5;




 VAR_6 = VAR_3 - VAR_4;
 FUNC_6(VAR_4, &VAR_6, VAR_1 ? ".bundle" : ".git");

 if (!VAR_6 || (VAR_6 == 1 && *VAR_4 == '/'))
  FUNC_1(FUNC_0("No directory name could be guessed.\n"
        "Please specify a directory on the command line"));

 if (VAR_2)
  VAR_7 = FUNC_10("%.*s.git", (int)VAR_6, VAR_4);
 else
  VAR_7 = FUNC_11(VAR_4, VAR_6);




 if (*VAR_7) {
  char *VAR_8 = VAR_7;
  int VAR_9 = 1 ;
  for (VAR_3 = VAR_7; *VAR_3; ++VAR_3) {
   char VAR_10 = *VAR_3;
   if ((unsigned char)VAR_10 < '\x20')
    VAR_10 = '\x20';
   if (FUNC_4(VAR_10)) {
    if (VAR_9)
     continue;
    VAR_9 = 1;
   } else
    VAR_9 = 0;
   *VAR_8++ = VAR_10;
  }
  *VAR_8 = '\0';
  if (VAR_8 > VAR_7 && VAR_9)
   VAR_8[-1] = '\0';
 }
 return VAR_7;
}
