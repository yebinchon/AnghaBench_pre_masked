
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int type; } ;
struct intel_th_device {scalar_t__ type; TYPE_1__ output; } ;
struct intel_th {int num_thdevs; struct intel_th_device** thdev; } ;
struct TYPE_6__ {scalar_t__ type; unsigned int otype; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct intel_th_device*) ;
 int FUNC_2 (struct intel_th_device*) ;
 struct intel_th_device* FUNC_3 (struct intel_th*,TYPE_2__*) ;
 TYPE_2__* VAR_2 ;

int FUNC_4(struct intel_th *VAR_3, unsigned int VAR_4)
{
 struct intel_th_device *VAR_5;
 int VAR_6 = 0, VAR_7 = 0;

 for (VAR_6 = 0, VAR_7 = 0; VAR_7 <= VAR_3->num_thdevs; VAR_6++, VAR_7++) {
  for (; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   if (VAR_2[VAR_6].type != VAR_1)
    continue;

   if (VAR_2[VAR_6].otype != VAR_4)
    continue;

   break;
  }


  if (VAR_6 == FUNC_0(VAR_2))
   return -VAR_0;

  for (; VAR_7 < VAR_3->num_thdevs; VAR_7++) {
   if (VAR_3->thdev[VAR_7]->type != VAR_1)
    continue;

   if (VAR_3->thdev[VAR_7]->output.type != VAR_4)
    continue;

   break;
  }





  if (VAR_7 == VAR_3->num_thdevs)
   goto found;
 }

 return -VAR_0;

found:
 VAR_5 = FUNC_3(VAR_3, &VAR_2[VAR_6]);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_3->thdev[VAR_3->num_thdevs++] = VAR_5;

 return 0;
}
