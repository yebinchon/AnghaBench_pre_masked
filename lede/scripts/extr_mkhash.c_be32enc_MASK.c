
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, uint32_t VAR_1)
{
 uint8_t *VAR_2 = VAR_0;

 VAR_2[0] = ((uint8_t) ((VAR_1 >> 24) & 0xff));
 VAR_2[1] = ((uint8_t) ((VAR_1 >> 16) & 0xff));
 VAR_2[2] = ((uint8_t) ((VAR_1 >> 8) & 0xff));
 VAR_2[3] = ((uint8_t) (VAR_1 & 0xff));
}
