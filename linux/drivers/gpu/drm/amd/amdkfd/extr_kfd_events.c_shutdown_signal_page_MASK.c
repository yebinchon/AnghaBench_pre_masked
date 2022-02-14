
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_signal_page {scalar_t__ kernel_address; scalar_t__ need_to_free_pages; } ;
struct kfd_process {struct kfd_signal_page* signal_page; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kfd_signal_page*) ;

__attribute__((used)) static void FUNC_3(struct kfd_process *VAR_1)
{
 struct kfd_signal_page *VAR_2 = VAR_1->signal_page;

 if (VAR_2) {
  if (VAR_2->need_to_free_pages)
   FUNC_0((unsigned long)VAR_2->kernel_address,
       FUNC_1(VAR_0 * 8));
  FUNC_2(VAR_2);
 }
}
