
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct opcode_obj_rewrite {scalar_t__ opcode; scalar_t__ (* classifier ) (TYPE_1__*,scalar_t__*,int *) ;} ;
struct namedobj_instance {int dummy; } ;
struct named_object {scalar_t__ set; } ;
struct ip_fw_chain {int n_rules; struct ip_fw** map; } ;
struct ip_fw {int cmd_len; scalar_t__ set; TYPE_1__* cmd; } ;
struct TYPE_4__ {scalar_t__ opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_4 (struct namedobj_instance*,int ,int *,int ) ;
 struct named_object* FUNC_5 (struct namedobj_instance*,scalar_t__) ;
 int FUNC_6 (struct opcode_obj_rewrite*) ;
 struct opcode_obj_rewrite* VAR_3 ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__*,int *) ;
 int VAR_4 ;

int
FUNC_8(struct ip_fw_chain *VAR_5, unsigned int VAR_6)
{
 struct opcode_obj_rewrite *VAR_7;
 struct namedobj_instance *VAR_8;
 struct named_object *VAR_9;
 struct ip_fw *VAR_10;
 ipfw_insn *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 uint16_t VAR_15;
 uint8_t VAR_16;

 FUNC_2(VAR_5);

 if (VAR_2 == VAR_6) {
  FUNC_3(VAR_5);
  return (0);
 }
 VAR_8 = FUNC_0(VAR_5);
 if (VAR_6 == 0) {




  if (FUNC_4(VAR_8, VAR_4,
      ((void*)0), VAR_1) != 0) {
   FUNC_3(VAR_5);
   return (VAR_0);
  }
 }



 for (VAR_13 = 0; VAR_13 < VAR_5->n_rules; VAR_13++) {
  VAR_10 = VAR_5->map[VAR_13];

  VAR_14 = VAR_10->cmd_len;
  VAR_11 = VAR_10->cmd;
  VAR_12 = 0;
  for ( ; VAR_14 > 0 ; VAR_14 -= VAR_12, VAR_11 += VAR_12) {
   VAR_12 = FUNC_1(VAR_11);

   for (VAR_15 = 0, VAR_7 = VAR_3;
       VAR_7 < VAR_3 + FUNC_6(VAR_3); VAR_7++) {
    if (VAR_7->opcode != VAR_11->opcode)
     continue;
    if (VAR_7->classifier(VAR_11, &VAR_15, &VAR_16) == 0)
     break;
   }
   if (VAR_15 == 0)
    continue;
   VAR_9 = FUNC_5(VAR_8, VAR_15);

   if (VAR_9->set != 0 || VAR_10->set != 0) {
    FUNC_3(VAR_5);
    return (VAR_0);
   }

  }
 }
 VAR_2 = VAR_6;
 FUNC_3(VAR_5);
 return (0);
}
