
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int ti ;
struct tid_info {scalar_t__ tlen; void* tlvs; int set; } ;
struct rule_check_info {int object_opcodes; struct obj_idx* obuf; TYPE_3__* krule; TYPE_2__* ctlv; } ;
struct obj_idx {int off; int kidx; } ;
struct ip_fw_chain {int dummy; } ;
typedef int ipfw_obj_ctlv ;
typedef int ipfw_insn ;
struct TYPE_6__ {int * cmd; int set; } ;
struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_5__ {TYPE_1__ head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct obj_idx*,int ) ;
 struct obj_idx* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct tid_info*,int ,int) ;
 int FUNC_3 (struct ip_fw_chain*,TYPE_3__*,struct rule_check_info*,struct obj_idx*,struct tid_info*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_chain *VAR_3, struct rule_check_info *VAR_4)
{
 int VAR_5;
 ipfw_insn *VAR_6;
 uint8_t VAR_7;
 struct obj_idx *VAR_8, *VAR_9, *VAR_10;
 struct tid_info VAR_11;





 if (VAR_4->object_opcodes <= (sizeof(VAR_4->obuf)/sizeof(VAR_4->obuf[0]))) {

  VAR_9 = VAR_4->obuf;
 } else
  VAR_9 = FUNC_1(
      VAR_4->object_opcodes * sizeof(struct obj_idx),
      VAR_0, VAR_1 | VAR_2);

 VAR_5 = 0;
 VAR_7 = 0;
 FUNC_2(&VAR_11, 0, sizeof(VAR_11));


 VAR_11.set = VAR_4->krule->set;
 if (VAR_4->ctlv != ((void*)0)) {
  VAR_11.tlvs = (void *)(VAR_4->ctlv + 1);
  VAR_11.tlen = VAR_4->ctlv->head.length - sizeof(ipfw_obj_ctlv);
 }


 VAR_5 = FUNC_3(VAR_3, VAR_4->krule, VAR_4, VAR_9, &VAR_11);
 if (VAR_5 != 0)
  goto free;






 VAR_8 = VAR_9;
 VAR_10 = VAR_9 + VAR_4->object_opcodes;
 for (VAR_8 = VAR_9; VAR_8 < VAR_10; VAR_8++) {
  VAR_6 = VAR_4->krule->cmd + VAR_8->off;
  FUNC_4(VAR_6, VAR_8->kidx);
 }

free:
 if (VAR_9 != VAR_4->obuf)
  FUNC_0(VAR_9, VAR_0);

 return (VAR_5);
}
