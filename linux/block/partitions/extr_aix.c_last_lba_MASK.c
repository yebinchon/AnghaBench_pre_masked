
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct block_device {TYPE_1__* bd_inode; } ;
struct TYPE_2__ {int i_size; } ;



__attribute__((used)) static u64 FUNC_0(struct block_device *VAR_0)
{
 if (!VAR_0 || !VAR_0->bd_inode)
  return 0;
 return (VAR_0->bd_inode->i_size >> 9) - 1ULL;
}
