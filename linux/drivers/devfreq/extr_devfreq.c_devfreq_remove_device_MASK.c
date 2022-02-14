
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfreq {int dev; TYPE_1__* governor; } ;
struct TYPE_2__ {int (* event_handler ) (struct devfreq*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct devfreq*,int ,int *) ;

int FUNC_2(struct devfreq *VAR_2)
{
 if (!VAR_2)
  return -VAR_1;

 if (VAR_2->governor)
  VAR_2->governor->event_handler(VAR_2,
       VAR_0, ((void*)0));
 FUNC_0(&VAR_2->dev);

 return 0;
}
