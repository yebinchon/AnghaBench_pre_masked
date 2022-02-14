
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mxcsr; } ;
struct xstate_header {int xfeatures; } ;
struct xregs_state {TYPE_1__ i387; struct xstate_header header; } ;
union fpregs_state {int fxsave; struct xregs_state xsave; } ;
typedef int u64 ;
struct user_i387_ia32_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct user_i387_ia32_struct*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static inline void
FUNC_3(union fpregs_state *VAR_2,
    struct user_i387_ia32_struct *VAR_3,
    u64 VAR_4, int VAR_5)
{
 struct xregs_state *VAR_6 = &VAR_2->xsave;
 struct xstate_header *VAR_7 = &VAR_6->header;

 if (FUNC_2()) {
  if (VAR_5)
   VAR_7->xfeatures = VAR_0;
  else
   VAR_7->xfeatures &= VAR_4;
 }

 if (FUNC_1()) {




  VAR_6->i387.mxcsr &= VAR_1;

  if (VAR_3)
   FUNC_0(&VAR_2->fxsave, VAR_3);
 }
}
