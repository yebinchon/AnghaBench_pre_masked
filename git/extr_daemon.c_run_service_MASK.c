
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct hostinfo {int dummy; } ;
struct daemon_service {int enabled; int (* fn ) (struct argv_array const*) ;int name; int config_name; scalar_t__ overridable; } ;
struct argv_array {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char const*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (char*,int ,char const*) ;
 char* FUNC_5 (char const*,struct hostinfo*) ;
 scalar_t__ FUNC_6 (struct daemon_service*,char const*,char const*,struct hostinfo*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct strbuf*,char*,int ) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct argv_array const*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_8, struct daemon_service *VAR_9,
         struct hostinfo *VAR_10, const struct argv_array *VAR_11)
{
 const char *VAR_12;
 int VAR_13 = VAR_9->enabled;
 struct strbuf VAR_14 = VAR_4;

 FUNC_4("Request %s for '%s'", VAR_9->name, VAR_8);

 if (!VAR_13 && !VAR_9->overridable) {
  FUNC_3("'%s': service not enabled.", VAR_9->name);
  VAR_6 = VAR_0;
  return FUNC_1(VAR_8, "service not enabled");
 }

 if (!(VAR_12 = FUNC_5(VAR_8, VAR_10)))
  return FUNC_1(VAR_8, "no such repository");
 if (!VAR_7 && FUNC_0("git-daemon-export-ok", VAR_1)) {
  FUNC_3("'%s': repository not exported.", VAR_12);
  VAR_6 = VAR_0;
  return FUNC_1(VAR_8, "repository not exported");
 }

 if (VAR_9->overridable) {
  FUNC_8(&VAR_14, "daemon.%s", VAR_9->config_name);
  FUNC_2(VAR_14.buf, &VAR_13);
  FUNC_9(&VAR_14);
 }
 if (!VAR_13) {
  FUNC_3("'%s': service not enabled for '%s'",
    VAR_9->name, VAR_12);
  VAR_6 = VAR_0;
  return FUNC_1(VAR_8, "service not enabled");
 }





 if (VAR_5 && FUNC_6(VAR_9, VAR_8, VAR_12, VAR_10))
  return -1;





 FUNC_7(VAR_2, VAR_3);

 return VAR_9->fn(VAR_11);
}
