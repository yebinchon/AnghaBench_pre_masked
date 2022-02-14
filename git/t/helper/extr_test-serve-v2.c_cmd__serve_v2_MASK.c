
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serve_options {int advertise_capabilities; int stateless_rpc; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int *,int ) ;
 struct option FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct serve_options VAR_2 ;
 int FUNC_3 (int,char const**,char const*,struct option*,int ,int) ;
 int FUNC_4 (struct serve_options*) ;
 int VAR_3 ;
 char* FUNC_5 () ;

int FUNC_6(int VAR_4, const char **VAR_5)
{
 struct serve_options VAR_6 = VAR_2;

 struct option VAR_7[] = {
  FUNC_1(0, "stateless-rpc", &VAR_6.stateless_rpc,
    FUNC_0("quit after a single request/response exchange")),
  FUNC_1(0, "advertise-capabilities", &VAR_6.advertise_capabilities,
    FUNC_0("exit immediately after advertising capabilities")),
  FUNC_2()
 };
 const char *VAR_8 = FUNC_5();


 VAR_4 = FUNC_3(VAR_4, VAR_5, VAR_8, VAR_7, VAR_3,
        VAR_0 |
        VAR_1);
 FUNC_4(&VAR_6);

 return 0;
}
