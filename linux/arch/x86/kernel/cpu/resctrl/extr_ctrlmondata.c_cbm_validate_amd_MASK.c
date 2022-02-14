
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct rdt_resource {unsigned long default_ctrl; } ;


 int FUNC_0 (char*,int,unsigned long*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

bool FUNC_3(char *VAR_0, u32 *VAR_1, struct rdt_resource *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, 16, &VAR_3);
 if (VAR_4) {
  FUNC_1("Non-hex character in the mask %s\n", VAR_0);
  return 0;
 }

 if (VAR_3 > VAR_2->default_ctrl) {
  FUNC_2("Mask out of range\n");
  return 0;
 }

 *VAR_1 = VAR_3;
 return 1;
}
