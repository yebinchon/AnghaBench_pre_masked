
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kfd_process {int event_idr; int signal_page; } ;
struct kfd_event {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kfd_event* FUNC_0 (int *,int) ;
 scalar_t__* FUNC_1 (int ) ;

__attribute__((used)) static struct kfd_event *FUNC_2(
 struct kfd_process *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 struct kfd_event *VAR_5;

 if (!VAR_2->signal_page || VAR_3 >= VAR_0)
  return ((void*)0);




 if (VAR_4 > 31 || (1U << VAR_4) >= VAR_0) {
  if (FUNC_1(VAR_2->signal_page)[VAR_3] == VAR_1)
   return ((void*)0);

  return FUNC_0(&VAR_2->event_idr, VAR_3);
 }




 for (VAR_5 = ((void*)0); VAR_3 < VAR_0 && !VAR_5; VAR_3 += 1U << VAR_4) {
  if (FUNC_1(VAR_2->signal_page)[VAR_3] == VAR_1)
   continue;

  VAR_5 = FUNC_0(&VAR_2->event_idr, VAR_3);
 }

 return VAR_5;
}
