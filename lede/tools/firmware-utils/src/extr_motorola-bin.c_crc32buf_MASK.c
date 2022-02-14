
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static uint32_t FUNC_0(unsigned char *VAR_2, size_t VAR_3)
{
 uint32_t VAR_4 = 0xFFFFFFFF;

 for (; VAR_3; VAR_3--, VAR_2++)
  VAR_4 = VAR_1[(uint8_t)VAR_4 ^ *VAR_2] ^ (VAR_4 >> VAR_0);
 return VAR_4;
}
