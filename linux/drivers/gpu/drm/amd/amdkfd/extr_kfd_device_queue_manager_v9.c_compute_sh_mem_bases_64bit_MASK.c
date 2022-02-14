
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kfd_process_device {int lds_base; int scratch_base; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(struct kfd_process_device *VAR_1)
{
 uint32_t VAR_2 = VAR_1->lds_base >> 48;
 uint32_t VAR_3 = VAR_1->scratch_base >> 48;

 return (VAR_2 << VAR_0) |
  VAR_3;
}
