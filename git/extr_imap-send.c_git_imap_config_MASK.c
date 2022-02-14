
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_ssl; int auth_method; int tunnel; int port; int pass; int user; int host; int folder; int use_html; int ssl_verify; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char const**) ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(void)
{
 const char *VAR_1 = ((void*)0);

 FUNC_0("imap.sslverify", &VAR_0.ssl_verify);
 FUNC_0("imap.preformattedhtml", &VAR_0.use_html);
 FUNC_2("imap.folder", &VAR_0.folder);

 if (!FUNC_3("imap.host", &VAR_1)) {
  if (!VAR_1) {
   FUNC_4("imap.host", "Missing value for 'imap.host'");
  } else {
   if (FUNC_5(VAR_1, "imap:"))
    VAR_1 += 5;
   else if (FUNC_5(VAR_1, "imaps:")) {
    VAR_1 += 6;
    VAR_0.use_ssl = 1;
   }
   if (FUNC_5(VAR_1, "//"))
    VAR_1 += 2;
   VAR_0.host = FUNC_6(VAR_1);
  }
 }

 FUNC_2("imap.user", &VAR_0.user);
 FUNC_2("imap.pass", &VAR_0.pass);
 FUNC_1("imap.port", &VAR_0.port);
 FUNC_2("imap.tunnel", &VAR_0.tunnel);
 FUNC_2("imap.authmethod", &VAR_0.auth_method);
}
