
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct rdtgroup {TYPE_1__* kn; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 struct rdtgroup* FUNC_0 (struct device*) ;
 char* FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_1, umode_t *VAR_2)
{
 struct rdtgroup *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_2)
  *VAR_2 = 0600;
 return FUNC_1(VAR_0, "pseudo_lock/%s", VAR_3->kn->name);
}
