
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(unsigned long VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2, VAR_4);
 FUNC_0(0xa, 0xf);
 FUNC_3(&VAR_2, VAR_4);
 *((volatile unsigned short *)FUNC_1(VAR_0)) =
       VAR_3 >> 4;
 *((volatile unsigned short *)FUNC_1(VAR_1)) =
       VAR_3 & 0xf;
}
