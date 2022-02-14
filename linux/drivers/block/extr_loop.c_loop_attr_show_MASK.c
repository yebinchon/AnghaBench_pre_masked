
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct loop_device loop_device ;
struct gendisk {struct loop_device* private_data; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct gendisk* FUNC_0 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_0, char *VAR_1,
         ssize_t (*VAR_2)(struct loop_device *, char *))
{
 struct gendisk *VAR_3 = FUNC_0(VAR_0);
 struct loop_device *VAR_4 = VAR_3->private_data;

 return VAR_2(VAR_4, VAR_1);
}
