
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct TYPE_7__ {scalar_t__ of_node; int devt; int release; int * parent; int * type; } ;
struct fsi_slave {int link; int t_send_delay; int t_echo_delay; int chip_id; TYPE_1__ dev; int cdev; int cdev_idx; int size; scalar_t__ id; struct fsi_master* master; void* cfam_id; } ;
struct fsi_master {int flags; int dev; int (* link_config ) (struct fsi_master*,int,int,int) ;int idx; } ;
typedef int llmode ;
typedef int data ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct fsi_slave*,int ,int *,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,void*,int) ;
 int FUNC_6 (int *,char*,int,...) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 int FUNC_8 (TYPE_1__*,char*,int,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,char*,int,...) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct fsi_master*,int,scalar_t__,int ,int *,int) ;
 int FUNC_14 (struct fsi_master*,int,scalar_t__,scalar_t__,int *,int) ;
 scalar_t__ FUNC_15 (struct fsi_master*,int,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (struct fsi_slave*) ;
 int FUNC_17 (struct fsi_slave*) ;
 int FUNC_18 (struct fsi_slave*) ;
 struct fsi_slave* FUNC_19 (int,int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__,char*,void**) ;
 int FUNC_22 (struct fsi_master*,int,int,int) ;

__attribute__((used)) static int FUNC_23(struct fsi_master *VAR_15, int VAR_16, uint8_t VAR_17)
{
 uint32_t VAR_18;
 struct fsi_slave *VAR_19;
 uint8_t VAR_20;
 __be32 VAR_21, VAR_22;
 int VAR_23;




 if (VAR_17 != 0)
  return -VAR_0;

 VAR_23 = FUNC_13(VAR_15, VAR_16, VAR_17, 0, &VAR_21, sizeof(VAR_21));
 if (VAR_23) {
  FUNC_6(&VAR_15->dev, "can't read slave %02x:%02x %d\n",
    VAR_16, VAR_17, VAR_23);
  return -VAR_2;
 }
 VAR_18 = FUNC_1(VAR_21);

 VAR_20 = FUNC_5(0, VAR_18, 32);
 if (VAR_20) {
  FUNC_9(&VAR_15->dev, "slave %02x:%02x invalid cfam id CRC!\n",
    VAR_16, VAR_17);
  return -VAR_1;
 }

 FUNC_6(&VAR_15->dev, "fsi: found chip %08x at %02x:%02x:%02x\n",
   VAR_18, VAR_15->idx, VAR_16, VAR_17);




 if (VAR_15->flags & VAR_6) {
  VAR_22 = FUNC_4(VAR_5);
  VAR_23 = FUNC_14(VAR_15, VAR_16, VAR_17,
    VAR_7 + VAR_4,
    &VAR_22, sizeof(VAR_22));
  if (VAR_23)
   FUNC_9(&VAR_15->dev,
    "can't set llmode on slave:%02x:%02x %d\n",
    VAR_16, VAR_17, VAR_23);
 }




 VAR_19 = FUNC_19(sizeof(*VAR_19), VAR_9);
 if (!VAR_19)
  return -VAR_3;

 FUNC_8(&VAR_19->dev, "slave@%02x:%02x", VAR_16, VAR_17);
 VAR_19->dev.type = &VAR_11;
 VAR_19->dev.parent = &VAR_15->dev;
 VAR_19->dev.of_node = FUNC_15(VAR_15, VAR_16, VAR_17);
 VAR_19->dev.release = VAR_14;
 FUNC_11(&VAR_19->dev);
 VAR_19->cfam_id = VAR_18;
 VAR_19->master = VAR_15;
 VAR_19->link = VAR_16;
 VAR_19->id = VAR_17;
 VAR_19->size = VAR_8;
 VAR_19->t_send_delay = 16;
 VAR_19->t_echo_delay = 16;


 VAR_19->chip_id = -1;
 if (VAR_19->dev.of_node) {
  uint32_t VAR_24;
  if (!FUNC_21(VAR_19->dev.of_node, "chip-id", &VAR_24))
   VAR_19->chip_id = VAR_24;

 }

 VAR_23 = FUNC_17(VAR_19);
 if (VAR_23) {
  FUNC_9(&VAR_15->dev,
    "can't set smode on slave:%02x:%02x %d\n",
    VAR_16, VAR_17, VAR_23);
  goto err_free;
 }


 VAR_23 = FUNC_0(VAR_19, VAR_12, &VAR_19->dev.devt,
     &VAR_19->cdev_idx);
 if (VAR_23)
  goto err_free;


 FUNC_3(&VAR_19->cdev, &VAR_10);
 VAR_23 = FUNC_2(&VAR_19->cdev, &VAR_19->dev);
 if (VAR_23) {
  FUNC_7(&VAR_19->dev, "Error %d creating slave device\n", VAR_23);
  goto err_free_ida;
 }






 if (VAR_15->link_config)
  VAR_15->link_config(VAR_15, VAR_16,
        VAR_19->t_send_delay,
        VAR_19->t_echo_delay);


 VAR_23 = FUNC_10(&VAR_19->dev, &VAR_13);
 if (VAR_23)
  FUNC_9(&VAR_19->dev, "failed to create raw attr: %d\n", VAR_23);


 VAR_23 = FUNC_16(VAR_19);
 if (VAR_23)
  FUNC_6(&VAR_15->dev, "failed during slave scan with: %d\n",
    VAR_23);

 return 0;

err_free_ida:
 FUNC_12(VAR_19->dev.devt);
err_free:
 FUNC_20(VAR_19->dev.of_node);
 FUNC_18(VAR_19);
 return VAR_23;
}
