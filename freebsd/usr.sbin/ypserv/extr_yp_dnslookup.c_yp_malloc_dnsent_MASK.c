
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circleq_dnsentry {int dummy; } ;


 struct circleq_dnsentry* FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct
circleq_dnsentry *FUNC_2(void)
{
 register struct circleq_dnsentry *VAR_0;

 VAR_0 = FUNC_0(sizeof(struct circleq_dnsentry));

 if (VAR_0 == ((void*)0)) {
  FUNC_1("failed to malloc() circleq dns entry");
  return(((void*)0));
 }

 return(VAR_0);
}
