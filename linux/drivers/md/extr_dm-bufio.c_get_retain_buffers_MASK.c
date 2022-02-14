
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {unsigned long sectors_per_block_bits; unsigned long block_size; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned long FUNC_2(struct dm_bufio_client *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1);
 if (FUNC_1(VAR_2->sectors_per_block_bits >= 0))
  VAR_3 >>= VAR_2->sectors_per_block_bits + VAR_0;
 else
  VAR_3 /= VAR_2->block_size;
 return VAR_3;
}
