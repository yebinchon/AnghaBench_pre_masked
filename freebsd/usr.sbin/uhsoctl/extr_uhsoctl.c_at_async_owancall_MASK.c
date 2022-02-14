
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {int con_status; size_t con_net_type; int con_apn; int con_oper; int pdp_ctx; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int ,...) ;
 int * VAR_1 ;
 int FUNC_2 (char const*,char*,int*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, const char *VAR_3)
{
 struct ctx *VAR_4 = VAR_2;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_3, "_OWANCALL: %*d,%d", &VAR_6);
 if (VAR_5 != 1)
  return;

 if (VAR_6 == VAR_4->con_status)
  return;

 FUNC_0(VAR_4->fd, "AT_OWANDATA=%d\r\n", VAR_4->pdp_ctx);

 VAR_4->con_status = VAR_6;
 if (VAR_4->con_status == 1) {
  FUNC_1(VAR_0, "Connected to \"%s\" (%s), %s",
      VAR_4->con_oper, VAR_4->con_apn,
      VAR_1[VAR_4->con_net_type]);
 }
 else {
  FUNC_1(VAR_0, "Disconnected from \"%s\" (%s)",
      VAR_4->con_oper, VAR_4->con_apn);
 }
}
