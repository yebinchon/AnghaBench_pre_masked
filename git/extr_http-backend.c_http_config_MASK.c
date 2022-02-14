
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct rpc_service {int enabled; int config_name; } ;


 int FUNC_0 (struct rpc_service*) ;
 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (char*,int *) ;
 int VAR_2 ;
 struct rpc_service* VAR_3 ;
 int FUNC_3 (struct strbuf*,char*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_4, VAR_5 = 0;
 struct strbuf VAR_6 = VAR_0;

 FUNC_1("http.getanyfile", &VAR_1);
 FUNC_2("http.maxrequestbuffer", &VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  struct rpc_service *VAR_7 = &VAR_3[VAR_4];
  FUNC_3(&VAR_6, "http.%s", VAR_7->config_name);
  if (!FUNC_1(VAR_6.buf, &VAR_5))
   VAR_7->enabled = VAR_5;
  FUNC_5(&VAR_6);
 }

 FUNC_4(&VAR_6);
}
