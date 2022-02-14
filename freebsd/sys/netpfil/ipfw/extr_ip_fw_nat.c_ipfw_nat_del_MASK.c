
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int dummy; } ;
struct ip_fw_chain {int nat; } ;
struct cfg_nat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct cfg_nat*,int ) ;
 struct ip_fw_chain VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct ip_fw_chain*,int) ;
 int FUNC_6 (struct cfg_nat*) ;
 struct cfg_nat* FUNC_7 (int *,int) ;
 int FUNC_8 (struct sockopt*,int*,int,int) ;

__attribute__((used)) static int
FUNC_9(struct sockopt *VAR_3)
{
 struct cfg_nat *VAR_4;
 struct ip_fw_chain *VAR_5 = &VAR_1;
 int VAR_6;

 FUNC_8(VAR_3, &VAR_6, sizeof VAR_6, sizeof VAR_6);

 FUNC_0(VAR_5);
 VAR_4 = FUNC_7(&VAR_5->nat, VAR_6);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_5);
  return (VAR_0);
 }
 FUNC_2(VAR_5);
 FUNC_4(VAR_4, VAR_2);
 FUNC_5(VAR_5, VAR_6);
 FUNC_3(VAR_5);
 FUNC_1(VAR_5);
 FUNC_6(VAR_4);
 return (0);
}
