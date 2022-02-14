
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd_group; int fd_owner; int fd_name; int fd_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (char*) ;

int
FUNC_4(void)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_2(VAR_2[VAR_4].fd_name, VAR_0 | VAR_1, VAR_2[VAR_4].fd_mode);
  if (VAR_5 == -1) {
   FUNC_3("open");
   return (VAR_5);
  }
  FUNC_1(VAR_5);
  VAR_5 = FUNC_0(VAR_2[VAR_4].fd_name, VAR_2[VAR_4].fd_owner,
      VAR_2[VAR_4].fd_group);
  if (VAR_5) {
   FUNC_3("chown");
   return (VAR_5);
  }
 }
 return (0);
}
