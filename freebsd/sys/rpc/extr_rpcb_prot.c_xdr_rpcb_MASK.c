
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bool_t ;
typedef int XDR ;
struct TYPE_3__ {int r_owner; int r_addr; int r_netid; int r_vers; int r_prog; } ;
typedef TYPE_1__ RPCB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;

bool_t
FUNC_2(XDR *VAR_3, RPCB *VAR_4)
{
 if (!FUNC_1(VAR_3, &VAR_4->r_prog)) {
  return (VAR_0);
 }
 if (!FUNC_1(VAR_3, &VAR_4->r_vers)) {
  return (VAR_0);
 }
 if (!FUNC_0(VAR_3, &VAR_4->r_netid, VAR_1)) {
  return (VAR_0);
 }
 if (!FUNC_0(VAR_3, &VAR_4->r_addr, VAR_1)) {
  return (VAR_0);
 }
 if (!FUNC_0(VAR_3, &VAR_4->r_owner, VAR_1)) {
  return (VAR_0);
 }
 return (VAR_2);
}
