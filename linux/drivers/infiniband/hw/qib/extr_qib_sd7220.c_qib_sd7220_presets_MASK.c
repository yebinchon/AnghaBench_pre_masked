
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {scalar_t__ presets_needed; } ;


 int FUNC_0 (struct qib_devdata*,int) ;
 int FUNC_1 (struct qib_devdata*) ;
 int FUNC_2 (struct qib_devdata*,char*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct qib_devdata *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->cspec->presets_needed)
  return VAR_1;
 VAR_0->cspec->presets_needed = 0;

 FUNC_0(VAR_0, 1);
 FUNC_3(2);
 FUNC_2(VAR_0, "link-down");

 VAR_1 = FUNC_1(VAR_0);
 return VAR_1;
}
