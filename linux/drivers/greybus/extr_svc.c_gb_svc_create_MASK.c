
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* parent; int dma_mask; int groups; int * type; int * bus; } ;
struct gb_svc {TYPE_1__ dev; int connection; struct gb_host_device* hd; int state; int device_id_map; int wq; } ;
struct TYPE_7__ {int dma_mask; } ;
struct gb_host_device {int bus_id; TYPE_4__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct gb_host_device*,int ,int ) ;
 int FUNC_8 (int ,struct gb_svc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct gb_svc*) ;
 struct gb_svc* FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_7 ;

struct gb_svc *FUNC_13(struct gb_host_device *VAR_8)
{
 struct gb_svc *VAR_9;

 VAR_9 = FUNC_11(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->wq = FUNC_2("%s:svc", VAR_3, 1, FUNC_4(&VAR_8->dev));
 if (!VAR_9->wq) {
  FUNC_10(VAR_9);
  return ((void*)0);
 }

 VAR_9->dev.parent = &VAR_8->dev;
 VAR_9->dev.bus = &VAR_5;
 VAR_9->dev.type = &VAR_6;
 VAR_9->dev.groups = VAR_7;
 VAR_9->dev.dma_mask = VAR_9->dev.parent->dma_mask;
 FUNC_6(&VAR_9->dev);

 FUNC_5(&VAR_9->dev, "%d-svc", VAR_8->bus_id);

 FUNC_9(&VAR_9->device_id_map);
 VAR_9->state = VAR_1;
 VAR_9->hd = VAR_8;

 VAR_9->connection = FUNC_7(VAR_8, VAR_0,
            VAR_4);
 if (FUNC_0(VAR_9->connection)) {
  FUNC_3(&VAR_9->dev, "failed to create connection: %ld\n",
   FUNC_1(VAR_9->connection));
  goto err_put_device;
 }

 FUNC_8(VAR_9->connection, VAR_9);

 return VAR_9;

err_put_device:
 FUNC_12(&VAR_9->dev);
 return ((void*)0);
}
