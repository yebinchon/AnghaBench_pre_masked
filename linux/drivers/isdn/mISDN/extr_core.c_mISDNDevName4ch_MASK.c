
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mISDNchannel {TYPE_2__* st; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 char const* FUNC_0 (int *) ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;

const char *FUNC_1(struct mISDNchannel *VAR_3)
{
 if (!VAR_3)
  return VAR_0;
 if (!VAR_3->st)
  return VAR_1;
 if (!VAR_3->st->dev)
  return VAR_2;
 return FUNC_0(&VAR_3->st->dev->dev);
}
