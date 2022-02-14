
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dust_device {int sect_per_block_shift; int dust_lock; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct dust_device*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct dust_device *VAR_1, sector_t VAR_2,
     bool VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3) {
  VAR_2 >>= VAR_1->sect_per_block_shift;
  FUNC_1(&VAR_1->dust_lock, VAR_4);
  FUNC_0(VAR_1, VAR_2);
  FUNC_2(&VAR_1->dust_lock, VAR_4);
 }

 return VAR_0;
}
