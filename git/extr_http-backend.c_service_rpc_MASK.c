
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct rpc_service {char* name; int buffer_input; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,int ,int ) ;
 int FUNC_4 (char const**,int ) ;
 struct rpc_service* FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*,char*,char*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static void FUNC_9(struct strbuf *VAR_2, char *VAR_3)
{
 const char *VAR_4[] = {((void*)0), "--stateless-rpc", ".", ((void*)0)};
 struct rpc_service *VAR_5 = FUNC_5(VAR_2, VAR_3);
 struct strbuf VAR_6 = VAR_0;

 FUNC_8(&VAR_6);
 FUNC_6(&VAR_6, "application/x-git-%s-request", VAR_5->name);
 FUNC_0(VAR_2, VAR_6.buf);

 FUNC_2(VAR_2);

 FUNC_8(&VAR_6);
 FUNC_6(&VAR_6, "application/x-git-%s-result", VAR_5->name);
 FUNC_3(VAR_2, VAR_1, VAR_6.buf);

 FUNC_1(VAR_2);

 VAR_4[0] = VAR_5->name;
 FUNC_4(VAR_4, VAR_5->buffer_input);
 FUNC_7(&VAR_6);
}
