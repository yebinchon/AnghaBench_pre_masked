
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {TYPE_3__* ac97; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* read ) (TYPE_3__*,int ) ;} ;


 int FUNC_0 (TYPE_3__*,int ) ;

int FUNC_1(struct wm97xx *VAR_0, u16 VAR_1)
{
 if (VAR_0->ac97)
  return VAR_0->ac97->bus->ops->read(VAR_0->ac97, VAR_1);
 else
  return -1;
}
