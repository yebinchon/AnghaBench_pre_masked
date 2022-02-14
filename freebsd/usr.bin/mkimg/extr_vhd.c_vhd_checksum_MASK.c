
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(void *VAR_0, size_t VAR_1)
{
 uint8_t *VAR_2 = VAR_0;
 uint32_t VAR_3;
 size_t VAR_4;

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3 += VAR_2[VAR_4];
 return (~VAR_3);
}
