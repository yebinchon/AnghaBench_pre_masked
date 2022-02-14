
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct sockopt_data {int valsize; } ;
struct rule_check_info {int krule; scalar_t__ urule; TYPE_4__* ctlv; } ;
struct ip_fw_rule {int rulenum; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_7__ {int idx; int name; TYPE_1__ head; } ;
typedef TYPE_3__ ipfw_obj_ntlv ;
struct TYPE_6__ {scalar_t__ type; int length; } ;
struct TYPE_8__ {int count; int objsize; TYPE_2__ head; } ;
typedef TYPE_4__ ipfw_obj_ctlv ;
typedef int ip_fw3_opheader ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ip_fw_rule*) ;
 int FUNC_1 (struct ip_fw_rule*) ;
 int FUNC_2 (struct ip_fw_rule*,int,struct rule_check_info*) ;
 int FUNC_3 (struct ip_fw_chain*,struct rule_check_info*,int) ;
 int FUNC_4 (struct rule_check_info*,int ) ;
 int FUNC_5 (struct rule_check_info*) ;
 int FUNC_6 (struct ip_fw_chain*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct sockopt_data*,int) ;
 struct rule_check_info* FUNC_10 (int,int ,int) ;
 int FUNC_11 (struct rule_check_info*,int ,int) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int
FUNC_14(struct ip_fw_chain *VAR_7, ip_fw3_opheader *VAR_8,
    struct sockopt_data *VAR_9)
{
 ipfw_obj_ctlv *VAR_10, *VAR_11, *VAR_12;
 ipfw_obj_ntlv *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 uint32_t VAR_17, VAR_18;
 struct ip_fw_rule *VAR_19;
 struct rule_check_info VAR_20, *VAR_21, *VAR_22;
 int VAR_23, VAR_24;

 VAR_8 = (ip_fw3_opheader *)FUNC_9(VAR_9, VAR_9->valsize);
 VAR_10 = (ipfw_obj_ctlv *)(VAR_8 + 1);

 VAR_18 = sizeof(ip_fw3_opheader);
 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);
 VAR_22 = ((void*)0);
 FUNC_11(&VAR_20, 0, sizeof(struct rule_check_info));

 if (VAR_18 + sizeof(*VAR_10) > VAR_9->valsize)
  return (VAR_0);

 if (VAR_10->head.type == VAR_3) {
  VAR_14 = VAR_10->head.length;

  if (VAR_14 > VAR_9->valsize || VAR_14 < sizeof(*VAR_10))
   return (VAR_0);
  if ((VAR_14 % sizeof(uint64_t)) != 0)
   return (VAR_0);





  VAR_17 = (VAR_10->head.length - sizeof(*VAR_10)) / sizeof(*VAR_13);
  if (VAR_10->count != VAR_17 || VAR_10->objsize != sizeof(*VAR_13))
   return (VAR_0);






  VAR_16 = -1;
  VAR_13 = (ipfw_obj_ntlv *)(VAR_10 + 1);
  while (VAR_17 > 0) {
   if (VAR_13->head.length != sizeof(ipfw_obj_ntlv))
    return (VAR_0);

   VAR_15 = FUNC_7(VAR_13->name);
   if (VAR_15 != 0)
    return (VAR_15);

   if (VAR_13->idx <= VAR_16)
    return (VAR_0);

   VAR_16 = VAR_13->idx;
   VAR_17--;
   VAR_13++;
  }

  VAR_12 = VAR_10;
  VAR_18 += VAR_10->head.length;
  VAR_10 = (ipfw_obj_ctlv *)((caddr_t)VAR_10 + VAR_10->head.length);
 }

 if (VAR_18 + sizeof(*VAR_10) > VAR_9->valsize)
  return (VAR_0);

 if (VAR_10->head.type == VAR_2) {
  VAR_14 = VAR_10->head.length;
  if (VAR_14 + VAR_18 > VAR_9->valsize || VAR_14 < sizeof(*VAR_10))
   return (VAR_0);
  if ((VAR_14 % sizeof(uint64_t)) != 0)
   return (VAR_0);




  if (VAR_10->count != 1)
   return (VAR_1);

  VAR_14 -= sizeof(*VAR_10);

  if (VAR_10->count > VAR_14 / sizeof(struct ip_fw_rule))
   return (VAR_0);


  if (VAR_10->count == 1) {
   FUNC_11(&VAR_20, 0, sizeof(struct rule_check_info));
   VAR_22 = &VAR_20;
  } else
   VAR_22 = FUNC_10(VAR_10->count * sizeof(*VAR_21), VAR_4,
       VAR_5 | VAR_6);
  VAR_21 = VAR_22;






  VAR_16 = 0;
  VAR_19 = (struct ip_fw_rule *)(VAR_10 + 1);
  VAR_17 = 0;
  VAR_15 = 0;
  while (VAR_14 > 0) {
   VAR_24 = FUNC_13(FUNC_1(VAR_19), sizeof(uint64_t));
   if (VAR_24 > VAR_14 || VAR_10->count <= VAR_17) {
    VAR_15 = VAR_0;
    break;
   }

   VAR_21->ctlv = VAR_12;
   VAR_15 = FUNC_2(VAR_19, VAR_24, VAR_21);
   if (VAR_15 != 0)
    break;


   if (VAR_19->rulenum != 0 && VAR_19->rulenum < VAR_16) {
    FUNC_12("rulenum %d idx %d\n", VAR_19->rulenum, VAR_16);
    VAR_15 = VAR_0;
    break;
   }
   VAR_16 = VAR_19->rulenum;

   VAR_21->urule = (caddr_t)VAR_19;

   VAR_24 = FUNC_13(VAR_24, sizeof(uint64_t));
   VAR_14 -= VAR_24;
   VAR_19 = (struct ip_fw_rule *)((caddr_t)VAR_19 + VAR_24);
   VAR_17++;
   VAR_21++;
  }

  if (VAR_10->count != VAR_17 || VAR_15 != 0) {
   if (VAR_22 != &VAR_20)
    FUNC_4(VAR_22, VAR_4);
   return (VAR_0);
  }

  VAR_11 = VAR_10;
  VAR_18 += VAR_10->head.length;
  VAR_10 = (ipfw_obj_ctlv *)((caddr_t)VAR_10 + VAR_10->head.length);
 }

 if (VAR_18 != VAR_9->valsize || VAR_11 == ((void*)0) || VAR_11->count == 0) {
  if (VAR_22 != ((void*)0) && VAR_22 != &VAR_20)
   FUNC_4(VAR_22, VAR_4);
  return (VAR_0);
 }





 for (VAR_23 = 0, VAR_21 = VAR_22; VAR_23 < VAR_11->count; VAR_23++, VAR_21++) {
  VAR_14 = FUNC_0((struct ip_fw_rule *)VAR_21->urule);
  VAR_21->krule = FUNC_6(VAR_7, VAR_14);
  FUNC_5(VAR_21);
 }

 if ((VAR_15 = FUNC_3(VAR_7, VAR_22, VAR_11->count)) != 0) {

  for (VAR_23 = 0, VAR_21 = VAR_22; VAR_23 < VAR_11->count; VAR_23++, VAR_21++)
   FUNC_8(VAR_21->krule);
 }

 if (VAR_22 != ((void*)0) && VAR_22 != &VAR_20)
  FUNC_4(VAR_22, VAR_4);

 return (VAR_15);
}
