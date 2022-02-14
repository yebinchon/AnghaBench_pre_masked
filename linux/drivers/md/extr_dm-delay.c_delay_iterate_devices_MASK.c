
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_target {int len; struct delay_c* private; } ;
struct TYPE_6__ {int start; int dev; } ;
struct TYPE_5__ {int start; int dev; } ;
struct TYPE_4__ {int start; int dev; } ;
struct delay_c {TYPE_3__ flush; TYPE_2__ write; TYPE_1__ read; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
     iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct delay_c *VAR_3 = VAR_0->private;
 int VAR_4 = 0;

 VAR_4 = VAR_1(VAR_0, VAR_3->read.dev, VAR_3->read.start, VAR_0->len, VAR_2);
 if (VAR_4)
  goto out;
 VAR_4 = VAR_1(VAR_0, VAR_3->write.dev, VAR_3->write.start, VAR_0->len, VAR_2);
 if (VAR_4)
  goto out;
 VAR_4 = VAR_1(VAR_0, VAR_3->flush.dev, VAR_3->flush.start, VAR_0->len, VAR_2);
 if (VAR_4)
  goto out;

out:
 return VAR_4;
}
