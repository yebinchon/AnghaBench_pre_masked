
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gov_attr_set {int dummy; } ;
struct dbs_data {int io_is_busy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct dbs_data*) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;
 struct dbs_data* FUNC_2 (struct gov_attr_set*) ;

__attribute__((used)) static ssize_t FUNC_3(struct gov_attr_set *VAR_1, const char *VAR_2,
    size_t VAR_3)
{
 struct dbs_data *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, "%u", &VAR_5);
 if (VAR_6 != 1)
  return -VAR_0;
 VAR_4->io_is_busy = !!VAR_5;


 FUNC_0(VAR_4);

 return VAR_3;
}
