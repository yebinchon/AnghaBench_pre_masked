
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {int dummy; } ;
struct TYPE_3__ {int* qos; } ;
struct ioc {TYPE_1__ params; scalar_t__ user_qos_params; int enabled; } ;
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
 int FUNC_2 (struct seq_file*,char*,char const*,int ,char*,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static u64 FUNC_3(struct seq_file *VAR_6, struct blkg_policy_data *VAR_7,
     int VAR_8)
{
 const char *VAR_9 = FUNC_0(VAR_7->blkg);
 struct ioc *VAR_10 = FUNC_1(VAR_7)->ioc;

 if (!VAR_9)
  return 0;

 FUNC_2(VAR_6, "%s enable=%d ctrl=%s rpct=%u.%02u rlat=%u wpct=%u.%02u wlat=%u min=%u.%02u max=%u.%02u\n",
     VAR_9, VAR_10->enabled, VAR_10->user_qos_params ? "user" : "auto",
     VAR_10->params.qos[VAR_3] / 10000,
     VAR_10->params.qos[VAR_3] % 10000 / 100,
     VAR_10->params.qos[VAR_2],
     VAR_10->params.qos[VAR_5] / 10000,
     VAR_10->params.qos[VAR_5] % 10000 / 100,
     VAR_10->params.qos[VAR_4],
     VAR_10->params.qos[VAR_1] / 10000,
     VAR_10->params.qos[VAR_1] % 10000 / 100,
     VAR_10->params.qos[VAR_0] / 10000,
     VAR_10->params.qos[VAR_0] % 10000 / 100);
 return 0;
}
