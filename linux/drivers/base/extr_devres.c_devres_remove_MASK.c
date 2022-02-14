
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entry; } ;
struct devres {void* data; TYPE_1__ node; } ;
struct device {int devres_lock; } ;
typedef int dr_release_t ;
typedef int dr_match_t ;


 int FUNC_0 (struct device*,TYPE_1__*,char*) ;
 struct devres* FUNC_1 (struct device*,int ,int ,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void * FUNC_5(struct device *VAR_0, dr_release_t VAR_1,
       dr_match_t VAR_2, void *VAR_3)
{
 struct devres *VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_0->devres_lock, VAR_5);
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2(&VAR_4->node.entry);
  FUNC_0(VAR_0, &VAR_4->node, "REM");
 }
 FUNC_4(&VAR_0->devres_lock, VAR_5);

 if (VAR_4)
  return VAR_4->data;
 return ((void*)0);
}
