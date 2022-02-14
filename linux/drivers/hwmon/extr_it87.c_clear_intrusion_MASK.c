
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {int update_lock; scalar_t__ valid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct it87_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct it87_data*,int ) ;
 int FUNC_3 (struct it87_data*,int ,int) ;
 scalar_t__ FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
          struct device_attribute *VAR_3, const char *VAR_4,
          size_t VAR_5)
{
 struct it87_data *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;
 long VAR_8;

 if (FUNC_4(VAR_4, 10, &VAR_8) < 0 || VAR_8 != 0)
  return -VAR_0;

 FUNC_5(&VAR_6->update_lock);
 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (VAR_7 < 0) {
  VAR_5 = VAR_7;
 } else {
  VAR_7 |= FUNC_0(5);
  FUNC_3(VAR_6, VAR_1, VAR_7);

  VAR_6->valid = 0;
 }
 FUNC_6(&VAR_6->update_lock);

 return VAR_5;
}
