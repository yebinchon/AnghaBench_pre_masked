
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reflog_expire_cfg {int expire_unreachable; int expire_total; int pattern; struct reflog_expire_cfg* next; } ;
struct cmd_reflog_expire_cb {int expire_unreachable; int expire_total; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct reflog_expire_cfg* VAR_4 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_2(struct cmd_reflog_expire_cb *VAR_5, int VAR_6, const char *VAR_7)
{
 struct reflog_expire_cfg *VAR_8;

 if (VAR_6 == (VAR_0|VAR_1))
  return;

 for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next) {
  if (!FUNC_1(VAR_8->pattern, VAR_7, 0)) {
   if (!(VAR_6 & VAR_0))
    VAR_5->expire_total = VAR_8->expire_total;
   if (!(VAR_6 & VAR_1))
    VAR_5->expire_unreachable = VAR_8->expire_unreachable;
   return;
  }
 }




 if (!FUNC_0(VAR_7, "refs/stash")) {
  if (!(VAR_6 & VAR_0))
   VAR_5->expire_total = 0;
  if (!(VAR_6 & VAR_1))
   VAR_5->expire_unreachable = 0;
  return;
 }


 if (!(VAR_6 & VAR_0))
  VAR_5->expire_total = VAR_2;
 if (!(VAR_6 & VAR_1))
  VAR_5->expire_unreachable = VAR_3;
}
