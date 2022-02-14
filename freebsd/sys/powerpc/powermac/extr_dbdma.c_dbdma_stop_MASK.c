
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int dbdma_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(dbdma_channel_t *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = VAR_4;
 VAR_6 <<= VAR_2;

 FUNC_2(VAR_5, VAR_0, VAR_6);

 while (FUNC_1(VAR_5, VAR_1) & VAR_3)
  FUNC_0(5);
}
