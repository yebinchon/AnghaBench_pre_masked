
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct cpumask {int dummy; } ;
struct cache_index_dir {struct cache* cache; } ;
struct cache {struct cpumask shared_cpu_map; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpumask const*) ;
 struct cpumask* FUNC_1 (int,struct cache*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct cache_index_dir*) ;
 struct cache_index_dir* FUNC_3 (struct kobject*) ;
 int FUNC_4 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_2, struct kobj_attribute *VAR_3, char *VAR_4)
{
 struct cache_index_dir *VAR_5;
 struct cache *VAR_6;
 const struct cpumask *VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = VAR_5->cache;

 if (VAR_1) {
  VAR_9 = FUNC_2(VAR_5);
  VAR_7 = FUNC_1(VAR_9, VAR_6);
 } else {
  VAR_7 = &VAR_6->shared_cpu_map;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_0 - 1, "%*pb\n",
   FUNC_0(VAR_7));
 VAR_4[VAR_8++] = '\n';
 VAR_4[VAR_8] = '\0';
 return VAR_8;
}
