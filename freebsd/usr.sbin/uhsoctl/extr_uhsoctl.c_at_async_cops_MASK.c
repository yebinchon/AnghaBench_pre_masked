
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {int con_net_type; int con_net_stat; int con_status; int pdp_ctx; int fd; int * con_oper; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,...) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (char const*,char*,char*,int*) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int * FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3, const char *VAR_4)
{
 struct ctx *VAR_5 = VAR_3;
 int VAR_6, VAR_7;
 char VAR_8[64];

 VAR_6 = FUNC_3(VAR_4, "+COPS: %*d,%*d,\"%[^\"]\",%d",
     VAR_8, &VAR_7);
 if (VAR_6 != 2)
  return;

 if (VAR_5->con_oper != ((void*)0)) {
  if (VAR_5->con_net_type == VAR_7 &&
      FUNC_4(VAR_8, VAR_5->con_oper) == 0)
   return;
  FUNC_1(VAR_5->con_oper);
 }

 VAR_5->con_oper = FUNC_5(VAR_8);
 VAR_5->con_net_type = VAR_7;

 if (VAR_5->con_net_stat == 1 || VAR_5->con_net_stat == 5) {
  FUNC_2(VAR_0, "%s to \"%s\" (%s)",
      VAR_2[VAR_5->con_net_stat],
      *VAR_5->con_oper, VAR_1[VAR_5->con_net_type]);
  if (VAR_5->con_status != 1) {
   FUNC_0(VAR_5->fd, "AT_OWANCALL=%d,1,1\r\n",
       VAR_5->pdp_ctx);
  }
 }
 else {
  FUNC_2(VAR_0, "%s (%s)",
      VAR_2[VAR_5->con_net_stat],
      VAR_1[VAR_5->con_net_type]);
 }
}
