
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wacom_remote {TYPE_7__* remotes; } ;
struct TYPE_13__ {int pad_name; } ;
struct wacom {TYPE_4__ wacom_wac; TYPE_1__* hdev; struct wacom_remote* remote; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_14__ {scalar_t__ serial; int registered; TYPE_3__* input; TYPE_2__ group; } ;
struct TYPE_12__ {int dev; int name; int uniq; } ;
struct TYPE_10__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,TYPE_7__*) ;
 int FUNC_1 (struct device*,TYPE_7__*,int ) ;
 int FUNC_2 (struct device*,TYPE_7__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (struct wacom*) ;
 int FUNC_5 (int *,struct wacom*,unsigned int,int,int) ;
 int FUNC_6 (struct wacom*,scalar_t__,unsigned int) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(struct wacom *VAR_4, u32 VAR_5,
       unsigned int VAR_6)
{
 struct wacom_remote *VAR_7 = VAR_4->remote;
 struct device *VAR_8 = &VAR_4->hdev->dev;
 int VAR_9, VAR_10;




 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_7->remotes[VAR_10].serial == VAR_5)
   break;
 }

 if (VAR_10 < VAR_3) {
  VAR_7->remotes[VAR_6].serial = VAR_5;
  return 0;
 }

 if (!FUNC_1(VAR_8, &VAR_7->remotes[VAR_6], VAR_2))
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (VAR_9)
  goto fail;

 VAR_7->remotes[VAR_6].input = FUNC_4(VAR_4);
 if (!VAR_7->remotes[VAR_6].input) {
  VAR_9 = -VAR_1;
  goto fail;
 }
 VAR_7->remotes[VAR_6].input->uniq = VAR_7->remotes[VAR_6].group.name;
 VAR_7->remotes[VAR_6].input->name = VAR_4->wacom_wac.pad_name;

 if (!VAR_7->remotes[VAR_6].input->name) {
  VAR_9 = -VAR_0;
  goto fail;
 }

 VAR_9 = FUNC_7(VAR_7->remotes[VAR_6].input,
         &VAR_4->wacom_wac);
 if (VAR_9)
  goto fail;

 VAR_7->remotes[VAR_6].serial = VAR_5;

 VAR_9 = FUNC_3(VAR_7->remotes[VAR_6].input);
 if (VAR_9)
  goto fail;

 VAR_9 = FUNC_5(
     &VAR_7->remotes[VAR_6].input->dev,
     VAR_4, VAR_6, 3, 1);
 if (VAR_9)
  goto fail;

 VAR_7->remotes[VAR_6].registered = 1;

 FUNC_0(VAR_8, &VAR_7->remotes[VAR_6]);
 return 0;

fail:
 FUNC_2(VAR_8, &VAR_7->remotes[VAR_6]);
 VAR_7->remotes[VAR_6].serial = 0;
 return VAR_9;
}
