
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int UBYTE ;
struct TYPE_28__ {int w; } ;
struct TYPE_27__ {int w; } ;
struct TYPE_26__ {int w; } ;
struct TYPE_20__ {scalar_t__ l; void* h; } ;
struct TYPE_25__ {TYPE_1__ b; } ;
struct TYPE_21__ {scalar_t__ l; void* h; } ;
struct TYPE_24__ {TYPE_2__ b; } ;
struct TYPE_23__ {int w; } ;
struct TYPE_22__ {int w; } ;
struct TYPE_19__ {scalar_t__ w; } ;
struct TYPE_18__ {scalar_t__ w; } ;
struct TYPE_17__ {int w; } ;
struct TYPE_16__ {int w; } ;
struct TYPE_15__ {int w; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int FUNC_0 () ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_14__ VAR_28 ;
 TYPE_13__ VAR_29 ;
 TYPE_12__ VAR_30 ;
 TYPE_11__ VAR_31 ;
 int VAR_32 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (int,int,int,int,int ) ;
 int FUNC_10 (int,int,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int,int ) ;
 int FUNC_13 (int,int,int,int,int ) ;
 scalar_t__ VAR_39 ;
 TYPE_10__ VAR_40 ;
 TYPE_9__ VAR_41 ;
 TYPE_8__ VAR_42 ;
 TYPE_7__ VAR_43 ;
 int VAR_44 ;
 int FUNC_14 () ;
 int VAR_45 ;
 int FUNC_15 () ;
 TYPE_6__ VAR_46 ;
 TYPE_5__ VAR_47 ;
 TYPE_4__ VAR_48 ;
 TYPE_3__ VAR_49 ;

int FUNC_16()
{
  UBYTE VAR_50, VAR_51;

  FUNC_1();
  VAR_3;
  VAR_13 = 0x67;
  VAR_35 = VAR_1;


  VAR_0 = VAR_17 = VAR_18 = 0xE4U;


  FUNC_8(0xFC, 0x04, VAR_44);
  FUNC_8(0x00, 0x2D, VAR_26);






  for(VAR_50 = 0; VAR_50 < 32; VAR_50+=8)
    for(VAR_51 = 0; VAR_51 < 32; VAR_51+=8)
      FUNC_9(VAR_50, VAR_51, 8, 8, VAR_27);
  VAR_28.w = 0;
  VAR_21 = 0;
  VAR_29.w = 0;
  VAR_22 = 0;
  VAR_30.w = 0xFF00;
  VAR_31.w = 0x0080;


  FUNC_12(0x80, 0x21, VAR_37);






  FUNC_13(0, 0, 16, 10, VAR_38);






  FUNC_13(2, 2, 12, 6, VAR_33);
  VAR_46.b.h = VAR_14;
  VAR_46.b.l = 0;
  VAR_24 = VAR_14;
  VAR_47.b.h = VAR_15;
  VAR_47.b.l = 0;
  VAR_25 = VAR_15;
  VAR_48.w = 0xFF80;
  VAR_49.w = 0xFFC0;


  FUNC_10(0x00, 0x1C, VAR_36);
  FUNC_11(0, 0x00);
  FUNC_11(1, 0x00);
  VAR_39 = 0;
  VAR_40.w = 0x1000;
  VAR_41.w = 0x1000;
  VAR_42.w = 0x0040;
  VAR_43.w = 0x0040;
  FUNC_14();
  FUNC_6();

  VAR_4;
  FUNC_3();

  while(1) {

    for(VAR_50 = 0; VAR_50 < 4; VAR_50++)
      FUNC_15();
    VAR_45++;
    FUNC_4();
    FUNC_2();
    FUNC_7();
    FUNC_0();
    VAR_50 = FUNC_5();
    if(VAR_50 & VAR_6) {
      if(VAR_50 & VAR_12)
 VAR_31.w -= 0x0010;
      if(VAR_50 & VAR_7)
 VAR_31.w += 0x0010;
      if(VAR_50 & VAR_8)
 VAR_30.w -= 0x0010;
      if(VAR_50 & VAR_9)
 VAR_30.w += 0x0010;
    } else if(VAR_50 & VAR_5) {
      if(VAR_50 & VAR_12)
 VAR_49.w -= 0x0010;
      if(VAR_50 & VAR_7)
 VAR_49.w += 0x0010;
      if(VAR_50 & VAR_8)
 VAR_48.w -= 0x0010;
      if(VAR_50 & VAR_9)
 VAR_48.w += 0x0010;
    } else {
      if(VAR_50 & VAR_10)
 VAR_32 = VAR_23;
      if(VAR_50 & VAR_11)
 if(VAR_35 == VAR_1) {
   VAR_35 = VAR_20;
   VAR_34 = 0;
 } else if(VAR_35 == VAR_19) {
   VAR_35 = VAR_2;
   VAR_34 = VAR_16;
 }
      if(VAR_50 & VAR_12)
 VAR_43.w -= 0x0010;
      if(VAR_50 & VAR_7)
 VAR_43.w += 0x0010;
      if(VAR_50 & VAR_8)
 VAR_42.w -= 0x0010;
      if(VAR_50 & VAR_9)
 VAR_42.w += 0x0010;
    }
  }
}
