
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_resource {struct drbd_resource* name; int req_lock; int adm_mutex; int conf_update; int resources; int write_ordering; int connections; int devices; int kref; int cpu_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct drbd_resource*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drbd_resource*) ;
 int FUNC_4 (int *) ;
 struct drbd_resource* FUNC_5 (char const*,int ) ;
 struct drbd_resource* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

struct drbd_resource *FUNC_11(const char *VAR_3)
{
 struct drbd_resource *VAR_4;

 VAR_4 = FUNC_6(sizeof(struct drbd_resource), VAR_0);
 if (!VAR_4)
  goto fail;
 VAR_4->name = FUNC_5(VAR_3, VAR_0);
 if (!VAR_4->name)
  goto fail_free_resource;
 if (!FUNC_10(&VAR_4->cpu_mask, VAR_0))
  goto fail_free_name;
 FUNC_4(&VAR_4->kref);
 FUNC_2(&VAR_4->devices);
 FUNC_0(&VAR_4->connections);
 VAR_4->write_ordering = VAR_1;
 FUNC_7(&VAR_4->resources, &VAR_2);
 FUNC_8(&VAR_4->conf_update);
 FUNC_8(&VAR_4->adm_mutex);
 FUNC_9(&VAR_4->req_lock);
 FUNC_1(VAR_4);
 return VAR_4;

fail_free_name:
 FUNC_3(VAR_4->name);
fail_free_resource:
 FUNC_3(VAR_4);
fail:
 return ((void*)0);
}
