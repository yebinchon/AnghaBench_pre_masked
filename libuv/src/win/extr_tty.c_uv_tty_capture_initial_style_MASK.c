
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wAttributes; } ;
typedef TYPE_1__ CONSOLE_SCREEN_BUFFER_INFO ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_0(CONSOLE_SCREEN_BUFFER_INFO* VAR_15) {
  static int VAR_16 = 0;



  if (VAR_16)
    return;


  VAR_14 = VAR_15->wAttributes;


  if (VAR_14 == 0)
    VAR_14 = 7;


  VAR_12 = 0;
  VAR_10 = 0;
  VAR_11 = 0;
  VAR_9 = 0;
  VAR_13 = 0;

  if (VAR_14 & VAR_8)
    VAR_12 |= 1;

  if (VAR_14 & VAR_6)
    VAR_12 |= 2;

  if (VAR_14 & VAR_5)
    VAR_12 |= 4;

  if (VAR_14 & VAR_3)
    VAR_10 |= 1;

  if (VAR_14 & VAR_1)
    VAR_10 |= 2;

  if (VAR_14 & VAR_0)
    VAR_10 |= 4;

  if (VAR_14 & VAR_7)
    VAR_11 = 1;

  if (VAR_14 & VAR_2)
    VAR_9 = 1;

  if (VAR_14 & VAR_4)
    VAR_13 = 1;

  VAR_16 = 1;
}
