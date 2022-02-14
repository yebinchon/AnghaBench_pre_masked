
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int dummy; } ;
struct ip_fw {struct ip_fw* next; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*,struct ip_fw*) ;

void
FUNC_2(struct ip_fw_chain *VAR_0, struct ip_fw **VAR_1,
    struct ip_fw *VAR_2)
{

 FUNC_0(VAR_0);


 FUNC_1(VAR_0, VAR_2);

 VAR_2->next = *VAR_1;
 *VAR_1 = VAR_2;
}
