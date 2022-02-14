
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;
struct fpga_manager {int dummy; } ;
struct altera_ps_conf {int mgr_name; void* confd; void* status; void* config; struct spi_device* spi; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 char* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct fpga_manager* FUNC_6 (TYPE_1__*,int ,int *,struct altera_ps_conf*) ;
 void* FUNC_7 (TYPE_1__*,char*,int ) ;
 void* FUNC_8 (TYPE_1__*,char*,int ) ;
 struct altera_ps_conf* FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (struct fpga_manager*) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 struct of_device_id* FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ,int,char*,char*,char*) ;
 int FUNC_14 (struct spi_device*) ;
 int FUNC_15 (struct spi_device*,struct fpga_manager*) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_7)
{
 struct altera_ps_conf *VAR_8;
 const struct of_device_id *VAR_9;
 struct fpga_manager *VAR_10;

 VAR_8 = FUNC_9(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 if (VAR_7->dev.of_node) {
  VAR_9 = FUNC_12(VAR_6, &VAR_7->dev);
  if (!VAR_9)
   return -VAR_0;
  VAR_8->data = VAR_9->data;
 } else {
  VAR_8->data = FUNC_11(FUNC_14(VAR_7));
  if (!VAR_8->data)
   return -VAR_0;
 }

 VAR_8->spi = VAR_7;
 VAR_8->config = FUNC_7(&VAR_7->dev, "nconfig", VAR_4);
 if (FUNC_0(VAR_8->config)) {
  FUNC_3(&VAR_7->dev, "Failed to get config gpio: %ld\n",
   FUNC_1(VAR_8->config));
  return FUNC_1(VAR_8->config);
 }

 VAR_8->status = FUNC_7(&VAR_7->dev, "nstat", VAR_3);
 if (FUNC_0(VAR_8->status)) {
  FUNC_3(&VAR_7->dev, "Failed to get status gpio: %ld\n",
   FUNC_1(VAR_8->status));
  return FUNC_1(VAR_8->status);
 }

 VAR_8->confd = FUNC_8(&VAR_7->dev, "confd", VAR_3);
 if (FUNC_0(VAR_8->confd)) {
  FUNC_3(&VAR_7->dev, "Failed to get confd gpio: %ld\n",
   FUNC_1(VAR_8->confd));
  return FUNC_1(VAR_8->confd);
 } else if (!VAR_8->confd) {
  FUNC_5(&VAR_7->dev, "Not using confd gpio");
 }


 FUNC_13(VAR_8->mgr_name, sizeof(VAR_8->mgr_name), "%s %s",
   FUNC_2(&VAR_7->dev), FUNC_4(&VAR_7->dev));

 VAR_10 = FUNC_6(&VAR_7->dev, VAR_8->mgr_name,
       &VAR_5, VAR_8);
 if (!VAR_10)
  return -VAR_1;

 FUNC_15(VAR_7, VAR_10);

 return FUNC_10(VAR_10);
}
