
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct kfd_process {int event_idr; } ;
struct kfd_event {int event_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct kfd_event*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct kfd_process *VAR_3, struct kfd_event *VAR_4)
{





 int VAR_5 = FUNC_0(&VAR_3->event_idr, VAR_4, VAR_1,
      (uint32_t)VAR_2 + 1,
      VAR_0);

 if (VAR_5 < 0)
  return VAR_5;
 VAR_4->event_id = VAR_5;

 return 0;
}
