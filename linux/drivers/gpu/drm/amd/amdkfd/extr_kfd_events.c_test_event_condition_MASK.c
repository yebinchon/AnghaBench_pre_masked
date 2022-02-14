
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct kfd_event_waiter {scalar_t__ activated; int event; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static uint32_t FUNC_0(bool VAR_3, uint32_t VAR_4,
    struct kfd_event_waiter *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (!VAR_5[VAR_6].event)
   return VAR_1;

  if (VAR_5[VAR_6].activated) {
   if (!VAR_3)
    return VAR_0;

   VAR_7++;
  }
 }

 return VAR_7 == VAR_4 ?
  VAR_0 : VAR_2;
}
