
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ of_node; struct rmi_device_platform_data* platform_data; } ;
struct spi_device {TYPE_4__ dev; int irq; scalar_t__ mode; scalar_t__ bits_per_word; TYPE_1__* master; } ;
struct TYPE_9__ {scalar_t__ mode; scalar_t__ bits_per_word; } ;
struct rmi_device_platform_data {int irq; TYPE_2__ spi_data; } ;
struct TYPE_10__ {char* proto_name; int * ops; TYPE_4__* dev; struct rmi_device_platform_data pdata; } ;
struct rmi_spi_xport {TYPE_3__ xport; int page_mutex; struct spi_device* spi; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_4__*,int ,struct rmi_spi_xport*) ;
 struct rmi_spi_xport* FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct rmi_spi_xport*,int ) ;
 int FUNC_7 (struct rmi_spi_xport*,int ) ;
 int FUNC_8 (struct spi_device*,struct rmi_device_platform_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct spi_device*,struct rmi_spi_xport*) ;
 int FUNC_10 (struct spi_device*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_7)
{
 struct rmi_spi_xport *VAR_8;
 struct rmi_device_platform_data *VAR_9;
 struct rmi_device_platform_data *VAR_10 = VAR_7->dev.platform_data;
 int VAR_11;

 if (VAR_7->master->flags & VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_3(&VAR_7->dev, sizeof(struct rmi_spi_xport),
   VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = &VAR_8->xport.pdata;

 if (VAR_7->dev.of_node) {
  VAR_11 = FUNC_8(VAR_7, VAR_9);
  if (VAR_11)
   return VAR_11;
 } else if (VAR_10) {
  *VAR_9 = *VAR_10;
 }

 if (VAR_9->spi_data.bits_per_word)
  VAR_7->bits_per_word = VAR_9->spi_data.bits_per_word;

 if (VAR_9->spi_data.mode)
  VAR_7->mode = VAR_9->spi_data.mode;

 VAR_11 = FUNC_10(VAR_7);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_7->dev, "spi_setup failed!\n");
  return VAR_11;
 }

 VAR_9->irq = VAR_7->irq;

 VAR_8->spi = VAR_7;
 FUNC_4(&VAR_8->page_mutex);

 VAR_8->xport.dev = &VAR_7->dev;
 VAR_8->xport.proto_name = "spi";
 VAR_8->xport.ops = &VAR_5;

 FUNC_9(VAR_7, VAR_8);

 VAR_11 = FUNC_7(VAR_8, VAR_3);
 if (VAR_11)
  return VAR_11;





 VAR_11 = FUNC_6(VAR_8, 0);
 if (VAR_11) {
  FUNC_0(&VAR_7->dev, "Failed to set page select to 0.\n");
  return VAR_11;
 }

 FUNC_1(&VAR_7->dev, "registering SPI-connected sensor\n");

 VAR_11 = FUNC_5(&VAR_8->xport);
 if (VAR_11) {
  FUNC_0(&VAR_7->dev, "failed to register sensor: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_2(&VAR_7->dev,
       VAR_6,
       VAR_8);
 if (VAR_11)
  return VAR_11;

 return 0;
}
