
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct fsi_slave {int dev; int id; int link; TYPE_1__* master; } ;
struct TYPE_6__ {int of_node; } ;
struct fsi_device {int engine_type; int version; int unit; int addr; int size; TYPE_2__ dev; struct fsi_slave* slave; } ;
typedef int data ;
typedef int __be32 ;
struct TYPE_5__ {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,char*,int,int,int,int,int) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int ,int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_8 ;
 struct fsi_device* FUNC_6 (struct fsi_slave*) ;
 int FUNC_7 (struct fsi_device*) ;
 int FUNC_8 (struct fsi_slave*,int,int *,int) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct fsi_slave *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11, VAR_12;
 VAR_10 = VAR_8 * 3;
 for (VAR_12 = 2; VAR_12 < VAR_8 / sizeof(uint32_t); VAR_12++) {
  uint8_t VAR_13, VAR_14, VAR_15, VAR_16;
  struct fsi_device *VAR_17;
  uint32_t VAR_18;
  __be32 VAR_19;

  VAR_11 = FUNC_8(VAR_9, (VAR_12 + 1) * sizeof(VAR_19),
    &VAR_19, sizeof(VAR_19));
  if (VAR_11) {
   FUNC_4(&VAR_9->dev,
    "error reading slave registers\n");
   return -1;
  }
  VAR_18 = FUNC_0(VAR_19);

  VAR_16 = FUNC_1(0, VAR_18, 32);
  if (VAR_16) {
   FUNC_4(&VAR_9->dev,
    "crc error in slave register at 0x%04x\n",
    VAR_12);
   return -1;
  }

  VAR_13 = (VAR_18 & VAR_2)
   >> VAR_3;
  VAR_14 = (VAR_18 & VAR_6)
   >> VAR_7;
  VAR_15 = (VAR_18 & VAR_4)
   >> VAR_5;





  if (VAR_15 != 0 && VAR_13 != 0) {


   VAR_17 = FUNC_6(VAR_9);
   if (!VAR_17)
    return -VAR_0;

   VAR_17->slave = VAR_9;
   VAR_17->engine_type = VAR_15;
   VAR_17->version = VAR_14;
   VAR_17->unit = VAR_12;
   VAR_17->addr = VAR_10;
   VAR_17->size = VAR_13 * VAR_8;

   FUNC_2(&VAR_9->dev,
   "engine[%i]: type %x, version %x, addr %x size %x\n",
     VAR_17->unit, VAR_17->engine_type, VAR_14,
     VAR_17->addr, VAR_17->size);

   FUNC_3(&VAR_17->dev, "%02x:%02x:%02x:%02x",
     VAR_9->master->idx, VAR_9->link,
     VAR_9->id, VAR_12 - 2);
   VAR_17->dev.of_node = FUNC_7(VAR_17);

   VAR_11 = FUNC_5(&VAR_17->dev);
   if (VAR_11) {
    FUNC_4(&VAR_9->dev, "add failed: %d\n", VAR_11);
    FUNC_9(&VAR_17->dev);
   }
  }

  VAR_10 += VAR_13 * VAR_8;

  if (!(VAR_18 & VAR_1))
   break;
 }

 return 0;
}
