
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_plat_data {unsigned int type; unsigned int space; int addr_source; int slave_addr; int irq; int regshift; int regsize; int regspacing; int addr; int iftype; } ;
typedef enum hotmod_op { ____Placeholder_hotmod_op } hotmod_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,char*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int ,unsigned int*,char*,char const**) ;
 int FUNC_3 (char*,char const*,...) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(const char *VAR_6, enum hotmod_op *VAR_7,
       struct ipmi_plat_data *VAR_8)
{
 char *VAR_9, *VAR_10;
 int VAR_11;
 unsigned int VAR_12;

 VAR_8->iftype = VAR_1;
 VAR_11 = FUNC_2(VAR_4, &VAR_12, "operation", &VAR_6);
 if (VAR_11)
  return VAR_11;
 *VAR_7 = VAR_12;

 VAR_11 = FUNC_2(VAR_5, &VAR_12, "interface type", &VAR_6);
 if (VAR_11)
  return VAR_11;
 VAR_8->type = VAR_12;

 VAR_11 = FUNC_2(VAR_3, &VAR_12, "address space", &VAR_6);
 if (VAR_11)
  return VAR_11;
 VAR_8->space = VAR_12;

 VAR_9 = FUNC_4(VAR_6, ',');
 if (VAR_9) {
  *VAR_9 = '\0';
  VAR_9++;
 }
 VAR_11 = FUNC_1(VAR_6, 0, &VAR_8->addr);
 if (VAR_11) {
  FUNC_3("Invalid hotmod address '%s': %d\n", VAR_6, VAR_11);
  return VAR_11;
 }

 while (VAR_9) {
  VAR_6 = VAR_9;
  VAR_9 = FUNC_4(VAR_6, ',');
  if (VAR_9) {
   *VAR_9 = '\0';
   VAR_9++;
  }
  VAR_10 = FUNC_4(VAR_6, '=');
  if (VAR_10) {
   *VAR_10 = '\0';
   VAR_10++;
  }
  VAR_11 = FUNC_0(VAR_6, VAR_10, "rsp", &VAR_8->regspacing);
  if (VAR_11 < 0)
   return VAR_11;
  else if (VAR_11)
   continue;
  VAR_11 = FUNC_0(VAR_6, VAR_10, "rsi", &VAR_8->regsize);
  if (VAR_11 < 0)
   return VAR_11;
  else if (VAR_11)
   continue;
  VAR_11 = FUNC_0(VAR_6, VAR_10, "rsh", &VAR_8->regshift);
  if (VAR_11 < 0)
   return VAR_11;
  else if (VAR_11)
   continue;
  VAR_11 = FUNC_0(VAR_6, VAR_10, "irq", &VAR_8->irq);
  if (VAR_11 < 0)
   return VAR_11;
  else if (VAR_11)
   continue;
  VAR_11 = FUNC_0(VAR_6, VAR_10, "ipmb", &VAR_8->slave_addr);
  if (VAR_11 < 0)
   return VAR_11;
  else if (VAR_11)
   continue;

  FUNC_3("Invalid hotmod option '%s'\n", VAR_6);
  return -VAR_0;
 }

 VAR_8->addr_source = VAR_2;
 return 0;
}
