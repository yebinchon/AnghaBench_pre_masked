
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct kfd_event_waiter {int activated; int wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct kfd_event_waiter* FUNC_1 (size_t,int,int ) ;

__attribute__((used)) static struct kfd_event_waiter *FUNC_2(uint32_t VAR_1)
{
 struct kfd_event_waiter *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_1(VAR_1,
     sizeof(struct kfd_event_waiter),
     VAR_0);

 for (VAR_3 = 0; (VAR_2) && (VAR_3 < VAR_1) ; VAR_3++) {
  FUNC_0(&VAR_2[VAR_3].wait);
  VAR_2[VAR_3].activated = 0;
 }

 return VAR_2;
}
