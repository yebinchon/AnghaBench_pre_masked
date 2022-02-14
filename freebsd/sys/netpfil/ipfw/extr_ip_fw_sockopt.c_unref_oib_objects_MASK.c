
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct opcode_obj_rewrite {struct named_object* (* find_bykidx ) (struct ip_fw_chain*,scalar_t__) ;} ;
struct obj_idx {scalar_t__ kidx; int off; } ;
struct named_object {int refcnt; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_4__ {int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (int ,char*) ;
 struct opcode_obj_rewrite* FUNC_2 (TYPE_1__*,int *,int *) ;
 struct named_object* FUNC_3 (struct ip_fw_chain*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct ip_fw_chain *VAR_0, ipfw_insn *VAR_1, struct obj_idx *VAR_2,
    struct obj_idx *VAR_3)
{
 struct opcode_obj_rewrite *VAR_4;
 struct named_object *VAR_5;
 struct obj_idx *VAR_6;

 FUNC_0(VAR_0);

 for (VAR_6 = VAR_2; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_6->kidx == 0)
   continue;

  VAR_4 = FUNC_2(VAR_1 + VAR_6->off, ((void*)0), ((void*)0));
  FUNC_1(VAR_4 != ((void*)0), ("Unable to find handler for op %d",
      (VAR_1 + VAR_6->off)->opcode));


  VAR_5 = VAR_4->find_bykidx(VAR_0, VAR_6->kidx);
  FUNC_1(VAR_5 != ((void*)0), ("Ref'd object %d disappeared", VAR_6->kidx));
  VAR_5->refcnt--;
 }
}
