
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyent {char const* ty_type; } ;


 struct ttyent* FUNC_0 (char*) ;

const char *
FUNC_1(char *VAR_0)
{
 struct ttyent *VAR_1;

 if (VAR_0 != ((void*)0) && *VAR_0 != '\0') {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 != ((void*)0) && VAR_1->ty_type != ((void*)0))
   return (VAR_1->ty_type);
 }
 return (((void*)0));
}
