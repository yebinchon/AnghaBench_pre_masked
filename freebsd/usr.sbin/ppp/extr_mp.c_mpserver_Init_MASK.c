
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dl; } ;
struct TYPE_4__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct mpserver {int fd; int socket; TYPE_1__ send; TYPE_2__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_1(struct mpserver *VAR_5)
{
  VAR_5->desc.type = VAR_0;
  VAR_5->desc.UpdateSet = VAR_3;
  VAR_5->desc.IsSet = VAR_1;
  VAR_5->desc.Read = VAR_2;
  VAR_5->desc.Write = VAR_4;
  VAR_5->send.dl = ((void*)0);
  VAR_5->fd = -1;
  FUNC_0(&VAR_5->socket, '\0', sizeof VAR_5->socket);
}
