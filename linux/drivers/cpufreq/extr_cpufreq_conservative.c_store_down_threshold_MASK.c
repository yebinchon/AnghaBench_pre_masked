
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gov_attr_set {int dummy; } ;
struct dbs_data {unsigned int up_threshold; struct cs_dbs_tuners* tuners; } ;
struct cs_dbs_tuners {unsigned int down_threshold; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;
 struct dbs_data* FUNC_1 (struct gov_attr_set*) ;

__attribute__((used)) static ssize_t FUNC_2(struct gov_attr_set *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct dbs_data *VAR_4 = FUNC_1(VAR_1);
 struct cs_dbs_tuners *VAR_5 = VAR_4->tuners;
 unsigned int VAR_6;
 int VAR_7;
 VAR_7 = FUNC_0(VAR_2, "%u", &VAR_6);


 if (VAR_7 != 1 || VAR_6 < 1 || VAR_6 > 100 ||
   VAR_6 >= VAR_4->up_threshold)
  return -VAR_0;

 VAR_5->down_threshold = VAR_6;
 return VAR_3;
}
