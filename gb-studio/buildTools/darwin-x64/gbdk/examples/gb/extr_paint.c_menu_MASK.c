
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UBYTE ;
struct TYPE_2__ {size_t up; size_t down; size_t left; size_t right; scalar_t__ cursor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 size_t VAR_21 ;
 TYPE_1__* VAR_22 ;
 scalar_t__ FUNC_1 () ;
 size_t VAR_23 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8()
{
  UBYTE VAR_24, VAR_25;
  UBYTE VAR_26;
  UBYTE VAR_27;

  VAR_26 = 50;

  for(VAR_24 = 0; VAR_24 < VAR_14; VAR_24++)
    FUNC_5(VAR_24,
      VAR_24 == VAR_3 + VAR_21 ||
      VAR_24 == VAR_1 + VAR_18 ||
      VAR_24 == VAR_2 + VAR_20);

  VAR_27 = VAR_19;
  VAR_19 = VAR_0;
  FUNC_4();
  FUNC_2();
  VAR_16;
  FUNC_7();
  do {
    FUNC_6();
    VAR_25 = FUNC_1();
    if(VAR_25 & (VAR_10|VAR_6|VAR_7|VAR_8)) {
      if(VAR_25 & VAR_10)
 VAR_23 = VAR_22[VAR_23].up;
      if(VAR_25 & VAR_6)
 VAR_23 = VAR_22[VAR_23].down;
      if(VAR_25 & VAR_7)
 VAR_23 = VAR_22[VAR_23].left;
      if(VAR_25 & VAR_8)
 VAR_23 = VAR_22[VAR_23].right;
      FUNC_2();
      while(VAR_26 && VAR_25 == FUNC_1()) {
 FUNC_6();
 VAR_26--;
      }
      VAR_26 = 10;
    } else
      VAR_26 = 50;
    if(VAR_25 & VAR_5) {
      if( VAR_23 <= VAR_13) {
 if(VAR_23 != VAR_21) {
   FUNC_0( VAR_21, VAR_17);
   VAR_21 = VAR_23 ;
   FUNC_0( VAR_21, VAR_15);
   VAR_27 = VAR_22[ VAR_21].cursor;
 }
      } else if(VAR_23 >= VAR_1 && VAR_23 <= VAR_11) {
 if(VAR_23 != VAR_1 + VAR_18) {
   FUNC_0(VAR_1 + VAR_18, VAR_17);
   VAR_18 = VAR_23 - VAR_1;
   FUNC_0(VAR_1 + VAR_18, VAR_15);
 }
      } else if(VAR_23 >= VAR_2 && VAR_23 <= VAR_12) {
 if(VAR_23 != VAR_2 + VAR_20) {
   FUNC_0(VAR_2 + VAR_20, VAR_17);
   VAR_20 = VAR_23 - VAR_2;
   FUNC_0(VAR_2 + VAR_20, VAR_15);
 }
      }
    }
  } while(VAR_25 != VAR_9);
  FUNC_7();
  for(VAR_24 = 0; VAR_24 < VAR_14; VAR_24++)
    FUNC_3(VAR_24);
  VAR_4;
  VAR_19 = VAR_27;
}
