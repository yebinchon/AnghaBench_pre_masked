
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bus_type {TYPE_2__* p; } ;
typedef int ssize_t ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ subsys; } ;


 int FUNC_0 (int *,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct bus_type *VAR_0,
    const char *VAR_1, size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->p->subsys.kobj, VAR_1, VAR_2);
 return VAR_3 ? VAR_3 : VAR_2;
}
