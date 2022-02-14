
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_flow_queue8 {int drops; int tot_bytes; int tot_pkts; } ;
struct dn_flow_queue7 {int drops; int tot_bytes; int tot_pkts; int id; int len_bytes; int len; } ;
struct dn_flow {int drops; int tot_bytes; int tot_pkts; int fid; int len_bytes; int length; } ;
struct copy_args {int* start; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0 (void *VAR_1, void *VAR_2)
{
 struct copy_args *VAR_3 = VAR_2;
 struct dn_flow_queue7 *VAR_4 = (struct dn_flow_queue7 *)*VAR_3->start;
 struct dn_flow_queue8 *VAR_5 = (struct dn_flow_queue8 *)*VAR_3->start;
 struct dn_flow *VAR_6 = (struct dn_flow *)VAR_1;
 int VAR_7 = 0;



 VAR_4->len = VAR_6->length;
 VAR_4->len_bytes = VAR_6->len_bytes;
 VAR_4->id = VAR_6->fid;

 if (VAR_0) {
  VAR_7 = sizeof(struct dn_flow_queue7);
  VAR_4->tot_pkts = VAR_6->tot_pkts;
  VAR_4->tot_bytes = VAR_6->tot_bytes;
  VAR_4->drops = VAR_6->drops;
 } else {
  VAR_7 = sizeof(struct dn_flow_queue8);
  VAR_5->tot_pkts = VAR_6->tot_pkts;
  VAR_5->tot_bytes = VAR_6->tot_bytes;
  VAR_5->drops = VAR_6->drops;
 }

 *VAR_3->start += VAR_7;
 return 0;
}
