
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wacom_remote_data {int dummy; } ;
struct wacom_remote {TYPE_5__* remotes; int remote_dir; int remote_fifo; int remote_lock; } ;
struct TYPE_12__ {TYPE_3__* groups; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_1__ features; } ;
struct wacom {TYPE_6__* hdev; TYPE_4__ led; struct wacom_remote* remote; TYPE_2__ wacom_wac; } ;
struct TYPE_15__ {int kobj; } ;
struct TYPE_14__ {TYPE_7__ dev; } ;
struct TYPE_13__ {scalar_t__ serial; int group; } ;
struct TYPE_11__ {int select; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_7__*,int ,struct wacom*) ;
 struct wacom_remote* FUNC_1 (TYPE_7__*,int,int ) ;
 int FUNC_2 (TYPE_6__*,char*,...) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_7(struct wacom *VAR_12)
{
 int VAR_13 = 0;
 struct wacom_remote *VAR_14;
 int VAR_15;

 if (VAR_12->wacom_wac.features.type != VAR_2)
  return 0;

 VAR_14 = FUNC_1(&VAR_12->hdev->dev, sizeof(*VAR_12->remote),
         VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_12->remote = VAR_14;

 FUNC_5(&VAR_14->remote_lock);

 VAR_13 = FUNC_3(&VAR_14->remote_fifo,
   5 * sizeof(struct wacom_remote_data),
   VAR_1);
 if (VAR_13) {
  FUNC_2(VAR_12->hdev, "failed allocating remote_fifo\n");
  return -VAR_0;
 }

 VAR_14->remotes[0].group = VAR_5;
 VAR_14->remotes[1].group = VAR_6;
 VAR_14->remotes[2].group = VAR_7;
 VAR_14->remotes[3].group = VAR_8;
 VAR_14->remotes[4].group = VAR_9;

 VAR_14->remote_dir = FUNC_4("wacom_remote",
          &VAR_12->hdev->dev.kobj);
 if (!VAR_14->remote_dir)
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_14->remote_dir, VAR_10);

 if (VAR_13) {
  FUNC_2(VAR_12->hdev,
   "cannot create sysfs group err: %d\n", VAR_13);
  return VAR_13;
 }

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_12->led.groups[VAR_15].select = VAR_4;
  VAR_14->remotes[VAR_15].serial = 0;
 }

 VAR_13 = FUNC_0(&VAR_12->hdev->dev,
      VAR_11, VAR_12);
 if (VAR_13)
  return VAR_13;

 return 0;
}
