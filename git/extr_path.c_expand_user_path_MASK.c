
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct passwd {char const* pw_dir; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (char const*,size_t) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 char* FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 char* FUNC_7 (char const*,char) ;

char *FUNC_8(const char *VAR_1, int VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 const char *VAR_4 = VAR_1;

 if (VAR_1 == ((void*)0))
  goto return_null;
 if (VAR_1[0] == '~') {
  const char *VAR_5 = FUNC_7(VAR_1, '/');
  const char *VAR_6 = VAR_1 + 1;
  size_t VAR_7 = VAR_5 - VAR_6;
  if (VAR_7 == 0) {
   const char *VAR_8 = FUNC_1("HOME");
   if (!VAR_8)
    goto return_null;
   if (VAR_2)
    FUNC_3(&VAR_3, VAR_8);
   else
    FUNC_4(&VAR_3, VAR_8);



  } else {
   struct passwd *VAR_9 = FUNC_2(VAR_6, VAR_7);
   if (!VAR_9)
    goto return_null;
   FUNC_4(&VAR_3, VAR_9->pw_dir);
  }
  VAR_4 = VAR_5;
 }
 FUNC_4(&VAR_3, VAR_4);
 return FUNC_5(&VAR_3, ((void*)0));
return_null:
 FUNC_6(&VAR_3);
 return ((void*)0);
}
