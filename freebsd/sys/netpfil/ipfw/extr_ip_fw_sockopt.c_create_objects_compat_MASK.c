
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct tid_info {scalar_t__ atype; int type; int uidx; } ;
struct opcode_obj_rewrite {int (* create_object ) (struct ip_fw_chain*,struct tid_info*,scalar_t__*) ;} ;
struct obj_idx {scalar_t__ kidx; int off; int type; int uidx; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_5__ {int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (int ,char*) ;
 struct opcode_obj_rewrite* FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (struct ip_fw_chain*,struct tid_info*,scalar_t__*) ;
 int FUNC_5 (struct ip_fw_chain*,TYPE_1__*,struct obj_idx*,struct obj_idx*) ;

int
FUNC_6(struct ip_fw_chain *VAR_1, ipfw_insn *VAR_2,
    struct obj_idx *VAR_3, struct obj_idx *VAR_4, struct tid_info *VAR_5)
{
 struct opcode_obj_rewrite *VAR_6;
 struct obj_idx *VAR_7;
 uint16_t VAR_8;
 int VAR_9;





 for (VAR_7 = VAR_3; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_7->kidx != 0)
   continue;

  VAR_5->uidx = VAR_7->uidx;
  VAR_5->type = VAR_7->type;
  VAR_5->atype = 0;

  VAR_6 = FUNC_3(VAR_2 + VAR_7->off, ((void*)0), ((void*)0));
  FUNC_2(VAR_6 != ((void*)0), ("Unable to find handler for op %d",
      (VAR_2 + VAR_7->off)->opcode));

  if (VAR_6->create_object == ((void*)0))
   VAR_9 = VAR_0;
  else
   VAR_9 = VAR_6->create_object(VAR_1, VAR_5, &VAR_8);
  if (VAR_9 == 0) {
   VAR_7->kidx = VAR_8;
   continue;
  }





  FUNC_0(VAR_1);
  FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_1);

  return (VAR_9);
 }

 return (0);
}
