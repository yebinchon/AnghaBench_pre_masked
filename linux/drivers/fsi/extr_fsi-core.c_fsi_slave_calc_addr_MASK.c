
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fsi_slave {int size; scalar_t__ id; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fsi_slave *VAR_1, uint32_t *VAR_2,
  uint8_t *VAR_3)
{
 uint32_t VAR_4 = *VAR_2;
 uint8_t VAR_5 = *VAR_3;

 if (VAR_4 > VAR_1->size)
  return -VAR_0;




 if (VAR_4 > 0x1fffff) {
  if (VAR_1->id != 0)
   return -VAR_0;
  VAR_5 = (VAR_4 >> 21) & 0x3;
  VAR_4 &= 0x1fffff;
 }

 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;
 return 0;
}
