
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct opcode_obj_rewrite {int etlv; } ;
struct ip_fw_chain {int dummy; } ;
struct ip_fw {int cmd_len; int * cmd; } ;
struct dump_args {int tcount; int bmask; } ;
typedef int ipfw_insn ;


 int FUNC_0 (int *) ;
 struct opcode_obj_rewrite* FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ip_fw_chain *VAR_0, struct ip_fw *VAR_1,
    struct dump_args *VAR_2)
{
 struct opcode_obj_rewrite *VAR_3;
 ipfw_insn *VAR_4;
 int VAR_5, VAR_6;
 uint16_t VAR_7;
 uint8_t VAR_8;

 VAR_6 = VAR_1->cmd_len;
 VAR_4 = VAR_1->cmd;
 VAR_5 = 0;
 for ( ; VAR_6 > 0 ; VAR_6 -= VAR_5, VAR_4 += VAR_5) {
  VAR_5 = FUNC_0(VAR_4);

  VAR_3 = FUNC_1(VAR_4, &VAR_7, &VAR_8);
  if (VAR_3 == ((void*)0))
   continue;

  if (FUNC_2(VAR_2->bmask, VAR_3->etlv, VAR_7))
   VAR_2->tcount++;
 }
}
