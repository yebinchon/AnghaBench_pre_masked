
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;

int
FUNC_4(int VAR_5)
{





 FUNC_0(&VAR_4);
 if (VAR_3 & (1 << VAR_5)) {
  FUNC_3("isa_dma_acquire: channel %d already in use\n", VAR_5);
  FUNC_1(&VAR_4);
  return (VAR_0);
 }
 VAR_3 |= (1 << VAR_5);
 VAR_2 &= ~(1 << VAR_5);
 FUNC_1(&VAR_4);

 return (0);
}
