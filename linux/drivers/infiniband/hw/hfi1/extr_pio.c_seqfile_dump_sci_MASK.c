
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
struct send_context_info {int credits; int base; int type; struct send_context* sc; } ;
struct send_context {int * hw_free; int hw_context; int dd; int credit_ctrl; int credit_intr_count; int alloc_free; int fill_wrap; int free; int fill; int sr_tail; int sr_head; int credits; int sr_size; int group; int sw_index; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct seq_file*,char*,int,int,...) ;

void FUNC_4(struct seq_file *VAR_6, u32 VAR_7,
        struct send_context_info *VAR_8)
{
 struct send_context *VAR_9 = VAR_8->sc;
 u64 VAR_10;

 FUNC_3(VAR_6, "SCI %u: type %u base %u credits %u\n",
     VAR_7, VAR_8->type, VAR_8->base, VAR_8->credits);
 FUNC_3(VAR_6, "  flags 0x%x sw_inx %u hw_ctxt %u grp %u\n",
     VAR_9->flags, VAR_9->sw_index, VAR_9->hw_context, VAR_9->group);
 FUNC_3(VAR_6, "  sr_size %u credits %u sr_head %u sr_tail %u\n",
     VAR_9->sr_size, VAR_9->credits, VAR_9->sr_head, VAR_9->sr_tail);
 FUNC_3(VAR_6, "  fill %lu free %lu fill_wrap %u alloc_free %lu\n",
     VAR_9->fill, VAR_9->free, VAR_9->fill_wrap, VAR_9->alloc_free);
 FUNC_3(VAR_6, "  credit_intr_count %u credit_ctrl 0x%llx\n",
     VAR_9->credit_intr_count, VAR_9->credit_ctrl);
 VAR_10 = FUNC_2(VAR_9->dd, VAR_9->hw_context, FUNC_0(VAR_0));
 FUNC_3(VAR_6, "  *hw_free %llu CurrentFree %llu LastReturned %llu\n",
     (FUNC_1(*VAR_9->hw_free) & VAR_5) >>
      VAR_4,
     (VAR_10 >> FUNC_0(VAR_2)) &
      FUNC_0(VAR_1),
     VAR_10 & FUNC_0(VAR_3));
}
