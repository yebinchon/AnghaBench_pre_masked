
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct opcode_obj_rewrite {int (* update ) (int *,int) ;struct named_object* (* find_bykidx ) (struct ip_fw_chain*,int) ;} ;
struct named_object {int name; } ;
struct ip_fw_rule0 {int cmd_len; int * cmd; } ;
struct ip_fw_chain {int dummy; } ;
typedef int ipfw_insn ;


 int FUNC_0 (int *) ;
 struct opcode_obj_rewrite* FUNC_1 (int *,int*,int *) ;
 long FUNC_2 (int ,char**,int) ;
 struct named_object* FUNC_3 (struct ip_fw_chain*,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_chain *VAR_0, struct ip_fw_rule0 *VAR_1)
{
 struct opcode_obj_rewrite *VAR_2;
 struct named_object *VAR_3;
 ipfw_insn *VAR_4;
 char *VAR_5;
 long VAR_6;
 int VAR_7, VAR_8, VAR_9;
 uint16_t VAR_10, VAR_11;
 uint8_t VAR_12;

 VAR_8 = 0;

 VAR_9 = VAR_1->cmd_len;
 VAR_4 = VAR_1->cmd;
 VAR_7 = 0;
 for ( ; VAR_9 > 0 ; VAR_9 -= VAR_7, VAR_4 += VAR_7) {
  VAR_7 = FUNC_0(VAR_4);


  VAR_2 = FUNC_1(VAR_4, &VAR_10, &VAR_12);
  if (VAR_2 == ((void*)0))
   continue;


  VAR_3 = VAR_2->find_bykidx(VAR_0, VAR_10);
  if (VAR_3 == ((void*)0))
   continue;

  VAR_6 = FUNC_2(VAR_3->name, &VAR_5, 10);
  if (*VAR_5 == '\0' && VAR_6 < 65535) {
   VAR_11 = VAR_6;
  } else {






   VAR_11 = 65535;
   VAR_8 = 2;
  }

  VAR_2->update(VAR_4, VAR_11);
 }

 return (VAR_8);
}
