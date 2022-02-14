
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* custom_charset_1; char* custom_charset_2; char* custom_charset_3; char* custom_charset_4; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_5__ {TYPE_1__* user_options; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (char**,char*,char const*,char const*,char const*,char const*) ;

char *FUNC_1 (const hashcat_ctx_t *VAR_0)
{
  const user_options_t *VAR_1 = VAR_0->user_options;

  const char *VAR_2 = VAR_1->custom_charset_1;
  const char *VAR_3 = VAR_1->custom_charset_2;
  const char *VAR_4 = VAR_1->custom_charset_3;
  const char *VAR_5 = VAR_1->custom_charset_4;

  if ((VAR_2 != ((void*)0)) || (VAR_3 != ((void*)0)) || (VAR_4 != ((void*)0)) || (VAR_5 != ((void*)0)))
  {
    char *VAR_6;

    if (VAR_2 == ((void*)0)) VAR_2 = "Undefined";
    if (VAR_3 == ((void*)0)) VAR_3 = "Undefined";
    if (VAR_4 == ((void*)0)) VAR_4 = "Undefined";
    if (VAR_5 == ((void*)0)) VAR_5 = "Undefined";

    FUNC_0 (&VAR_6, "-1 %s, -2 %s, -3 %s, -4 %s", VAR_2, VAR_3, VAR_4, VAR_5);

    return VAR_6;
  }

  return ((void*)0);
}
