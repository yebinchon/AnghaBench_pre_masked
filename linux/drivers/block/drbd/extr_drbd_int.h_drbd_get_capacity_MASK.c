
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_inode; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline sector_t FUNC_1(struct block_device *VAR_0)
{

 return VAR_0 ? FUNC_0(VAR_0->bd_inode) >> 9 : 0;
}
