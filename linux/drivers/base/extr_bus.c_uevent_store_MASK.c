
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {TYPE_1__* p; } ;
typedef int ssize_t ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (int *,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct device_driver *VAR_0, const char *VAR_1,
       size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->p->kobj, VAR_1, VAR_2);
 return VAR_3 ? VAR_3 : VAR_2;
}
