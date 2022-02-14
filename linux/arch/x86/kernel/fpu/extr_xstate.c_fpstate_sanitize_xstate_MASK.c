
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct fxregs_state {int cwd; int * xmm_space; int * st_space; scalar_t__ rdp; scalar_t__ rip; scalar_t__ fop; scalar_t__ twd; scalar_t__ swd; } ;
struct TYPE_5__ {int xfeatures; } ;
struct TYPE_6__ {TYPE_1__ header; } ;
struct TYPE_7__ {TYPE_2__ xsave; struct fxregs_state fxsave; } ;
struct fpu {TYPE_3__ state; } ;
struct TYPE_8__ {int xsave; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

void FUNC_3(struct fpu *VAR_6)
{
 struct fxregs_state *VAR_7 = &VAR_6->state.fxsave;
 int VAR_8;
 u64 VAR_9;

 if (!FUNC_2())
  return;

 VAR_9 = VAR_6->state.xsave.header.xfeatures;





 if ((VAR_9 & VAR_3) == VAR_3)
  return;




 if (!(VAR_9 & VAR_0)) {
  VAR_7->cwd = 0x37f;
  VAR_7->swd = 0;
  VAR_7->twd = 0;
  VAR_7->fop = 0;
  VAR_7->rip = 0;
  VAR_7->rdp = 0;
  FUNC_1(&VAR_7->st_space[0], 0, 128);
 }




 if (!(VAR_9 & VAR_1))
  FUNC_1(&VAR_7->xmm_space[0], 0, 256);





 VAR_8 = 0x2;
 VAR_9 = (VAR_3 & ~VAR_9) >> 2;






 while (VAR_9) {
  if (VAR_9 & 0x1) {
   int VAR_10 = VAR_4[VAR_8];
   int VAR_11 = VAR_5[VAR_8];

   FUNC_0((void *)VAR_7 + VAR_10,
          (void *)&VAR_2.xsave + VAR_10,
          VAR_11);
  }

  VAR_9 >>= 1;
  VAR_8++;
 }
}
