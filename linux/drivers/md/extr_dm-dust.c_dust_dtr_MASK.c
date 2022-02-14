
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dust_device {int dev; int badblock_count; int badblocklist; } ;
struct dm_target {struct dust_device* private; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct dm_target*,int ) ;
 int FUNC_2 (struct dust_device*) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 struct dust_device *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_1->badblocklist, VAR_1->badblock_count);
 FUNC_1(VAR_0, VAR_1->dev);
 FUNC_2(VAR_1);
}
