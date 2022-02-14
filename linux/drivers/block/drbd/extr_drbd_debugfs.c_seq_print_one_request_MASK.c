
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int size; scalar_t__ sector; } ;
struct drbd_request {unsigned int rq_state; scalar_t__ net_done_jif; scalar_t__ acked_jif; scalar_t__ pre_send_jif; scalar_t__ pre_submit_jif; scalar_t__ in_actlog_jif; scalar_t__ start_jif; TYPE_1__ i; int epoch; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,unsigned int,scalar_t__) ;
 int FUNC_2 (struct seq_file*,struct drbd_request*) ;
 int FUNC_3 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_6, struct drbd_request *VAR_7, unsigned long VAR_8)
{

 unsigned int VAR_9 = VAR_7->rq_state;


 FUNC_3(VAR_6, "0x%x\t%llu\t%u\t%s",
  VAR_7->epoch,
  (unsigned long long)VAR_7->i.sector, VAR_7->i.size >> 9,
  (VAR_9 & VAR_5) ? "W" : "R");


 FUNC_3(VAR_6, "\t%d", FUNC_0(VAR_8 - VAR_7->start_jif));
 FUNC_1(VAR_6, VAR_9 & VAR_0, VAR_8 - VAR_7->in_actlog_jif);
 FUNC_1(VAR_6, VAR_9 & VAR_1, VAR_8 - VAR_7->pre_submit_jif);


 FUNC_1(VAR_6, VAR_9 & VAR_4, VAR_8 - VAR_7->pre_send_jif);
 FUNC_1(VAR_6, (VAR_9 & VAR_4) && !(VAR_9 & VAR_3), VAR_8 - VAR_7->acked_jif);
 FUNC_1(VAR_6, VAR_9 & VAR_2, VAR_8 - VAR_7->net_done_jif);


 FUNC_2(VAR_6, VAR_7);
}
