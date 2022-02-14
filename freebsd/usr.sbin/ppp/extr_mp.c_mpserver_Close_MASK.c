
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sun_path; } ;
struct TYPE_4__ {int * dl; } ;
struct mpserver {int fd; TYPE_2__ socket; TYPE_1__ send; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,char,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct mpserver *VAR_2)
{
  if (VAR_2->send.dl != ((void*)0)) {
    FUNC_1(VAR_2->send.dl, VAR_2->fd, &VAR_2->socket);
    VAR_2->send.dl = ((void*)0);
    VAR_2->fd = -1;
  } else if (VAR_2->fd >= 0) {
    FUNC_2(VAR_2->fd);
    if (FUNC_0(VAR_2->socket.sun_path) == -1)
      FUNC_3(VAR_0, "%s: Failed to remove: %s\n", VAR_2->socket.sun_path,
                FUNC_5(VAR_1));
    FUNC_4(&VAR_2->socket, '\0', sizeof VAR_2->socket);
    VAR_2->fd = -1;
  }
}
