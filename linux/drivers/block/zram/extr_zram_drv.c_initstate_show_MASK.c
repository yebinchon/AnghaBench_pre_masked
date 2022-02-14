
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zram {int init_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct zram* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zram*) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 u32 VAR_4;
 struct zram *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(&VAR_5->init_lock);
 VAR_4 = FUNC_2(VAR_5);
 FUNC_4(&VAR_5->init_lock);

 return FUNC_3(VAR_3, VAR_0, "%u\n", VAR_4);
}
