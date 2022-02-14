
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct swdevt {int sw_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,struct thread*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_2, struct swdevt *VAR_3)
{

 FUNC_0(VAR_3->sw_vp, VAR_0 | VAR_1, VAR_2->td_ucred, VAR_2);
 FUNC_1(VAR_3->sw_vp);
}
