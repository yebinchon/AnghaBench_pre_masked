
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {int dummy; } ;
struct kfd_event {int dummy; } ;


 int FUNC_0 (struct kfd_process*,struct kfd_event*) ;
 scalar_t__ FUNC_1 (struct kfd_event*) ;
 int FUNC_2 (struct kfd_event*) ;

__attribute__((used)) static void FUNC_3(struct kfd_process *VAR_0,
     struct kfd_event *VAR_1)
{
 if (VAR_1 && FUNC_1(VAR_1)) {
  FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_1);
 }
}
