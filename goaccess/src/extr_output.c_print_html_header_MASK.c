
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* html_custom_css; } ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 char* VAR_1 ;
 char* VAR_2 ;
 TYPE_1__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (FILE * VAR_5)
{
  FUNC_1 (VAR_5,
  "<!DOCTYPE html>"
  "<html lang='%s'>"
  "<head>"
  "<meta charset='UTF-8'>"
  "<meta name='referrer' content='no-referrer'>"
  "<meta http-equiv='X-UA-Compatible' content='IE=edge'>"
  "<meta name='google' content='notranslate'>"
  "<meta name='viewport' content='width=device-width, initial-scale=1'>"
  "<meta name='robots' content='noindex, nofollow'>", FUNC_0(VAR_0));


  FUNC_1 (VAR_5, "<link rel='icon' href='data:image/x-icon;base64,AAABAAEA"
  "EBAQAAEABAAoAQAAFgAAACgAAAAQAAAAIAAAAAEABAAAAAAAgAAAAAAAAAAAAAAAEAAAA"
  "AAAAADGxsYAWFhYABwcHABfAP8A/9dfAADXrwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
  "AAAAAAAAAAAAAAAAAAAAAAIiIiIiIiIiIjMlUkQgAiIiIiIiIiIiIiIzJVJEIAAAIiIiI"
  "iIiIiIiMyVSRCAAIiIiIiIiIiIiIRERERERERERERERERERERIiIiIiIiIiIgACVVUiIi"
  "IiIiIiIiIiIiIAAlVVIiIiIiIiIiIiIiIhEREREREREREREREREREREAAAAAAAAAAAAAA"
  "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
  "AA' type='image/x-icon' />");

  FUNC_2 (VAR_5);

  FUNC_1 (VAR_5, "<style>%s</style>", VAR_4);
  FUNC_1 (VAR_5, "<style>%s</style>", VAR_2);
  FUNC_1 (VAR_5, "<style>%s</style>", VAR_1);

  if (VAR_3.html_custom_css)
    FUNC_1 (VAR_5, "<link rel='stylesheet' href='%s'>", VAR_3.html_custom_css);

  FUNC_1 (VAR_5,
  "</head>"
  "<body>");
}
