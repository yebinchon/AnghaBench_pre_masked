
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_th_subdevice {scalar_t__ type; scalar_t__ otype; } ;
struct intel_th_device {int dummy; } ;
struct intel_th {int num_thdevs; struct intel_th_device** thdev; } ;


 int FUNC_0 (struct intel_th_subdevice*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct intel_th*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct intel_th_device*) ;
 int FUNC_3 (struct intel_th_device*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct intel_th_device* FUNC_4 (struct intel_th*,struct intel_th_subdevice const*) ;
 struct intel_th_subdevice* VAR_5 ;

__attribute__((used)) static int FUNC_5(struct intel_th *VAR_6)
{
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++) {
  const struct intel_th_subdevice *VAR_8 =
   &VAR_5[VAR_7];
  struct intel_th_device *VAR_9;


  if ((FUNC_1(VAR_6, VAR_4) || VAR_3) &&
      VAR_8->type == VAR_2)
   continue;





  if (VAR_8->type == VAR_2 &&
      VAR_8->otype != VAR_1)
   continue;

  VAR_9 = FUNC_4(VAR_6, VAR_8);

  if (FUNC_2(VAR_9)) {

   if (FUNC_3(VAR_9) == -VAR_0)
    continue;

   return FUNC_3(VAR_9);
  }

  VAR_6->thdev[VAR_6->num_thdevs++] = VAR_9;
 }

 return 0;
}
