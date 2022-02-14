
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process_device {int lds_base; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct kfd_process_device *VAR_0)
{
 return (VAR_0->lds_base >> 16) & 0xFF;
}
