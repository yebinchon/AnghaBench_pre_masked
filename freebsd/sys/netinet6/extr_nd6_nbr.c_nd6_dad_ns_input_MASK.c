
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_opt_nonce {int dummy; } ;
struct ifaddr {int dummy; } ;
struct dadq {int dad_ns_icount; } ;


 scalar_t__ VAR_0 ;
 struct dadq* FUNC_0 (struct ifaddr*,struct nd_opt_nonce*) ;
 int FUNC_1 (struct dadq*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct ifaddr *VAR_1, struct nd_opt_nonce *VAR_2)
{
 struct dadq *VAR_3;

 if (VAR_1 == ((void*)0))
  FUNC_2("ifa == NULL in nd6_dad_ns_input");


 if (VAR_0 == 0)
  VAR_2 = ((void*)0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->dad_ns_icount++;
 FUNC_1(VAR_3);
}
