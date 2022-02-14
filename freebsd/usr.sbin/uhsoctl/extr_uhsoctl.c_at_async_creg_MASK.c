
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {int con_net_stat; int fd; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,char*,int*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,int,int ,struct ctx*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, const char *VAR_3)
{
 struct ctx *VAR_4 = VAR_2;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3, "+CREG: %*d,%d", &VAR_6);
 if (VAR_5 != 1) {
  VAR_5 = FUNC_1(VAR_3, "+CREG: %d", &VAR_6);
  if (VAR_5 != 1)
   return;
 }

 if (VAR_4->con_net_stat != 1 && VAR_4->con_net_stat != 5) {
  FUNC_2(&VAR_0, 1, 1, VAR_1, VAR_4);
 }
 else {
  FUNC_2(&VAR_0, 1, 30, VAR_1, VAR_4);
 }

 if (VAR_4->con_net_stat == VAR_6)
  return;

 VAR_4->con_net_stat = VAR_6;
 FUNC_0(VAR_4->fd, "AT+COPS?\r\n");
}
