
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
 int FUNC_0 (int,char*,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;

int
FUNC_4(void)
{
 ssize_t VAR_4;
 int VAR_5;
 char VAR_6;

 FUNC_1("sync: wait");

 VAR_5 = VAR_3.sync_fd[VAR_3.server_flag ? VAR_2 : VAR_0][VAR_1];

 VAR_4 = FUNC_0(VAR_5, &VAR_6, 1);
 if (VAR_4 < 0) {
  FUNC_2("sync_recv: read");
  return (-1);
 }
 if (VAR_4 < 1) {
  FUNC_3("sync_recv: read %zd of 1 byte", VAR_4);
  return (-1);
 }

 FUNC_1("sync: received");

 return (0);
}
