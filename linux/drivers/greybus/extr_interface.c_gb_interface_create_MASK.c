
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int dma_mask; } ;
struct gb_module {TYPE_4__ dev; struct gb_host_device* hd; } ;
struct TYPE_5__ {int dma_mask; int groups; int * type; int * bus; TYPE_4__* parent; } ;
struct gb_interface {TYPE_1__ dev; int device_id; int mode_switch_completion; int mode_switch_work; int mutex; int manifest_descs; int bundles; int interface_id; struct gb_module* module; struct gb_host_device* hd; } ;
struct gb_host_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 struct gb_interface* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (struct gb_interface*) ;

struct gb_interface *FUNC_10(struct gb_module *VAR_7,
      u8 VAR_8)
{
 struct gb_host_device *VAR_9 = VAR_7->hd;
 struct gb_interface *VAR_10;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return ((void*)0);

 VAR_10->hd = VAR_9;
 VAR_10->module = VAR_7;
 VAR_10->interface_id = VAR_8;
 FUNC_0(&VAR_10->bundles);
 FUNC_0(&VAR_10->manifest_descs);
 FUNC_7(&VAR_10->mutex);
 FUNC_1(&VAR_10->mode_switch_work, VAR_3);
 FUNC_5(&VAR_10->mode_switch_completion);


 VAR_10->device_id = VAR_1;

 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->dev.bus = &VAR_4;
 VAR_10->dev.type = &VAR_5;
 VAR_10->dev.groups = VAR_6;
 VAR_10->dev.dma_mask = VAR_7->dev.dma_mask;
 FUNC_4(&VAR_10->dev);
 FUNC_3(&VAR_10->dev, "%s.%u", FUNC_2(&VAR_7->dev),
       VAR_8);

 FUNC_8(&VAR_10->dev,
      VAR_0);

 FUNC_9(VAR_10);

 return VAR_10;
}
