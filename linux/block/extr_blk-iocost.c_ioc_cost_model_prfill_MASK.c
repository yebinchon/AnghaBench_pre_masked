
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {int dummy; } ;
struct TYPE_3__ {int * i_lcoefs; } ;
struct ioc {scalar_t__ user_cost_model; TYPE_1__ params; } ;
struct blkg_policy_data {int blkg; } ;
struct TYPE_4__ {struct ioc* ioc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 char* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct blkg_policy_data*) ;
 int FUNC_2 (struct seq_file*,char*,char const*,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static u64 FUNC_3(struct seq_file *VAR_6,
     struct blkg_policy_data *VAR_7, int VAR_8)
{
 const char *VAR_9 = FUNC_0(VAR_7->blkg);
 struct ioc *VAR_10 = FUNC_1(VAR_7)->ioc;
 u64 *VAR_11 = VAR_10->params.i_lcoefs;

 if (!VAR_9)
  return 0;

 FUNC_2(VAR_6, "%s ctrl=%s model=linear "
     "rbps=%llu rseqiops=%llu rrandiops=%llu "
     "wbps=%llu wseqiops=%llu wrandiops=%llu\n",
     VAR_9, VAR_10->user_cost_model ? "user" : "auto",
     VAR_11[VAR_0], VAR_11[VAR_2], VAR_11[VAR_1],
     VAR_11[VAR_3], VAR_11[VAR_5], VAR_11[VAR_4]);
 return 0;
}
