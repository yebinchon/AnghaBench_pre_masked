
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_1, VAR_6);
 VAR_5 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1, VAR_6);

 return FUNC_3(VAR_4, "0x%lX\n", VAR_5);
}
