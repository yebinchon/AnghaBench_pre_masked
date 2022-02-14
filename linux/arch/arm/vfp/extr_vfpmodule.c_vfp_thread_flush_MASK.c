
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fpexc; int cpu; int fpscr; } ;
union vfp_state {TYPE_1__ hard; } ;
struct thread_info {union vfp_state vfpstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (union vfp_state*,int ,int) ;
 int FUNC_4 () ;
 union vfp_state** VAR_4 ;

__attribute__((used)) static void FUNC_5(struct thread_info *VAR_5)
{
 union vfp_state *VAR_6 = &VAR_5->vfpstate;
 unsigned int VAR_7;
 VAR_7 = FUNC_2();
 if (VAR_4[VAR_7] == VAR_6)
  VAR_4[VAR_7] = ((void*)0);
 FUNC_1(VAR_0, FUNC_0(VAR_0) & ~VAR_1);
 FUNC_4();

 FUNC_3(VAR_6, 0, sizeof(union vfp_state));

 VAR_6->hard.fpexc = VAR_1;
 VAR_6->hard.fpscr = VAR_2;



}
