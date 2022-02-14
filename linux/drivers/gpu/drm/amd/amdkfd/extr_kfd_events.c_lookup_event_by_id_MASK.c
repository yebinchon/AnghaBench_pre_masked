
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kfd_process {int event_idr; } ;
struct kfd_event {int dummy; } ;


 struct kfd_event* FUNC_0 (int *,int ) ;

__attribute__((used)) static struct kfd_event *FUNC_1(struct kfd_process *VAR_0, uint32_t VAR_1)
{
 return FUNC_0(&VAR_0->event_idr, VAR_1);
}
