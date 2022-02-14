
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {int signal_mapped_size; scalar_t__ signal_page; int event_idr; } ;
struct kfd_event {int event_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kfd_process*) ;
 int FUNC_1 (int *,struct kfd_event*,int ,int,int ) ;
 int * FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct kfd_process *VAR_3,
         struct kfd_event *VAR_4)
{
 int VAR_5;

 if (!VAR_3->signal_page) {
  VAR_3->signal_page = FUNC_0(VAR_3);
  if (!VAR_3->signal_page)
   return -VAR_0;

  VAR_3->signal_mapped_size = 256*8;
 }







 VAR_5 = FUNC_1(&VAR_3->event_idr, VAR_4, 0, VAR_3->signal_mapped_size / 8,
         VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->event_id = VAR_5;
 FUNC_2(VAR_3->signal_page)[VAR_5] = VAR_2;

 return 0;
}
