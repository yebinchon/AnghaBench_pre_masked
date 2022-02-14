
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct op_msrs {TYPE_1__* controls; TYPE_2__* counters; } ;
struct TYPE_6__ {int enabled; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_4__ {scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct op_msrs* const) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct op_msrs * const VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (!FUNC_4(VAR_2 + VAR_6))
   goto fail;
  if (!FUNC_3(VAR_1 + VAR_6)) {
   FUNC_2(VAR_2 + VAR_6);
   goto fail;
  }

  VAR_5->counters[VAR_6].addr = VAR_2 + VAR_6;
  VAR_5->controls[VAR_6].addr = VAR_1 + VAR_6;
  continue;
 fail:
  if (!VAR_3[VAR_6].enabled)
   continue;
  FUNC_0(VAR_6);
  FUNC_1(VAR_5);
  return -VAR_0;
 }

 return 0;
}
