
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era {int origin_dev; } ;
struct dm_target {struct era* private; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0,
          iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct era *VAR_3 = VAR_0->private;
 return VAR_1(VAR_0, VAR_3->origin_dev, 0, FUNC_0(VAR_3->origin_dev), VAR_2);
}
