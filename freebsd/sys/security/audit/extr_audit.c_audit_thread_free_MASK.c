
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pflags; int * td_ar; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

void
FUNC_1(struct thread *VAR_1)
{

 FUNC_0(VAR_1->td_ar == ((void*)0), ("audit_thread_free: td_ar != NULL"));
 FUNC_0((VAR_1->td_pflags & VAR_0) == 0,
     ("audit_thread_free: TDP_AUDITREC set"));
}
