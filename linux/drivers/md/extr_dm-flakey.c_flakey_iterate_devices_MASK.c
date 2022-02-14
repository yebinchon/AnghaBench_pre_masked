
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flakey_c {int start; int dev; } ;
struct dm_target {int len; struct flakey_c* private; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0, iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct flakey_c *VAR_3 = VAR_0->private;

 return VAR_1(VAR_0, VAR_3->dev, VAR_3->start, VAR_0->len, VAR_2);
}
