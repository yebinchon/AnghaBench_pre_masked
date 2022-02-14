
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * VAR_16 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6()
{
  UBYTE VAR_17;
  UBYTE VAR_18;
  UBYTE VAR_19, VAR_20;

  VAR_18 = 10;
  VAR_19 = VAR_20 = 0;

  FUNC_4();
  FUNC_2();
  VAR_8;

  while(1) {
    FUNC_5();
    VAR_17 = FUNC_0();
    if(VAR_17 & (VAR_7|VAR_3|VAR_4|VAR_5)) {
      if(VAR_17 & VAR_7 && VAR_15 > 0)
 VAR_15--;
      if(VAR_17 & VAR_3 && VAR_15 < 143)
 VAR_15++;
      if(VAR_17 & VAR_4 && VAR_14 > 0)
 VAR_14--;
      if(VAR_17 & VAR_5 && VAR_14 < 159)
 VAR_14++;
      FUNC_2();
      while(VAR_18 && VAR_17 == FUNC_0()) {
 FUNC_5();
 VAR_18--;
      }
      VAR_18 = 1;
      VAR_19 = VAR_20 = 0;
    } else
      VAR_18 = 10;
    if(VAR_17 & VAR_6) {
      VAR_0;
      FUNC_1();
      FUNC_4();
      FUNC_2();
      VAR_8;
    }
    if((VAR_17 & (VAR_1|VAR_2)) == VAR_1) {
      if(!VAR_19) {
 VAR_19++;
 FUNC_3(VAR_14, VAR_15, VAR_11[VAR_12], VAR_16[VAR_13]);
      }
    } else
      VAR_19 = 0;
    if((VAR_17 & (VAR_1|VAR_2)) == VAR_2) {
      if(!VAR_20) {
 VAR_20++;
 FUNC_3(VAR_14, VAR_15, VAR_10, VAR_9);
      }
    } else
      VAR_20 = 0;
  }
}
