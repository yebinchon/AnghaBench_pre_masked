
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gov_attr_set {int dummy; } ;
struct dbs_data {unsigned int up_threshold; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;
 struct dbs_data* FUNC_1 (struct gov_attr_set*) ;

__attribute__((used)) static ssize_t FUNC_2(struct gov_attr_set *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct dbs_data *VAR_6 = FUNC_1(VAR_3);
 unsigned int VAR_7;
 int VAR_8;
 VAR_8 = FUNC_0(VAR_4, "%u", &VAR_7);

 if (VAR_8 != 1 || VAR_7 > VAR_1 ||
   VAR_7 < VAR_2) {
  return -VAR_0;
 }

 VAR_6->up_threshold = VAR_7;
 return VAR_5;
}
