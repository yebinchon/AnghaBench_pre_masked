
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {int dummy; } ;
struct TYPE_2__ {int (* machine_kexec ) (struct kimage*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kimage*) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (struct kimage*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct kimage *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1();
 FUNC_5();

 if (VAR_0.machine_kexec)
  VAR_0.machine_kexec(VAR_1);
 else
  FUNC_2(VAR_1);

 FUNC_6();
 FUNC_0(VAR_2);


 FUNC_3(((void*)0));
 for(;;);
}
