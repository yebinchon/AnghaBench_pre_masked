
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef int sector_t ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static dm_block_t FUNC_2(struct block_device *VAR_1)
{
 sector_t VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0);

 return VAR_2;
}
