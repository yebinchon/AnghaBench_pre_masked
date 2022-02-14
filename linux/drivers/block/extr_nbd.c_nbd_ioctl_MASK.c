
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbd_device {int config_lock; struct nbd_config* config; } ;
struct nbd_config {int runtime_flags; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct nbd_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct block_device*,struct nbd_device*,unsigned int,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nbd_device*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct block_device *VAR_6, fmode_t VAR_7,
       unsigned int VAR_8, unsigned long VAR_9)
{
 struct nbd_device *VAR_10 = VAR_6->bd_disk->private_data;
 struct nbd_config *VAR_11 = VAR_10->config;
 int VAR_12 = -VAR_1;

 if (!FUNC_2(VAR_0))
  return -VAR_2;




 if (FUNC_0(VAR_8) != 0xab)
  return -VAR_1;

 FUNC_4(&VAR_10->config_lock);




 if (!FUNC_7(VAR_5, &VAR_11->runtime_flags) ||
     (VAR_8 == VAR_4 || VAR_8 == VAR_3))
  VAR_12 = FUNC_1(VAR_6, VAR_10, VAR_8, VAR_9);
 else
  FUNC_3(FUNC_6(VAR_10), "Cannot use ioctl interface on a netlink controlled device.\n");
 FUNC_5(&VAR_10->config_lock);
 return VAR_12;
}
