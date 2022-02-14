
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt_regs {int* gpr; } ;
struct TYPE_2__ {int flags; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int,int,int) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pt_regs*,int) ;
 int FUNC_7 (struct pt_regs*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;

long FUNC_10(struct pt_regs *VAR_5)
{
 u32 VAR_6;

 FUNC_9();

 VAR_6 = FUNC_0(FUNC_2()->flags) &
  (VAR_3 | VAR_4);

 if (VAR_6) {
  int VAR_7 = FUNC_7(VAR_5);

  if (FUNC_8(VAR_6 & VAR_3)) {
   return -1;
  }

  if (VAR_7) {






   goto skip;
  }
 }


 if (FUNC_3(VAR_5))
  return -1;


 if (VAR_5->gpr[0] >= VAR_1)
  goto skip;

 if (FUNC_8(FUNC_5(VAR_2)))
  FUNC_6(VAR_5, VAR_5->gpr[0]);







  FUNC_1(VAR_5->gpr[0],
        VAR_5->gpr[3] & 0xffffffff,
        VAR_5->gpr[4] & 0xffffffff,
        VAR_5->gpr[5] & 0xffffffff,
        VAR_5->gpr[6] & 0xffffffff);


 return VAR_5->gpr[0];

skip:




 VAR_5->gpr[3] = -VAR_0;
 return -1;
}
