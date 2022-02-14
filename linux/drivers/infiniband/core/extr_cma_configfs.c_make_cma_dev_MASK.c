
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int dummy; } ;
struct cma_device {int dummy; } ;
struct cma_dev_group {struct config_group device_group; struct config_group ports_group; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_group* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct cma_device*) ;
 int VAR_3 ;
 struct cma_device* FUNC_2 (int ,void*) ;
 int VAR_4 ;
 int FUNC_3 (struct config_group*,char const*,int *) ;
 int FUNC_4 (struct config_group*,struct config_group*) ;
 int VAR_5 ;
 int FUNC_5 (struct cma_dev_group*) ;
 struct cma_dev_group* FUNC_6 (int,int ) ;
 int FUNC_7 (struct cma_dev_group*,struct cma_device*) ;
 int FUNC_8 (int ,char const*,int) ;

__attribute__((used)) static struct config_group *FUNC_9(struct config_group *VAR_6,
      const char *VAR_7)
{
 int VAR_8 = -VAR_0;
 struct cma_device *VAR_9 = FUNC_2(VAR_5,
              (void *)VAR_7);
 struct cma_dev_group *VAR_10 = ((void*)0);

 if (!VAR_9)
  goto fail;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);

 if (!VAR_10) {
  VAR_8 = -VAR_1;
  goto fail;
 }

 FUNC_8(VAR_10->name, VAR_7, sizeof(VAR_10->name));

 FUNC_3(&VAR_10->ports_group, "ports",
        &VAR_4);

 VAR_8 = FUNC_7(VAR_10, VAR_9);
 if (VAR_8)
  goto fail;

 FUNC_3(&VAR_10->device_group, VAR_7,
        &VAR_3);
 FUNC_4(&VAR_10->ports_group,
   &VAR_10->device_group);

 FUNC_1(VAR_9);
 return &VAR_10->device_group;

fail:
 if (VAR_9)
  FUNC_1(VAR_9);
 FUNC_5(VAR_10);
 return FUNC_0(VAR_8);
}
