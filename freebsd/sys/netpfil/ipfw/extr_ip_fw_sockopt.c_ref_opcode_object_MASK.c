
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {scalar_t__ type; int uidx; } ;
struct opcode_obj_rewrite {int (* find_byname ) (struct ip_fw_chain*,struct tid_info*,struct named_object**) ;int (* update ) (int *,int ) ;} ;
struct obj_idx {scalar_t__ type; int uidx; } ;
struct named_object {scalar_t__ subtype; int kidx; int refcnt; } ;
struct ip_fw_chain {int dummy; } ;
typedef int ipfw_insn ;


 int VAR_0 ;
 struct opcode_obj_rewrite* FUNC_0 (int *,int *,scalar_t__*) ;
 int FUNC_1 (struct ip_fw_chain*,struct tid_info*,struct named_object**) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_1, ipfw_insn *VAR_2, struct tid_info *VAR_3,
    struct obj_idx *VAR_4, int *VAR_5)
{
 struct named_object *VAR_6;
 struct opcode_obj_rewrite *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_0(VAR_2, &VAR_3->uidx, &VAR_3->type);
 if (VAR_7 == ((void*)0))
  return (0);


 VAR_4->uidx = VAR_3->uidx;
 VAR_4->type = VAR_3->type;


 VAR_8 = VAR_7->find_byname(VAR_1, VAR_3, &VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);
 if (VAR_6 == ((void*)0)) {




  *VAR_5 = 1;
  return (0);
 }





 if (VAR_3->type != VAR_6->subtype)
  return (VAR_0);


 VAR_6->refcnt++;
 VAR_7->update(VAR_2, VAR_6->kidx);
 return (0);
}
