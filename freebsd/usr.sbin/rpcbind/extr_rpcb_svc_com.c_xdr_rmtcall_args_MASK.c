
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_rmtcall_args {int rmt_args; int rmt_proc; int rmt_vers; int rmt_prog; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t
FUNC_4(XDR *VAR_1, struct r_rmtcall_args *VAR_2)
{

 if (FUNC_2(VAR_1, &(VAR_2->rmt_prog)) &&
     FUNC_3(VAR_1, &(VAR_2->rmt_vers)) &&
     FUNC_1(VAR_1, &(VAR_2->rmt_proc))) {
  return (FUNC_0(VAR_1, &(VAR_2->rmt_args)));
 }
 return (VAR_0);
}
