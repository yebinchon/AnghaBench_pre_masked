
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int start; int head; int control_code_page; } ;
typedef int (* relocate_kernel_t ) (int *,int ) ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 relocate_kernel_t VAR_1;
 struct kimage *VAR_2 = VAR_0;

 FUNC_3();
 VAR_1 = (relocate_kernel_t) FUNC_2(VAR_2->control_code_page);

 FUNC_0(0xfb);

 (*VAR_1)(&VAR_2->head, VAR_2->start);


 FUNC_1();
}
