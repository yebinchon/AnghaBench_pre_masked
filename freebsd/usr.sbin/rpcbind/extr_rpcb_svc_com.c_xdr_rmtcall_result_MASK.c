
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct r_rmtcall_args {scalar_t__ rmt_localvers; int rmt_args; int rmt_uaddr; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int*,int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t
FUNC_4(XDR *VAR_5, struct r_rmtcall_args *VAR_6)
{
 bool_t VAR_7;
  if ((VAR_6->rmt_localvers == VAR_2) ||
      (VAR_6->rmt_localvers == VAR_3)) {
  VAR_7 = FUNC_3(VAR_5, &(VAR_6->rmt_uaddr));
 } else {
  return (VAR_0);
 }
 if (VAR_7 == VAR_4)
  return (FUNC_1(VAR_5, &(VAR_6->rmt_args)));
 return (VAR_0);
}
