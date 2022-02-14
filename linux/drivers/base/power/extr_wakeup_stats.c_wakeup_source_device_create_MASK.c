
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int id; } ;
struct device {int kobj; int release; int groups; struct device* parent; int class; int devt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*,struct wakeup_source*) ;
 int FUNC_3 (struct device*) ;
 int VAR_3 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *,char*,int ) ;
 struct device* FUNC_7 (int,int ) ;
 int FUNC_8 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct device *FUNC_9(struct device *VAR_6,
        struct wakeup_source *VAR_7)
{
 struct device *VAR_8 = ((void*)0);
 int VAR_9 = -VAR_0;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto error;
 }

 FUNC_4(VAR_8);
 VAR_8->devt = FUNC_1(0, 0);
 VAR_8->class = VAR_4;
 VAR_8->parent = VAR_6;
 VAR_8->groups = VAR_5;
 VAR_8->release = VAR_3;
 FUNC_2(VAR_8, VAR_7);
 FUNC_5(VAR_8);

 VAR_9 = FUNC_6(&VAR_8->kobj, "wakeup%d", VAR_7->id);
 if (VAR_9)
  goto error;

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  goto error;

 return VAR_8;

error:
 FUNC_8(VAR_8);
 return FUNC_0(VAR_9);
}
