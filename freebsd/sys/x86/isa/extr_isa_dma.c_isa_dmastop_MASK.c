
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int) ;

int
FUNC_5(int VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_5);
 if ((VAR_4 & (1 << VAR_6)) == 0)
  FUNC_4("isa_dmastop: channel %d not acquired\n", VAR_6);

 if (((VAR_3 & (1 << VAR_6)) == 0) &&
     ((VAR_2 & (1 << VAR_6)) == 0)) {
  FUNC_4("chan %d not busy\n", VAR_6);
  FUNC_2(&VAR_5);
  return -2 ;
 }

 if ((VAR_6 & 4) == 0) {
  FUNC_3(VAR_0, (VAR_6 & 3) | 4 );
 } else {
  FUNC_3(VAR_1, (VAR_6 & 3) | 4 );
 }

 VAR_7 = FUNC_0(VAR_6);

 FUNC_2(&VAR_5);

 return (VAR_7);
}
