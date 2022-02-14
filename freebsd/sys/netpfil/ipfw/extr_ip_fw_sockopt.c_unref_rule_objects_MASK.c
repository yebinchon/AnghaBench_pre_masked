
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct opcode_obj_rewrite {int (* destroy_object ) (struct ip_fw_chain*,struct named_object*) ;struct named_object* (* find_bykidx ) (struct ip_fw_chain*,int ) ;} ;
struct named_object {scalar_t__ subtype; int refcnt; } ;
struct ip_fw_chain {int dummy; } ;
struct ip_fw {int cmd_len; int * cmd; } ;
typedef int ipfw_insn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (int,char*) ;
 struct opcode_obj_rewrite* FUNC_3 (int *,int *,scalar_t__*) ;
 struct named_object* FUNC_4 (struct ip_fw_chain*,int ) ;
 int FUNC_5 (struct ip_fw_chain*,struct named_object*) ;

__attribute__((used)) static void
FUNC_6(struct ip_fw_chain *VAR_0, struct ip_fw *VAR_1)
{
 struct opcode_obj_rewrite *VAR_2;
 struct named_object *VAR_3;
 ipfw_insn *VAR_4;
 int VAR_5, VAR_6;
 uint16_t VAR_7;
 uint8_t VAR_8;

 FUNC_1(VAR_0);

 VAR_6 = VAR_1->cmd_len;
 VAR_4 = VAR_1->cmd;
 VAR_5 = 0;
 for ( ; VAR_6 > 0 ; VAR_6 -= VAR_5, VAR_4 += VAR_5) {
  VAR_5 = FUNC_0(VAR_4);

  VAR_2 = FUNC_3(VAR_4, &VAR_7, &VAR_8);
  if (VAR_2 == ((void*)0))
   continue;
  VAR_3 = VAR_2->find_bykidx(VAR_0, VAR_7);

  FUNC_2(VAR_3 != ((void*)0), ("object id %d not found", VAR_7));
  FUNC_2(VAR_3->subtype == VAR_8,
      ("wrong type %d (%d) for object id %d",
      VAR_3->subtype, VAR_8, VAR_7));
  FUNC_2(VAR_3->refcnt > 0, ("refcount for object %d is %d",
      VAR_7, VAR_3->refcnt));

  if (VAR_3->refcnt == 1 && VAR_2->destroy_object != ((void*)0))
   VAR_2->destroy_object(VAR_0, VAR_3);
  else
   VAR_3->refcnt--;
 }
}
