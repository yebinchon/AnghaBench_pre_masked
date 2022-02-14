
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (struct strbuf*,char const) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 char* FUNC_5 (struct strbuf*,int *) ;

__attribute__((used)) static char *FUNC_6(const char *VAR_3, const char *VAR_4,
 const char **VAR_5)
{
 size_t VAR_6 = 0;
 int VAR_7 = 0;
 char VAR_8 = 0;
 const char *VAR_9 = VAR_4;
 struct strbuf VAR_10 = VAR_0;

 FUNC_2(VAR_9, "git-", &VAR_9);


 FUNC_1("GIT_EXT_SERVICE", VAR_4, 1);
 FUNC_1("GIT_EXT_SERVICE_NOPREFIX", VAR_9, 1);


 while (VAR_3[VAR_6] && (VAR_7 || VAR_3[VAR_6] != ' ')) {
  if (VAR_7) {
   switch (VAR_3[VAR_6]) {
   case ' ':
   case '%':
   case 's':
   case 'S':
    break;
   case 'G':
   case 'V':
    VAR_8 = VAR_3[VAR_6];
    if (VAR_6 == 1)
     break;

   default:
    FUNC_0("Bad remote-ext placeholder '%%%c'.",
     VAR_3[VAR_6]);
   }
   VAR_7 = 0;
  } else
   VAR_7 = (VAR_3[VAR_6] == '%');
  VAR_6++;
 }
 if (VAR_7 && !VAR_3[VAR_6])
  FUNC_0("remote-ext command has incomplete placeholder");
 *VAR_5 = VAR_3 + VAR_6;
 if (**VAR_5 == ' ')
  ++*VAR_5;





 VAR_6 = VAR_8 ? 2 : 0;
 VAR_7 = 0;
 while (VAR_3[VAR_6] && (VAR_7 || VAR_3[VAR_6] != ' ')) {
  if (VAR_7) {
   switch (VAR_3[VAR_6]) {
   case ' ':
   case '%':
    FUNC_3(&VAR_10, VAR_3[VAR_6]);
    break;
   case 's':
    FUNC_4(&VAR_10, VAR_9);
    break;
   case 'S':
    FUNC_4(&VAR_10, VAR_4);
    break;
   }
   VAR_7 = 0;
  } else
   switch (VAR_3[VAR_6]) {
   case '%':
    VAR_7 = 1;
    break;
   default:
    FUNC_3(&VAR_10, VAR_3[VAR_6]);
    break;
   }
  VAR_6++;
 }
 switch (VAR_8) {
 case 'G':
  VAR_1 = FUNC_5(&VAR_10, ((void*)0));
  return ((void*)0);
 case 'V':
  VAR_2 = FUNC_5(&VAR_10, ((void*)0));
  return ((void*)0);
 default:
  return FUNC_5(&VAR_10, ((void*)0));
 }
}
