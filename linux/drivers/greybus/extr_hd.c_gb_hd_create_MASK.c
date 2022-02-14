
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dma_mask; struct device* parent; int groups; int * type; int * bus; } ;
struct gb_host_device {int bus_id; size_t buffer_size_max; size_t num_cports; struct device dev; int svc; int cport_id_map; int connections; int modules; struct gb_hd_driver* driver; } ;
struct gb_hd_driver {scalar_t__ hd_priv_size; int message_cancel; int message_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gb_host_device* FUNC_0 (int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,size_t) ;
 int FUNC_5 (struct device*) ;
 int VAR_7 ;
 int FUNC_6 (struct gb_host_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ,int ) ;
 int FUNC_9 (struct gb_host_device*) ;
 struct gb_host_device* FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct gb_host_device*) ;

struct gb_host_device *FUNC_13(struct gb_hd_driver *VAR_10,
        struct device *VAR_11,
        size_t VAR_12,
        size_t VAR_13)
{
 struct gb_host_device *VAR_14;
 int VAR_15;





 if ((!VAR_10->message_send) || (!VAR_10->message_cancel)) {
  FUNC_2(VAR_11, "mandatory hd-callbacks missing\n");
  return FUNC_0(-VAR_1);
 }

 if (VAR_12 < VAR_4) {
  FUNC_2(VAR_11, "greybus host-device buffers too small\n");
  return FUNC_0(-VAR_1);
 }

 if (VAR_13 == 0 || VAR_13 > VAR_0 + 1) {
  FUNC_2(VAR_11, "Invalid number of CPorts: %zu\n", VAR_13);
  return FUNC_0(-VAR_1);
 }





 if (VAR_12 > VAR_3) {
  FUNC_4(VAR_11, "limiting buffer size to %u\n",
    VAR_3);
  VAR_12 = VAR_3;
 }

 VAR_14 = FUNC_10(sizeof(*VAR_14) + VAR_10->hd_priv_size, VAR_5);
 if (!VAR_14)
  return FUNC_0(-VAR_2);

 VAR_15 = FUNC_8(&VAR_7, 1, 0, VAR_5);
 if (VAR_15 < 0) {
  FUNC_9(VAR_14);
  return FUNC_0(VAR_15);
 }
 VAR_14->bus_id = VAR_15;

 VAR_14->driver = VAR_10;
 FUNC_1(&VAR_14->modules);
 FUNC_1(&VAR_14->connections);
 FUNC_7(&VAR_14->cport_id_map);
 VAR_14->buffer_size_max = VAR_12;
 VAR_14->num_cports = VAR_13;

 VAR_14->dev.parent = VAR_11;
 VAR_14->dev.bus = &VAR_8;
 VAR_14->dev.type = &VAR_9;
 VAR_14->dev.groups = VAR_6;
 VAR_14->dev.dma_mask = VAR_14->dev.parent->dma_mask;
 FUNC_5(&VAR_14->dev);
 FUNC_3(&VAR_14->dev, "greybus%d", VAR_14->bus_id);

 FUNC_12(VAR_14);

 VAR_14->svc = FUNC_6(VAR_14);
 if (!VAR_14->svc) {
  FUNC_2(&VAR_14->dev, "failed to create svc\n");
  FUNC_11(&VAR_14->dev);
  return FUNC_0(-VAR_2);
 }

 return VAR_14;
}
