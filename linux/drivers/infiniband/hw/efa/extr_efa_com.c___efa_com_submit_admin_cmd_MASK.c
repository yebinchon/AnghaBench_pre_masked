
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct efa_comp_ctx {size_t comp_size; int wait_event; int cmd_opcode; struct efa_admin_acq_entry* user_cqe; int status; } ;
struct TYPE_6__ {size_t pc; int phase; int db_addr; int * entries; } ;
struct TYPE_5__ {int submitted_cmd; } ;
struct efa_com_admin_queue {size_t depth; TYPE_3__ sq; TYPE_2__ stats; } ;
struct TYPE_4__ {size_t command_id; int flags; int opcode; } ;
struct efa_admin_aq_entry {TYPE_1__ aq_common_descriptor; } ;
struct efa_admin_acq_entry {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct efa_comp_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (struct efa_com_admin_queue*) ;
 int FUNC_3 (struct efa_com_admin_queue*,size_t) ;
 struct efa_comp_ctx* FUNC_4 (struct efa_com_admin_queue*,size_t,int) ;
 int FUNC_5 (int *,struct efa_admin_aq_entry*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (size_t,int ) ;

__attribute__((used)) static struct efa_comp_ctx *FUNC_8(struct efa_com_admin_queue *VAR_4,
             struct efa_admin_aq_entry *VAR_5,
             size_t VAR_6,
             struct efa_admin_acq_entry *VAR_7,
             size_t VAR_8)
{
 struct efa_comp_ctx *VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 u16 VAR_13;

 VAR_10 = VAR_4->depth - 1;
 VAR_13 = VAR_4->sq.pc & VAR_10;

 VAR_12 = FUNC_2(VAR_4);


 VAR_11 = VAR_12 & VAR_10;
 VAR_11 |= VAR_4->sq.pc & ~VAR_10;
 VAR_11 &= VAR_0;

 VAR_5->aq_common_descriptor.command_id = VAR_11;
 VAR_5->aq_common_descriptor.flags |= VAR_4->sq.phase &
  VAR_1;

 VAR_9 = FUNC_4(VAR_4, VAR_11, 1);
 if (!VAR_9) {
  FUNC_3(VAR_4, VAR_12);
  return FUNC_0(-VAR_3);
 }

 VAR_9->status = VAR_2;
 VAR_9->comp_size = VAR_8;
 VAR_9->user_cqe = VAR_7;
 VAR_9->cmd_opcode = VAR_5->aq_common_descriptor.opcode;

 FUNC_6(&VAR_9->wait_event);

 FUNC_5(&VAR_4->sq.entries[VAR_13], VAR_5, VAR_6);

 VAR_4->sq.pc++;
 FUNC_1(&VAR_4->stats.submitted_cmd);

 if ((VAR_4->sq.pc & VAR_10) == 0)
  VAR_4->sq.phase = !VAR_4->sq.phase;


 FUNC_7(VAR_4->sq.pc, VAR_4->sq.db_addr);

 return VAR_9;
}
