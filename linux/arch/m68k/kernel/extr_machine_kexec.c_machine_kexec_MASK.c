
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int head; int start; int control_code_page; } ;
typedef int (* relocate_kernel_t ) (int,int ,unsigned long) ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,int ,unsigned long) ;

void FUNC_6(struct kimage *VAR_5)
{
 void *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_3(VAR_5->control_code_page);

 FUNC_2(VAR_6, VAR_3,
        VAR_4);




 FUNC_1();

 FUNC_4("Will call new kernel at 0x%08lx. Bye...\n", VAR_5->start);
 FUNC_0();
 VAR_7 = VAR_1 | VAR_2 << 8;
 ((relocate_kernel_t) VAR_6)(VAR_5->head & VAR_0,
       VAR_5->start,
       VAR_7);
}
