
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wacom_remote {TYPE_1__* remotes; int remote_dir; } ;
struct wacom {TYPE_2__* hdev; struct wacom_remote* remote; } ;
typedef int __u32 ;
struct TYPE_6__ {int * name; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {TYPE_3__ group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wacom*,int ,TYPE_3__*) ;
 int * FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct wacom *VAR_2, __u32 VAR_3,
       int VAR_4)
{
 int VAR_5 = 0;
 struct wacom_remote *VAR_6 = VAR_2->remote;

 VAR_6->remotes[VAR_4].group.name = FUNC_1(&VAR_2->hdev->dev,
         VAR_1,
         "%d", VAR_3);
 if (!VAR_6->remotes[VAR_4].group.name)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_6->remote_dir,
      &VAR_6->remotes[VAR_4].group);
 if (VAR_5) {
  VAR_6->remotes[VAR_4].group.name = ((void*)0);
  FUNC_2(VAR_2->hdev,
   "cannot create sysfs group err: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
