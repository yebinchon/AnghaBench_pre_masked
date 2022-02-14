
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct service_cmd {char* method; int (* imp ) (struct strbuf*,char*) ;int pattern; } ;
struct TYPE_3__ {size_t rm_eo; size_t rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int FUNC_0 (struct service_cmd*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (struct strbuf*,struct service_cmd*) ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 () ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 () ;
 int VAR_5 ;
 int FUNC_9 (struct strbuf*,char*,char*) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,char*,int,TYPE_1__*,int ) ;
 int FUNC_12 (int *) ;
 struct service_cmd* VAR_6 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (struct strbuf*,char*) ;
 char* FUNC_18 (char*,size_t) ;

int FUNC_19(int VAR_7, const char **VAR_8)
{
 char *VAR_9 = FUNC_6("REQUEST_METHOD");
 char *VAR_10;
 struct service_cmd *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 int VAR_13;
 struct strbuf VAR_14 = VAR_2;

 FUNC_14(VAR_3);
 FUNC_13(VAR_4);

 if (!VAR_9)
  FUNC_3("No REQUEST_METHOD from server");
 if (!FUNC_16(VAR_9, "HEAD"))
  VAR_9 = "GET";
 VAR_10 = FUNC_5();

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++) {
  struct service_cmd *VAR_15 = &VAR_6[VAR_13];
  regex_t VAR_16;
  regmatch_t VAR_17[1];

  if (FUNC_10(&VAR_16, VAR_15->pattern, VAR_1))
   FUNC_3("Bogus regex in service table: %s", VAR_15->pattern);
  if (!FUNC_11(&VAR_16, VAR_10, 1, VAR_17, 0)) {
   size_t VAR_18;

   if (FUNC_16(VAR_9, VAR_15->method))
    return FUNC_2(&VAR_14, VAR_15);

   VAR_11 = VAR_15;
   VAR_18 = VAR_17[0].rm_eo - VAR_17[0].rm_so;
   VAR_12 = FUNC_18(VAR_10 + VAR_17[0].rm_so + 1, VAR_18 - 1);
   VAR_10[VAR_17[0].rm_so] = 0;
   break;
  }
  FUNC_12(&VAR_16);
 }

 if (!VAR_11)
  FUNC_9(&VAR_14, "Request not supported: '%s'", VAR_10);

 FUNC_15();
 if (!FUNC_4(VAR_10, 0))
  FUNC_9(&VAR_14, "Not a git repository: '%s'", VAR_10);
 if (!FUNC_6("GIT_HTTP_EXPORT_ALL") &&
     FUNC_1("git-daemon-export-ok", VAR_0) )
  FUNC_9(&VAR_14, "Repository not exported: '%s'", VAR_10);

 FUNC_8();
 VAR_5 = FUNC_7("GIT_HTTP_MAX_REQUEST_BUFFER",
        VAR_5);

 VAR_11->imp(&VAR_14, VAR_12);
 return 0;
}
