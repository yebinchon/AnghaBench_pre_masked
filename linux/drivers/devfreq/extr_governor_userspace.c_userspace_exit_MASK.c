
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sd; } ;
struct TYPE_3__ {TYPE_2__ kobj; } ;
struct devfreq {int * data; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(struct devfreq *VAR_1)
{




 if (VAR_1->dev.kobj.sd)
  FUNC_1(&VAR_1->dev.kobj, &VAR_0);

 FUNC_0(VAR_1->data);
 VAR_1->data = ((void*)0);
}
