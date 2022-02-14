
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(int VAR_10, caddr_t VAR_11, int VAR_12, int VAR_13)
{
 FUNC_1(&VAR_9);
 if (((VAR_7 & (1 << VAR_13)) == 0) &&
     (VAR_4 & (1 << VAR_13)) == 0 )
  FUNC_5("isa_dmadone: channel %d not busy\n", VAR_13);

 if ((VAR_4 & (1 << VAR_13)) == 0)
  FUNC_3(VAR_13 & 4 ? VAR_1 : VAR_0, (VAR_13 & 3) | 4);

 if (VAR_6 & (1 << VAR_13)) {

  if (VAR_10 & VAR_2)
   FUNC_0(VAR_5[VAR_13], VAR_11, VAR_12);

  VAR_6 &= ~(1 << VAR_13);
 }
 VAR_7 &= ~(1 << VAR_13);
 FUNC_2(&VAR_9);
}
