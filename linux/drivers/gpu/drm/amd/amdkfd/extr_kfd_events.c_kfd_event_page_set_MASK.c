
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct kfd_signal_page {void* kernel_address; } ;
struct kfd_process {int signal_mapped_size; struct kfd_signal_page* signal_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct kfd_signal_page* FUNC_0 (int,int ) ;
 int FUNC_1 (void*,int ,int) ;

int FUNC_2(struct kfd_process *VAR_5, void *VAR_6,
         uint64_t VAR_7)
{
 struct kfd_signal_page *VAR_8;

 if (VAR_5->signal_page)
  return -VAR_0;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 FUNC_1(VAR_6, (uint8_t) VAR_4,
        VAR_3 * 8);

 VAR_8->kernel_address = VAR_6;

 VAR_5->signal_page = VAR_8;
 VAR_5->signal_mapped_size = VAR_7;

 return 0;
}
