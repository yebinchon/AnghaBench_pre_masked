
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_inode; } ;
typedef int sector_t ;
struct TYPE_2__ {int i_size; } ;



__attribute__((used)) static inline sector_t FUNC_0(struct block_device *VAR_0)
{
 return VAR_0->bd_inode->i_size >> 9;
}
