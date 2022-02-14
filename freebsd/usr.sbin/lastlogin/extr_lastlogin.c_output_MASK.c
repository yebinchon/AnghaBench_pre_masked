
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct utmpx {int ut_host; int ut_line; int ut_user; TYPE_1__ ut_tv; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,char*,unsigned long) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct utmpx *VAR_0)
{
 time_t VAR_1 = VAR_0->ut_tv.tv_sec;

 FUNC_4("lastlogin");
 FUNC_3("{:user/%-10s/%s} {:tty/%-8s/%s} {:from/%-22.22s/%s}",
  VAR_0->ut_user, VAR_0->ut_line, VAR_0->ut_host);
 FUNC_1("seconds", "%lu", (unsigned long)VAR_1);
 FUNC_3(" {:login-time/%.24s/%.24s}\n", FUNC_0(&VAR_1));
 FUNC_2("lastlogin");
}
