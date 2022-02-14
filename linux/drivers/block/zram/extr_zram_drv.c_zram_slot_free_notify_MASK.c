
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int miss_free; int notify_free; } ;
struct zram {TYPE_2__ stats; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_3__ {struct zram* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct zram*,unsigned long) ;
 int FUNC_2 (struct zram*,unsigned long) ;
 int FUNC_3 (struct zram*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct block_device *VAR_0,
    unsigned long VAR_1)
{
 struct zram *VAR_2;

 VAR_2 = VAR_0->bd_disk->private_data;

 FUNC_0(&VAR_2->stats.notify_free);
 if (!FUNC_2(VAR_2, VAR_1)) {
  FUNC_0(&VAR_2->stats.miss_free);
  return;
 }

 FUNC_1(VAR_2, VAR_1);
 FUNC_3(VAR_2, VAR_1);
}
