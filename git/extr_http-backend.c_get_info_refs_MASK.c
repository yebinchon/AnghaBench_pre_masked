
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct rpc_service {char* name; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (int ,struct strbuf*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char const**,int ) ;
 int FUNC_9 (struct strbuf*) ;
 struct rpc_service* FUNC_10 (struct strbuf*,char const*) ;
 int FUNC_11 (struct strbuf*,char*,struct strbuf*) ;
 int VAR_3 ;
 int FUNC_12 (struct strbuf*,char*,char*) ;
 int FUNC_13 (struct strbuf*) ;

__attribute__((used)) static void FUNC_14(struct strbuf *VAR_4, char *VAR_5)
{
 const char *VAR_6 = FUNC_3("service");
 struct strbuf VAR_7 = VAR_0;

 FUNC_4(VAR_4);

 if (VAR_6) {
  const char *VAR_8[] = {((void*)0) ,
   "--stateless-rpc", "--advertise-refs",
   ".", ((void*)0)};
  struct rpc_service *VAR_9 = FUNC_10(VAR_4, VAR_6);

  FUNC_12(&VAR_7, "application/x-git-%s-advertisement",
   VAR_9->name);
  FUNC_5(VAR_4, VAR_1, VAR_7.buf);
  FUNC_1(VAR_4);


  if (FUNC_0() != VAR_2) {
   FUNC_7(1, "# service=git-%s\n", VAR_9->name);
   FUNC_6(1);
  }

  VAR_8[0] = VAR_9->name;
  FUNC_8(VAR_8, 0);

 } else {
  FUNC_9(VAR_4);
  FUNC_2(VAR_3, &VAR_7);
  FUNC_11(VAR_4, "text/plain", &VAR_7);
 }
 FUNC_13(&VAR_7);
}
