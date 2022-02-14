
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int** sync_fd; scalar_t__ server_flag; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,char*,int) ;

int
FUNC_4(void)
{
 ssize_t VAR_4;
 int VAR_5;

 FUNC_0("sync: send");

 VAR_5 = VAR_3.sync_fd[VAR_3.server_flag ? VAR_0 : VAR_2][VAR_1];

 VAR_4 = FUNC_3(VAR_5, "", 1);
 if (VAR_4 < 0) {
  FUNC_1("uc_sync_send: write");
  return (-1);
 }
 if (VAR_4 < 1) {
  FUNC_2("uc_sync_send: sent %zd of 1 byte", VAR_4);
  return (-1);
 }

 return (0);
}
