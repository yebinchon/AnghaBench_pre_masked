
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct utmpx {int ut_type; int ut_pid; char* ut_user; char* ut_line; char* ut_host; TYPE_1__ ut_tv; } ;
typedef int intmax_t ;




 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const struct utmpx *VAR_2)
{

 if (VAR_2->ut_type == VAR_0)
  return;

 FUNC_1("[%jd.%06u -- %.24s] ",
     (intmax_t)VAR_2->ut_tv.tv_sec, (unsigned int)VAR_2->ut_tv.tv_usec,
     FUNC_0(&VAR_2->ut_tv.tv_sec));

 switch (VAR_2->ut_type) {
 case 135:
  FUNC_1("system boot\n");
  return;
 case 129:
  FUNC_1("system shutdown\n");
  return;
 case 130:
  FUNC_1("old system time\n");
  return;
 case 131:
  FUNC_1("new system time\n");
  return;
 case 128:
  FUNC_1("user process: id=\"");
  VAR_1;
  FUNC_1("\" pid=\"%d\" user=\"%s\" line=\"%s\" host=\"%s\"\n",
      VAR_2->ut_pid, VAR_2->ut_user, VAR_2->ut_line, VAR_2->ut_host);
  break;
 case 133:
  FUNC_1("init process: id=\"");
  VAR_1;
  FUNC_1("\" pid=\"%d\"\n", VAR_2->ut_pid);
  break;
 case 132:
  FUNC_1("login process: id=\"");
  VAR_1;
  FUNC_1("\" pid=\"%d\" user=\"%s\" line=\"%s\" host=\"%s\"\n",
      VAR_2->ut_pid, VAR_2->ut_user, VAR_2->ut_line, VAR_2->ut_host);
  break;
 case 134:
  FUNC_1("dead process: id=\"");
  VAR_1;
  FUNC_1("\" pid=\"%d\"\n", VAR_2->ut_pid);
  break;
 default:
  FUNC_1("unknown record type %hu\n", VAR_2->ut_type);
  break;
 }
}
