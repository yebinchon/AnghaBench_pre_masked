
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht21 {int lock; int * eic; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct sht21* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sht21*) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
 struct device_attribute *VAR_1,
 char *VAR_2)
{
 struct sht21 *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = sizeof(VAR_3->eic) - 1;
 FUNC_3(&VAR_3->lock);
 if (!VAR_3->eic[0])
  VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 > 0)
  FUNC_2(VAR_2, VAR_3->eic, VAR_4);
 FUNC_4(&VAR_3->lock);
 return VAR_4;
}
