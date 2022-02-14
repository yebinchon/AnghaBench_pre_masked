
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (char*) ;
 void** FUNC_1 (void**,int ) ;
 void** FUNC_2 (void**,int ) ;

uint8_t *FUNC_3(uint8_t *VAR_0, size_t VAR_1, uint8_t VAR_2, uint8_t VAR_3, int32_t VAR_4)
{
    if (VAR_1 > 0xffffff)
        FUNC_0("invalid length");

    VAR_0 = FUNC_1(VAR_0, (uint32_t)VAR_1);
    *VAR_0++ = VAR_2;
    *VAR_0++ = VAR_3;
    VAR_0 = FUNC_2(VAR_0, VAR_4);

    return VAR_0;
}
