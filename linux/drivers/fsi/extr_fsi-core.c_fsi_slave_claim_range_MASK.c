
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fsi_slave {scalar_t__ size; } ;


 int VAR_0 ;

extern int FUNC_0(struct fsi_slave *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 if (VAR_2 + VAR_3 < VAR_2)
  return -VAR_0;

 if (VAR_2 + VAR_3 > VAR_1->size)
  return -VAR_0;


 return 0;
}
