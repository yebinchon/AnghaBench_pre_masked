
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int quicly_address_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_1, quicly_address_t *VAR_2, quicly_address_t *VAR_3, uint8_t VAR_4)
{
    uint8_t *VAR_5 = VAR_1;

    *VAR_5++ = 0x80;
    VAR_5 = FUNC_1(VAR_5, VAR_0);
    VAR_5 = FUNC_0(VAR_5, VAR_2);
    VAR_5 = FUNC_0(VAR_5, VAR_3);
    *VAR_5++ = VAR_4;

    return VAR_5 - (uint8_t *)VAR_1;
}
