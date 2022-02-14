
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_type {TYPE_1__* p; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int drivers_autoprobe; } ;



__attribute__((used)) static ssize_t FUNC_0(struct bus_type *VAR_0,
           const char *VAR_1, size_t VAR_2)
{
 if (VAR_1[0] == '0')
  VAR_0->p->drivers_autoprobe = 0;
 else
  VAR_0->p->drivers_autoprobe = 1;
 return VAR_2;
}
