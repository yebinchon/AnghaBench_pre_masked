
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe {int dev; int range; scalar_t__ (* lock ) (int,void*) ;struct kobject* (* get ) (int,int*,void*) ;void* data; struct module* owner; struct probe* next; } ;
struct module {int dummy; } ;
struct kobject {int dummy; } ;
struct kobj_map {int lock; struct probe** probes; } ;
typedef int dev_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,void*) ;
 int FUNC_5 (struct module*) ;

struct kobject *FUNC_6(struct kobj_map *VAR_0, dev_t VAR_1, int *VAR_2)
{
 struct kobject *VAR_3;
 struct probe *VAR_4;
 unsigned long VAR_5 = ~0UL;

retry:
 FUNC_2(VAR_0->lock);
 for (VAR_4 = VAR_0->probes[FUNC_0(VAR_1) % 255]; VAR_4; VAR_4 = VAR_4->next) {
  struct kobject *(*VAR_6)(dev_t, int *, void *);
  struct module *VAR_7;
  void *VAR_8;

  if (VAR_4->dev > VAR_1 || VAR_4->dev + VAR_4->range - 1 < VAR_1)
   continue;
  if (VAR_4->range - 1 >= VAR_5)
   break;
  if (!FUNC_5(VAR_4->owner))
   continue;
  VAR_7 = VAR_4->owner;
  VAR_8 = VAR_4->data;
  VAR_6 = VAR_4->get;
  VAR_5 = VAR_4->range - 1;
  *VAR_2 = VAR_1 - VAR_4->dev;
  if (VAR_4->lock && VAR_4->lock(VAR_1, VAR_8) < 0) {
   FUNC_1(VAR_7);
   continue;
  }
  FUNC_3(VAR_0->lock);
  VAR_3 = VAR_6(VAR_1, VAR_2, VAR_8);

  FUNC_1(VAR_7);
  if (VAR_3)
   return VAR_3;
  goto retry;
 }
 FUNC_3(VAR_0->lock);
 return ((void*)0);
}
