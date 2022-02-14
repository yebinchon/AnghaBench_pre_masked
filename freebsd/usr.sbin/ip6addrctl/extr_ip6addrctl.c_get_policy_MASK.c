
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addrpolicy {int dummy; } ;
struct policyqueue {struct in6_addrpolicy pc_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct policyqueue*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct in6_addrpolicy*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int*,int ,struct in6_addrpolicy*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 int VAR_6[] = { VAR_0, VAR_3, VAR_1, VAR_2 };
 size_t VAR_7;
 struct in6_addrpolicy *VAR_8;
 struct in6_addrpolicy *VAR_9, *VAR_10;

 if (FUNC_7(VAR_6, FUNC_5(VAR_6), ((void*)0), &VAR_7, ((void*)0), 0) < 0) {
  FUNC_1(1, "sysctl(IPV6CTL_ADDRCTLPOLICY)");

 }
 if (VAR_7 == 0) {
  FUNC_6("no source-address-selection policy is installed\n");
  return;
 }
 if ((VAR_8 = FUNC_4(VAR_7)) == ((void*)0)) {
  FUNC_2(1, "malloc failed");

 }
 if (FUNC_7(VAR_6, FUNC_5(VAR_6), VAR_8, &VAR_7, ((void*)0), 0) < 0) {
  FUNC_1(1, "sysctl(IPV6CTL_ADDRCTLPOLICY)");

 }

 VAR_10 = VAR_8 + VAR_7/sizeof(*VAR_8);
 for (VAR_9 = VAR_8; VAR_9 + 1 <= VAR_10; VAR_9++) {
  struct policyqueue *VAR_11;

  if ((VAR_11 = FUNC_4(sizeof(*VAR_11))) == ((void*)0))
   FUNC_2(1, "malloc failed\n");
  VAR_11->pc_policy = *VAR_9;
  FUNC_0(&VAR_5, VAR_11, VAR_4);
 }

 FUNC_3(VAR_8);
}
