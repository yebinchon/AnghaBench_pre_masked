
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rvt_qpn_table {int incr; int nmaps; struct rvt_qpn_map* map; int last; int lock; } ;
struct rvt_qpn_map {int page; } ;
struct TYPE_2__ {int qpn_res_end; int qpn_res_start; int qpn_inc; int qos_shift; int qpn_start; } ;
struct rvt_dev_info {TYPE_1__ dparms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rvt_qpn_table*,struct rvt_qpn_map*) ;
 int FUNC_1 (struct rvt_dev_info*,char*,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct rvt_dev_info *VAR_4, struct rvt_qpn_table *VAR_5)
{
 u32 VAR_6, VAR_7;
 struct rvt_qpn_map *VAR_8;
 int VAR_9 = 0;

 if (!(VAR_4->dparms.qpn_res_end >= VAR_4->dparms.qpn_res_start))
  return -VAR_0;

 FUNC_3(&VAR_5->lock);

 VAR_5->last = VAR_4->dparms.qpn_start;
 VAR_5->incr = VAR_4->dparms.qpn_inc << VAR_4->dparms.qos_shift;
 VAR_5->nmaps = VAR_4->dparms.qpn_res_start / VAR_2;


 VAR_6 = VAR_4->dparms.qpn_res_start & VAR_3;


 VAR_8 = &VAR_5->map[VAR_5->nmaps];

 FUNC_1(VAR_4, "Reserving QPNs from 0x%x to 0x%x for non-verbs use\n",
      VAR_4->dparms.qpn_res_start, VAR_4->dparms.qpn_res_end);
 for (VAR_7 = VAR_4->dparms.qpn_res_start; VAR_7 <= VAR_4->dparms.qpn_res_end; VAR_7++) {
  if (!VAR_8->page) {
   FUNC_0(VAR_5, VAR_8);
   if (!VAR_8->page) {
    VAR_9 = -VAR_1;
    break;
   }
  }
  FUNC_2(VAR_6, VAR_8->page);
  VAR_6++;
  if (VAR_6 == VAR_2) {

   VAR_5->nmaps++;
   VAR_8++;
   VAR_6 = 0;
  }
 }
 return VAR_9;
}
