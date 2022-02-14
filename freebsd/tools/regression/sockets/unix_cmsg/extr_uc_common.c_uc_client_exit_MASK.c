
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** sync_fd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(int VAR_6)
{
 if (FUNC_1(VAR_5.sync_fd[VAR_4][VAR_3]) < 0 ||
     FUNC_1(VAR_5.sync_fd[VAR_1][VAR_2]) < 0) {
  FUNC_3("client_exit: close");
  VAR_6 = -1;
 }
 VAR_6 = VAR_6 == 0 ? VAR_0 : -VAR_6;
 FUNC_2("exit: code %d", VAR_6);
 FUNC_0(VAR_6);
}
