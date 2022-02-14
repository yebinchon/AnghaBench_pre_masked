
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vfp_state {int dummy; } vfp_state ;
struct thread_info {union vfp_state vfpstate; } ;


 unsigned int FUNC_0 () ;
 int FUNC_1 () ;
 union vfp_state** VAR_0 ;

__attribute__((used)) static void FUNC_2(struct thread_info *VAR_1)
{

 union vfp_state *VAR_2 = &VAR_1->vfpstate;
 unsigned int VAR_3 = FUNC_0();

 if (VAR_0[VAR_3] == VAR_2)
  VAR_0[VAR_3] = ((void*)0);
 FUNC_1();
}
