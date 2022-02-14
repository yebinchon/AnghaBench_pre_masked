
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct log_writes_c {TYPE_2__* logdev; } ;
typedef int sector_t ;
struct TYPE_4__ {TYPE_1__* bdev; } ;
struct TYPE_3__ {int bd_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline sector_t FUNC_1(struct log_writes_c *VAR_1)
{
 return FUNC_0(VAR_1->logdev->bdev->bd_inode) >> VAR_0;
}
