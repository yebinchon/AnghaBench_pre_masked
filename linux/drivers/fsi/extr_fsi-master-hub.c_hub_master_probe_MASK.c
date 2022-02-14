
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int of_node; int release; struct device* parent; } ;
struct TYPE_4__ {int n_links; TYPE_1__ dev; int link_enable; int send_break; int write; int read; } ;
struct fsi_master_hub {int size; TYPE_2__ master; struct fsi_device* upstream; int addr; } ;
struct fsi_device {int slave; } ;
struct device {int dummy; } ;
typedef int __reg ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct fsi_master_hub*) ;
 int FUNC_5 (struct fsi_device*,int ,int *,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_10 (struct fsi_master_hub*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct fsi_master_hub* FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;
 struct fsi_device* FUNC_13 (struct device*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_10)
{
 struct fsi_device *VAR_11 = FUNC_13(VAR_10);
 struct fsi_master_hub *VAR_12;
 uint32_t VAR_13, VAR_14;
 __be32 VAR_15;
 int VAR_16;

 VAR_16 = FUNC_5(VAR_11, VAR_3, &VAR_15, sizeof(VAR_15));
 if (VAR_16)
  return VAR_16;

 VAR_13 = FUNC_0(VAR_15);
 VAR_14 = (VAR_13 >> 8) & 0xff;
 FUNC_1(VAR_10, "hub version %08x (%d links)\n", VAR_13, VAR_14);

 VAR_16 = FUNC_7(VAR_11->slave, VAR_1,
   VAR_2 * VAR_14);
 if (VAR_16) {
  FUNC_2(VAR_10, "can't claim slave address range for links");
  return VAR_16;
 }

 VAR_12 = FUNC_11(sizeof(*VAR_12), VAR_4);
 if (!VAR_12) {
  VAR_16 = -VAR_0;
  goto err_release;
 }

 VAR_12->addr = VAR_1;
 VAR_12->size = VAR_2 * VAR_14;
 VAR_12->upstream = VAR_11;

 VAR_12->master.dev.parent = VAR_10;
 VAR_12->master.dev.release = VAR_8;
 VAR_12->master.dev.of_node = FUNC_12(FUNC_3(VAR_10));

 VAR_12->master.n_links = VAR_14;
 VAR_12->master.read = VAR_7;
 VAR_12->master.write = VAR_9;
 VAR_12->master.send_break = VAR_5;
 VAR_12->master.link_enable = VAR_6;

 FUNC_4(VAR_10, VAR_12);

 FUNC_10(VAR_12);

 VAR_16 = FUNC_6(&VAR_12->master);
 if (VAR_16)
  goto err_release;
 FUNC_9(&VAR_12->master.dev);
 return 0;

err_release:
 FUNC_8(VAR_11->slave, VAR_1,
   VAR_2 * VAR_14);
 return VAR_16;
}
