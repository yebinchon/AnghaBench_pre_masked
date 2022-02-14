
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {int dma_mask; int groups; int * type; int * bus; TYPE_1__* parent; } ;
struct gb_module {size_t num_interfaces; TYPE_2__ dev; struct gb_interface** interfaces; scalar_t__ module_id; struct gb_host_device* hd; } ;
struct gb_interface {int dummy; } ;
struct TYPE_6__ {int dma_mask; } ;
struct gb_host_device {int bus_id; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,char*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 struct gb_interface* FUNC_3 (struct gb_module*,scalar_t__) ;
 int FUNC_4 (struct gb_interface*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gb_module* FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct gb_module*,int ,size_t) ;
 int FUNC_8 (struct gb_module*) ;

struct gb_module *FUNC_9(struct gb_host_device *VAR_5, u8 VAR_6,
       size_t VAR_7)
{
 struct gb_interface *VAR_8;
 struct gb_module *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(FUNC_7(VAR_9, VAR_3, VAR_7),
    VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->hd = VAR_5;
 VAR_9->module_id = VAR_6;
 VAR_9->num_interfaces = VAR_7;

 VAR_9->dev.parent = &VAR_5->dev;
 VAR_9->dev.bus = &VAR_1;
 VAR_9->dev.type = &VAR_2;
 VAR_9->dev.groups = VAR_4;
 VAR_9->dev.dma_mask = VAR_5->dev.dma_mask;
 FUNC_2(&VAR_9->dev);
 FUNC_1(&VAR_9->dev, "%d-%u", VAR_5->bus_id, VAR_6);

 FUNC_8(VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
  VAR_8 = FUNC_3(VAR_9, VAR_6 + VAR_10);
  if (!VAR_8) {
   FUNC_0(&VAR_9->dev, "failed to create interface %u\n",
    VAR_6 + VAR_10);
   goto err_put_interfaces;
  }
  VAR_9->interfaces[VAR_10] = VAR_8;
 }

 return VAR_9;

err_put_interfaces:
 for (--VAR_10; VAR_10 >= 0; --VAR_10)
  FUNC_4(VAR_9->interfaces[VAR_10]);

 FUNC_6(&VAR_9->dev);

 return ((void*)0);
}
