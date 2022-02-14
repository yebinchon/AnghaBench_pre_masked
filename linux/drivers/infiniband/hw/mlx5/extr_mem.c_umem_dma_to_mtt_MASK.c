
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u64 FUNC_0(dma_addr_t VAR_5)
{
 u64 VAR_6 = VAR_5 & VAR_2;

 if (VAR_5 & VAR_3)
  VAR_6 |= VAR_0;
 if (VAR_5 & VAR_4)
  VAR_6 |= VAR_1;

 return VAR_6;
}
