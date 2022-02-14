
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int name; TYPE_1__* bus; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static char *FUNC_1(struct device_driver *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(VAR_0, "%s:%s", VAR_1->bus->name, VAR_1->name);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2;
}
