
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct rpc_service {char const* name; scalar_t__ enabled; } ;


 int FUNC_0 (struct rpc_service*) ;
 int FUNC_1 (struct strbuf*,char*,char const*) ;
 char* FUNC_2 (char*) ;
 struct rpc_service* VAR_0 ;
 int FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static struct rpc_service *FUNC_5(struct strbuf *VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 struct rpc_service *VAR_4 = ((void*)0);
 int VAR_5;

 if (!FUNC_3(VAR_2, "git-", &VAR_3))
  FUNC_1(VAR_1, "Unsupported service: '%s'", VAR_2);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  struct rpc_service *VAR_6 = &VAR_0[VAR_5];
  if (!FUNC_4(VAR_6->name, VAR_3)) {
   VAR_4 = VAR_6;
   break;
  }
 }

 if (!VAR_4)
  FUNC_1(VAR_1, "Unsupported service: '%s'", VAR_2);

 if (VAR_4->enabled < 0) {
  const char *VAR_7 = FUNC_2("REMOTE_USER");
  VAR_4->enabled = (VAR_7 && *VAR_7) ? 1 : 0;
 }
 if (!VAR_4->enabled)
  FUNC_1(VAR_1, "Service not enabled: '%s'", VAR_4->name);
 return VAR_4;
}
