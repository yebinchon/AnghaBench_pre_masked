
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu; } ;
struct TYPE_4__ {TYPE_1__ hard; } ;
struct thread_info {TYPE_2__ vfpstate; } ;


 int VAR_0 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 (struct thread_info*) ;

__attribute__((used)) static void FUNC_2(struct thread_info *VAR_1)
{
 struct thread_info *VAR_2 = FUNC_0();

 FUNC_1(VAR_2);
 VAR_1->vfpstate = VAR_2->vfpstate;



}
