
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int link_subtype; } ;
struct coresight_device {int enable; int * refcnt; TYPE_2__* pdata; TYPE_1__ subtype; } ;
struct TYPE_6__ {int (* disable ) (struct coresight_device*,int,int) ;} ;
struct TYPE_5__ {int nr_inport; int nr_outport; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct coresight_device*,struct coresight_device*) ;
 int FUNC_3 (struct coresight_device*,struct coresight_device*) ;
 TYPE_3__* FUNC_4 (struct coresight_device*) ;
 int FUNC_5 (struct coresight_device*,int,int) ;

__attribute__((used)) static void FUNC_6(struct coresight_device *VAR_2,
       struct coresight_device *VAR_3,
       struct coresight_device *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;
 int VAR_8, VAR_9, VAR_10;

 if (!VAR_3 || !VAR_4)
  return;

 VAR_9 = FUNC_2(VAR_2, VAR_3);
 VAR_10 = FUNC_3(VAR_2, VAR_4);
 VAR_7 = VAR_2->subtype.link_subtype;

 if (VAR_7 == VAR_0) {
  VAR_8 = VAR_9;
  VAR_6 = VAR_2->pdata->nr_inport;
 } else if (VAR_7 == VAR_1) {
  VAR_8 = VAR_10;
  VAR_6 = VAR_2->pdata->nr_outport;
 } else {
  VAR_8 = 0;
  VAR_6 = 1;
 }

 if (FUNC_0(&VAR_2->refcnt[VAR_8]) == 0) {
  if (FUNC_4(VAR_2)->disable)
   FUNC_4(VAR_2)->disable(VAR_2, VAR_9, VAR_10);
 }

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  if (FUNC_1(&VAR_2->refcnt[VAR_5]) != 0)
   return;

 VAR_2->enable = 0;
}
