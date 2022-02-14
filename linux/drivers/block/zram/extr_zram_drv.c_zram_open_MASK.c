
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zram {scalar_t__ claim; } ;
struct block_device {TYPE_1__* bd_disk; int bd_mutex; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct zram* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_1, fmode_t VAR_2)
{
 int VAR_3 = 0;
 struct zram *VAR_4;

 FUNC_0(!FUNC_1(&VAR_1->bd_mutex));

 VAR_4 = VAR_1->bd_disk->private_data;

 if (VAR_4->claim)
  VAR_3 = -VAR_0;

 return VAR_3;
}
