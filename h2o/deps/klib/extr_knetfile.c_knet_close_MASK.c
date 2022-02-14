
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctrl_fd; int fd; scalar_t__ type; struct TYPE_4__* http_host; struct TYPE_4__* path; struct TYPE_4__* retr; struct TYPE_4__* response; struct TYPE_4__* port; struct TYPE_4__* host; } ;
typedef TYPE_1__ knetFile ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

int FUNC_3(knetFile *VAR_1)
{
 if (VAR_1 == 0) return 0;
 if (VAR_1->ctrl_fd != -1) FUNC_2(VAR_1->ctrl_fd);
 if (VAR_1->fd != -1) {


  if (VAR_1->type == VAR_0) FUNC_0(VAR_1->fd);
  else FUNC_2(VAR_1->fd);
 }
 FUNC_1(VAR_1->host); FUNC_1(VAR_1->port);
 FUNC_1(VAR_1->response); FUNC_1(VAR_1->retr);
 FUNC_1(VAR_1->path); FUNC_1(VAR_1->http_host);
 FUNC_1(VAR_1);
 return 0;
}
