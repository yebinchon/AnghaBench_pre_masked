
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int send; } ;
struct TYPE_5__ {int Dprotocols; int nrbchan; TYPE_1__ D; } ;
struct TYPE_6__ {TYPE_2__ dev; void* hw; } ;
struct isac_hw {TYPE_3__ dch; int open; int ctrl; int release; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_7 ;

int
FUNC_1(struct isac_hw *VAR_8, void *VAR_9)
{
 FUNC_0(&VAR_8->dch, VAR_1, VAR_5);
 VAR_8->dch.hw = VAR_9;
 VAR_8->dch.dev.D.send = VAR_4;
 VAR_8->init = VAR_3;
 VAR_8->release = VAR_6;
 VAR_8->ctrl = VAR_2;
 VAR_8->open = VAR_7;
 VAR_8->dch.dev.Dprotocols = (1 << VAR_0);
 VAR_8->dch.dev.nrbchan = 2;
 return 0;
}
