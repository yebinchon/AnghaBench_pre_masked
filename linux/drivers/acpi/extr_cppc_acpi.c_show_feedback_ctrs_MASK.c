
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct cppc_perf_fb_ctrs {int delivered; int reference; int member_0; } ;
struct cpc_desc {int cpu_id; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cppc_perf_fb_ctrs*) ;
 int FUNC_1 (char*,int ,char*,int ,int ) ;
 struct cpc_desc* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
  struct attribute *VAR_2, char *VAR_3)
{
 struct cpc_desc *VAR_4 = FUNC_2(VAR_1);
 struct cppc_perf_fb_ctrs VAR_5 = {0};
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4->cpu_id, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_3, VAR_0, "ref:%llu del:%llu\n",
   VAR_5.reference, VAR_5.delivered);
}
