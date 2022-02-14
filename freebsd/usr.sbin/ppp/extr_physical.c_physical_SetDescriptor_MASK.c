
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct physical {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0(struct physical *VAR_5)
{
  VAR_5->desc.type = VAR_0;
  VAR_5->desc.UpdateSet = VAR_4;
  VAR_5->desc.IsSet = VAR_3;
  VAR_5->desc.Read = VAR_1;
  VAR_5->desc.Write = VAR_2;
}
