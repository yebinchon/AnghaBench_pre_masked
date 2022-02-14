
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct kvm_pmu {int dummy; } ;
struct TYPE_3__ {scalar_t__ eventsel; scalar_t__ unit_mask; int event_type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned FUNC_1(struct kvm_pmu *VAR_2,
        u8 VAR_3,
        u8 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  if (VAR_1[VAR_5].eventsel == VAR_3
      && VAR_1[VAR_5].unit_mask == VAR_4)
   break;

 if (VAR_5 == FUNC_0(VAR_1))
  return VAR_0;

 return VAR_1[VAR_5].event_type;
}
