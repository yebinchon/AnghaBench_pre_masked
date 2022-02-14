
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,unsigned int,int,int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static inline void FUNC_4(unsigned int VAR_3, int VAR_4)
{
 int VAR_5 = 1000;

 if ( VAR_4 ) {
  while ( FUNC_3(VAR_3 + VAR_0 + 16) && VAR_5 > 0 )
   VAR_5--;
  *VAR_2 = FUNC_2(VAR_3 + VAR_0 + 16);
 } else {
  while ( FUNC_3(VAR_3) && VAR_5 > 0 )
   VAR_5--;
  *VAR_2 = FUNC_2(VAR_3);
 }

 FUNC_0(VAR_5 > 0, "queue = %u, is_tx = %d, MBOX_IGU3_ISR = 0x%08x", VAR_3, VAR_4, FUNC_1(VAR_1));
}
