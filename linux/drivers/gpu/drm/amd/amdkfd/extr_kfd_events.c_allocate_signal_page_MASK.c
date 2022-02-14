
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct kfd_signal_page {int need_to_free_pages; void* kernel_address; } ;
struct kfd_process {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kfd_signal_page*) ;
 struct kfd_signal_page* FUNC_3 (int,int ) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (char*,struct kfd_signal_page*,struct kfd_process*) ;

__attribute__((used)) static struct kfd_signal_page *FUNC_6(struct kfd_process *VAR_3)
{
 void *VAR_4;
 struct kfd_signal_page *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_4 = (void *) FUNC_0(VAR_0,
     FUNC_1(VAR_1 * 8));
 if (!VAR_4)
  goto fail_alloc_signal_store;


 FUNC_4(VAR_4, (uint8_t) VAR_2,
        VAR_1 * 8);

 VAR_5->kernel_address = VAR_4;
 VAR_5->need_to_free_pages = 1;
 FUNC_5("Allocated new event signal page at %p, for process %p\n",
   VAR_5, VAR_3);

 return VAR_5;

fail_alloc_signal_store:
 FUNC_2(VAR_5);
 return ((void*)0);
}
