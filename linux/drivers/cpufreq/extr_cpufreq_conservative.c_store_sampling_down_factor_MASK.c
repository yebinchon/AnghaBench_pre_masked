
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gov_attr_set {int dummy; } ;
struct dbs_data {unsigned int sampling_down_factor; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;
 struct dbs_data* FUNC_1 (struct gov_attr_set*) ;

__attribute__((used)) static ssize_t FUNC_2(struct gov_attr_set *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct dbs_data *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6;
 int VAR_7;
 VAR_7 = FUNC_0(VAR_3, "%u", &VAR_6);

 if (VAR_7 != 1 || VAR_6 > VAR_1 || VAR_6 < 1)
  return -VAR_0;

 VAR_5->sampling_down_factor = VAR_6;
 return VAR_4;
}
