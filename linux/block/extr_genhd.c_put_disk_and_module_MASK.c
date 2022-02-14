
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct gendisk {TYPE_1__* fops; } ;
struct TYPE_2__ {struct module* owner; } ;


 int FUNC_0 (struct module*) ;
 int FUNC_1 (struct gendisk*) ;

void FUNC_2(struct gendisk *VAR_0)
{
 if (VAR_0) {
  struct module *VAR_1 = VAR_0->fops->owner;

  FUNC_1(VAR_0);
  FUNC_0(VAR_1);
 }
}
