
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_2__ {scalar_t__ name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int,int ) ;

UBYTE FUNC_5(UBYTE VAR_6)
{
  UBYTE VAR_7;

  FUNC_0();
  FUNC_2(VAR_0, VAR_2);
  FUNC_3(VAR_5[0].name);

  for(VAR_7 = 0; VAR_5[VAR_7+1].name; VAR_7++) {
    FUNC_2(VAR_0, VAR_1+VAR_7);
    FUNC_3(VAR_5[VAR_7+1].name);
    FUNC_2(VAR_4, VAR_1+VAR_7);
    FUNC_4(FUNC_1(VAR_6, VAR_7), 10, VAR_3);
  }
  return VAR_7-1;
}
