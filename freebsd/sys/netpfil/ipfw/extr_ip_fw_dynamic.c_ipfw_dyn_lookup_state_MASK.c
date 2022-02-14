
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ipfw_dyn_info {size_t f_pos; void* direction; int hashval; int kidx; } ;
struct ip_fw_args {int f_id; } ;
struct ip_fw {scalar_t__ type; int set; TYPE_1__* limit; struct dyn_data* data; } ;
struct dyn_ipv6_state {scalar_t__ type; int set; TYPE_1__* limit; struct dyn_data* data; } ;
struct dyn_ipv4_state {scalar_t__ type; int set; TYPE_1__* limit; struct dyn_data* data; } ;
struct dyn_data {scalar_t__ chain_id; size_t f_pos; int rulenum; int ruleid; struct ip_fw* parent; } ;
struct TYPE_8__ {int arg1; } ;
typedef TYPE_2__ ipfw_insn ;
struct TYPE_9__ {scalar_t__ id; int n_rules; struct ip_fw** map; } ;
struct TYPE_7__ {struct ip_fw* parent; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,struct ip_fw*,int ,int ,struct dyn_data*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 void* VAR_0 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct ip_fw_args const*) ;
 struct ip_fw* FUNC_8 (int *,void const*,struct ipfw_dyn_info*,int) ;
 struct ip_fw* FUNC_9 (int *,int ,void const*,struct ipfw_dyn_info*,int) ;
 int FUNC_10 (int *) ;
 size_t FUNC_11 (TYPE_3__*,int ,int ) ;

struct ip_fw *
FUNC_12(const struct ip_fw_args *VAR_5, const void *VAR_6,
    int VAR_7, const ipfw_insn *VAR_8, struct ipfw_dyn_info *VAR_9)
{
 struct dyn_data *VAR_10;
 struct ip_fw *VAR_11;

 FUNC_3(&VAR_3);

 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);
 VAR_9->kidx = VAR_8->arg1;
 VAR_9->direction = VAR_0;
 VAR_9->hashval = FUNC_10(&VAR_5->f_id);

 FUNC_0();
 if (FUNC_4(&VAR_5->f_id)) {
  struct dyn_ipv4_state *VAR_12;

  VAR_12 = FUNC_8(&VAR_5->f_id, VAR_6, VAR_9, VAR_7);
  if (VAR_12 != ((void*)0)) {





   VAR_10 = VAR_12->data;
   if (VAR_12->type == VAR_1) {
    VAR_12 = VAR_10->parent;
    VAR_11 = VAR_12->limit->parent;
   } else
    VAR_11 = VAR_10->parent;
  }
 }
 if (VAR_10 != ((void*)0)) {







  if (VAR_10->chain_id != VAR_3.id) {
   VAR_10->f_pos = FUNC_11(&VAR_3,
       VAR_10->rulenum, VAR_10->ruleid);
   if (VAR_3.map[VAR_10->f_pos] == VAR_11) {
    VAR_10->chain_id = VAR_3.id;
    VAR_9->f_pos = VAR_10->f_pos;
   } else if (VAR_2 != 0) {





    FUNC_6(VAR_3.n_rules > 1);
    VAR_10->chain_id = VAR_3.id;
    VAR_10->f_pos = VAR_3.n_rules - 2;
    VAR_9->f_pos = VAR_10->f_pos;
   } else {
    VAR_11 = ((void*)0);
    VAR_9->direction = VAR_0;
    FUNC_2("rule %p  [%u, %u] is considered "
        "invalid in data %p", VAR_11, VAR_10->ruleid,
        VAR_10->rulenum, VAR_10);

   }
  } else
   VAR_9->f_pos = VAR_10->f_pos;
 }
 FUNC_1();
 return (VAR_11);
}
