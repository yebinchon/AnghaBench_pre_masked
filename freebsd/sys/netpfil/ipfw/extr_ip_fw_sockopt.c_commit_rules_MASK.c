
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rule_check_info {scalar_t__ object_opcodes; scalar_t__ urule_numoff; scalar_t__ urule; struct ip_fw* krule; } ;
struct ip_fw_chain {int n_rules; int static_len; scalar_t__ id; int map; } ;
struct ip_fw {int rulenum; scalar_t__ id; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ip_fw*) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct ip_fw**,int) ;
 int FUNC_4 (struct ip_fw**,int ) ;
 struct ip_fw** FUNC_5 (struct ip_fw_chain*,int,int ) ;
 int FUNC_6 (struct ip_fw_chain*,int,int ) ;
 int FUNC_7 (struct ip_fw_chain*,struct rule_check_info*) ;
 struct ip_fw** FUNC_8 (struct ip_fw_chain*,struct ip_fw**,int) ;
 int FUNC_9 (struct ip_fw_chain*,struct ip_fw*) ;
 int FUNC_10 (struct ip_fw_chain*,struct ip_fw**) ;

__attribute__((used)) static int
FUNC_11(struct ip_fw_chain *VAR_4, struct rule_check_info *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 uint16_t VAR_11, *VAR_12;
 struct rule_check_info *VAR_13;
 struct ip_fw *VAR_14;
 struct ip_fw **VAR_15;


 VAR_10 = 0;
 for (VAR_13 = VAR_5, VAR_8 = 0; VAR_8 < VAR_6; VAR_13++, VAR_8++) {
  if (VAR_13->object_opcodes == 0)
   continue;






  VAR_7 = FUNC_7(VAR_4, VAR_13);
  if (VAR_7 != 0) {






   if (VAR_10 > 0) {






    FUNC_0(VAR_4);
    while (VAR_13 != VAR_5) {
     VAR_13--;
     if (VAR_13->object_opcodes == 0)
      continue;
     FUNC_9(VAR_4,VAR_13->krule);

    }
    FUNC_1(VAR_4);

   }

   return (VAR_7);
  }

  VAR_10++;
 }


 VAR_15 = FUNC_5(VAR_4, VAR_6, 0 );
 if (VAR_15 == ((void*)0)) {
  if (VAR_10 > 0) {

   FUNC_0(VAR_4);
   for (VAR_13 = VAR_5, VAR_8 = 0; VAR_8 < VAR_6; VAR_13++, VAR_8++) {
    if (VAR_13->object_opcodes == 0)
     continue;

    FUNC_9(VAR_4, VAR_13->krule);
   }
   FUNC_1(VAR_4);
  }

  return (VAR_0);
 }

 if (VAR_3 < 1)
  VAR_3 = 1;
 else if (VAR_3 > 1000)
  VAR_3 = 1000;


 VAR_13 = VAR_5;
 VAR_14 = VAR_13->krule;
 VAR_11 = VAR_14->rulenum;


 VAR_9 = VAR_11 ? VAR_11 + 1 : VAR_1;
 VAR_8 = FUNC_6(VAR_4, VAR_9, 0);

 if (VAR_8 > 0)
  FUNC_3(VAR_4->map, VAR_15, VAR_8 * sizeof(struct ip_fw *));
 VAR_15[VAR_8] = VAR_14;

 FUNC_3(VAR_4->map + VAR_8, VAR_15 + VAR_8 + 1,
  sizeof(struct ip_fw *) *(VAR_4->n_rules - VAR_8));
 if (VAR_11 == 0) {

  VAR_11 = VAR_8 > 0 ? VAR_15[VAR_8-1]->rulenum : 0;
  if (VAR_11 < VAR_1 - VAR_3)
   VAR_11 += VAR_3;
  VAR_14->rulenum = VAR_11;

  VAR_12 = (uint16_t *)((caddr_t)VAR_13->urule + VAR_13->urule_numoff);
  *VAR_12 = VAR_11;
 }

 VAR_14->id = VAR_4->id + 1;
 FUNC_10(VAR_4, VAR_15);
 VAR_15 = FUNC_8(VAR_4, VAR_15, VAR_4->n_rules + 1);
 VAR_4->static_len += FUNC_2(VAR_14);
 FUNC_1(VAR_4);
 if (VAR_15)
  FUNC_4(VAR_15, VAR_2);
 return (0);
}
