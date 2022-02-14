
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm75_snmp_sensor {int parent; int pnpinfo; int location; int desc; } ;


 int FUNC_0 (int ,size_t*,int,char*) ;

__attribute__((used)) static void
FUNC_1(struct lm75_snmp_sensor *VAR_0, int VAR_1)
{
 size_t VAR_2;

 VAR_2 = sizeof(VAR_0->desc);
 FUNC_0(VAR_0->desc, &VAR_2, VAR_1, "%desc");

 VAR_2 = sizeof(VAR_0->location);
 FUNC_0(VAR_0->location, &VAR_2, VAR_1, "%location");

 VAR_2 = sizeof(VAR_0->pnpinfo);
 FUNC_0(VAR_0->pnpinfo, &VAR_2, VAR_1, "%pnpinfo");

 VAR_2 = sizeof(VAR_0->parent);
 FUNC_0(VAR_0->parent, &VAR_2, VAR_1, "%parent");
}
