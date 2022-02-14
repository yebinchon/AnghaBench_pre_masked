
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct physical {int dummy; } ;
struct TYPE_6__ {char* local; char* peer; } ;
struct TYPE_5__ {int fd; scalar_t__ pid; } ;
struct TYPE_4__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct chap {scalar_t__ peertries; scalar_t__ NTRespSent; TYPE_3__ challenge; int auth; TYPE_2__ child; TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct physical*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_1(struct chap *VAR_8, struct physical *VAR_9)
{
  VAR_8->desc.type = VAR_0;
  VAR_8->desc.UpdateSet = VAR_6;
  VAR_8->desc.IsSet = VAR_3;
  VAR_8->desc.Read = VAR_4;
  VAR_8->desc.Write = VAR_7;
  VAR_8->child.pid = 0;
  VAR_8->child.fd = -1;
  FUNC_0(&VAR_8->auth, VAR_9, VAR_1, VAR_5, VAR_2);
  *VAR_8->challenge.local = *VAR_8->challenge.peer = '\0';

  VAR_8->NTRespSent = 0;
  VAR_8->peertries = 0;

}
