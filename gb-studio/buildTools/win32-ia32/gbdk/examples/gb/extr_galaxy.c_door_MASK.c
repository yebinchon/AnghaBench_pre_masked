
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int,int,int,int,int ) ;

void FUNC_1()
{
  if(VAR_6 == VAR_4) {
    VAR_5++;

    FUNC_0(2, 2, 12, 6, VAR_7[VAR_5]);
    if(VAR_5 == VAR_2)
      VAR_6 = VAR_3;
  } else if(VAR_6 == VAR_1) {
    VAR_5--;

    FUNC_0(2, 2, 12, 6, VAR_7[VAR_5]);
    if(VAR_5 == 0)
      VAR_6 = VAR_0;
  }
}
