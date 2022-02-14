
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int n_rules; struct ip_fw** map; int id; } ;
struct ip_fw {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;

__attribute__((used)) static struct ip_fw **
FUNC_3(struct ip_fw_chain *VAR_0, struct ip_fw **VAR_1, int VAR_2)
{
 struct ip_fw **VAR_3;

 FUNC_0(VAR_0);
 VAR_0->id++;
 VAR_0->n_rules = VAR_2;
 VAR_3 = VAR_0->map;
 VAR_0->map = VAR_1;
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 return VAR_3;
}
