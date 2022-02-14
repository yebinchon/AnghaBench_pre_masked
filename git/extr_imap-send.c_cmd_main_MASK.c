
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {scalar_t__ len; } ;
struct TYPE_4__ {int port; char* host; scalar_t__ tunnel; int folder; scalar_t__ use_ssl; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct strbuf*,int) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (TYPE_1__*,struct strbuf*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,char const**,char*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,struct strbuf*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (char*) ;

int FUNC_10(int VAR_7, const char **VAR_8)
{
 struct strbuf VAR_9 = VAR_0;
 int VAR_10;
 int VAR_11;

 FUNC_7(&VAR_11);
 FUNC_4();

 VAR_7 = FUNC_5(VAR_7, (const char **)VAR_8, "", VAR_1, VAR_2, 0);

 if (VAR_7)
  FUNC_8(VAR_2, VAR_1);


 if (VAR_6) {
  FUNC_9("--curl not supported in this build");
  VAR_6 = 0;
 }







 if (!VAR_3.port)
  VAR_3.port = VAR_3.use_ssl ? 993 : 143;

 if (!VAR_3.folder) {
  FUNC_3(VAR_4, "no imap store specified\n");
  return 1;
 }
 if (!VAR_3.host) {
  if (!VAR_3.tunnel) {
   FUNC_3(VAR_4, "no imap host specified\n");
   return 1;
  }
  VAR_3.host = "tunnel";
 }


 if (FUNC_6(VAR_5, &VAR_9)) {
  FUNC_3(VAR_4, "error reading input\n");
  return 1;
 }

 if (VAR_9.len == 0) {
  FUNC_3(VAR_4, "nothing to send\n");
  return 1;
 }

 VAR_10 = FUNC_1(&VAR_9);
 if (!VAR_10) {
  FUNC_3(VAR_4, "no messages to send\n");
  return 1;
 }



 if (VAR_3.tunnel)
  return FUNC_0(&VAR_3, &VAR_9, VAR_10);






 return FUNC_0(&VAR_3, &VAR_9, VAR_10);
}
