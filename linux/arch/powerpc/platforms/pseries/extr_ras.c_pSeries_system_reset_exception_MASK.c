
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_error_log {int dummy; } ;
struct pt_regs {int nip; scalar_t__ msr; } ;
typedef scalar_t__ __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 struct rtas_error_log* FUNC_1 (struct pt_regs*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

int FUNC_4(struct pt_regs *VAR_10)
{







 if ((FUNC_0(VAR_10->msr) &
   (VAR_4|VAR_7|VAR_0|VAR_3|VAR_5|VAR_6|
    VAR_2|VAR_1|VAR_8)) == (VAR_0|VAR_8)) {
  VAR_10->nip = FUNC_0((__be64)VAR_10->nip);
  VAR_10->msr = 0;
 }


 if (VAR_9) {
  struct rtas_error_log *VAR_11 = FUNC_1(VAR_10);
  if (VAR_11) {

  }
  FUNC_2();
 }

 if (FUNC_3(VAR_10))
  return 1;

 return 0;
}
