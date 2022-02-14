
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int dbdma_channel_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

uint16_t
FUNC_1(dbdma_channel_t *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 return (VAR_2 & 0x0000ffff);
}
