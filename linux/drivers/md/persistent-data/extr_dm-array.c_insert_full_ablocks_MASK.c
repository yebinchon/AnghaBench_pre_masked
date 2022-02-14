
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_array_info {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_array_info*,size_t,unsigned int,unsigned int,unsigned int,void const*,int *) ;

__attribute__((used)) static int FUNC_1(struct dm_array_info *VAR_0, size_t VAR_1,
          unsigned VAR_2, unsigned VAR_3,
          unsigned VAR_4, const void *VAR_5,
          dm_block_t *VAR_6)
{
 int VAR_7 = 0;

 for (; !VAR_7 && VAR_2 != VAR_3; VAR_2++)
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2, VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
