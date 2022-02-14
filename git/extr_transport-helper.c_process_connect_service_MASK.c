
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int stateless_rpc; struct helper_data* data; } ;
struct strbuf {int dummy; } ;
struct helper_data {scalar_t__ stateless_connect; scalar_t__ connect; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct transport*,struct strbuf*) ;
 int FUNC_3 (struct transport*,char*,char const*) ;
 int FUNC_4 (struct strbuf*,char*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct transport *VAR_2,
       const char *VAR_3, const char *VAR_4)
{
 struct helper_data *VAR_5 = VAR_2->data;
 struct strbuf VAR_6 = VAR_0;
 int VAR_7 = 0;





 if (FUNC_6(VAR_3, VAR_4)) {
  int VAR_8 = FUNC_3(VAR_2, "servpath", VAR_4);
  if (VAR_8 > 0)
   FUNC_7(FUNC_0("setting remote service path not supported by protocol"));
  else if (VAR_8 < 0)
   FUNC_7(FUNC_0("invalid remote service path"));
 }

 if (VAR_5->connect) {
  FUNC_4(&VAR_6, "connect %s\n", VAR_3);
  VAR_7 = FUNC_2(VAR_2, &VAR_6);
 } else if (VAR_5->stateless_connect &&
     (FUNC_1() == VAR_1) &&
     !FUNC_6("git-upload-pack", VAR_3)) {
  FUNC_4(&VAR_6, "stateless-connect %s\n", VAR_3);
  VAR_7 = FUNC_2(VAR_2, &VAR_6);
  if (VAR_7)
   VAR_2->stateless_rpc = 1;
 }

 FUNC_5(&VAR_6);
 return VAR_7;
}
