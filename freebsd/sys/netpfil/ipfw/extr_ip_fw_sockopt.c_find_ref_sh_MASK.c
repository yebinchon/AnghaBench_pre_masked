
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ipfw_sopt_handler {int refcnt; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipfw_sopt_handler* FUNC_2 (int,int,int *) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int
FUNC_4(uint16_t VAR_2, uint8_t VAR_3, struct ipfw_sopt_handler *VAR_4)
{
 struct ipfw_sopt_handler *VAR_5;

 FUNC_0();
 if ((VAR_5 = FUNC_2(VAR_2, VAR_3, ((void*)0))) == ((void*)0)) {
  FUNC_1();
  FUNC_3("ipfw: ipfw_ctl3 invalid option %d""v""%d\n",
      VAR_2, VAR_3);
  return (VAR_0);
 }
 VAR_5->refcnt++;
 VAR_1++;

 *VAR_4 = *VAR_5;
 FUNC_1();

 return (0);
}
