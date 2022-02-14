
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct fsi_device {size_t size; size_t addr; int slave; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,void*,size_t) ;

int FUNC_1(struct fsi_device *VAR_1, uint32_t VAR_2, void *VAR_3,
  size_t VAR_4)
{
 if (VAR_2 > VAR_1->size || VAR_4 > VAR_1->size || VAR_2 > VAR_1->size - VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_1->slave, VAR_1->addr + VAR_2, VAR_3, VAR_4);
}
