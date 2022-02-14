
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int* const,unsigned int) ;
 int FUNC_1 (unsigned int* const,int ) ;

__attribute__((used)) static inline void FUNC_2(u32 * const VAR_6, dma_addr_t VAR_7,
    unsigned int VAR_8, u32 VAR_9)
{
 u32 VAR_10;

 VAR_10 = VAR_9 & VAR_1;

 FUNC_0(VAR_6, VAR_0 | VAR_9 | VAR_8);


 if (!(VAR_10 == VAR_4 ||
       VAR_10 == VAR_2 ||
       VAR_10 == VAR_3 ||
       VAR_10 == VAR_5))
  FUNC_1(VAR_6, VAR_7);
}
