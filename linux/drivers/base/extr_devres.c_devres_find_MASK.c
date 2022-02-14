
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devres {void* data; } ;
struct device {int devres_lock; } ;
typedef int dr_release_t ;
typedef int dr_match_t ;


 struct devres* FUNC_0 (struct device*,int ,int ,void*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void * FUNC_3(struct device *VAR_0, dr_release_t VAR_1,
     dr_match_t VAR_2, void *VAR_3)
{
 struct devres *VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_0->devres_lock, VAR_5);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->devres_lock, VAR_5);

 if (VAR_4)
  return VAR_4->data;
 return ((void*)0);
}
