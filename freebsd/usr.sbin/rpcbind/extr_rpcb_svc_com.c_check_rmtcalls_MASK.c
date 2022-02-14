
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {int fd; scalar_t__ revents; } ;
struct TYPE_4__ {char* xp_netid; } ;
typedef TYPE_1__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct pollfd *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7;
 SVCXPRT *VAR_8;

 if (VAR_1 == 0)
  return (0);

 VAR_7 = VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if ((VAR_8 = FUNC_0(VAR_3[VAR_5].fd)) != ((void*)0)) {
   if (VAR_3[VAR_5].revents) {
    VAR_6++;






    FUNC_2(VAR_3[VAR_5].fd, VAR_8);
    VAR_3[VAR_5].revents = 0;
    if (VAR_6 >= VAR_7) {
     break;
    }
   }
  }
 }
 return (VAR_6);
}
