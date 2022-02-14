
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct charlcd {int height; int width; int bwidth; int hwidth; int * char_conv; int * ops; } ;
struct TYPE_3__ {scalar_t__ e; scalar_t__ rs; scalar_t__ bl; scalar_t__ cl; scalar_t__ da; scalar_t__ rw; } ;
struct TYPE_4__ {scalar_t__ proto; scalar_t__ charset; int initialized; struct charlcd* charlcd; TYPE_1__ pins; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;





 scalar_t__ VAR_24 ;
 void* VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 void* VAR_28 ;
 scalar_t__ VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 struct charlcd* FUNC_0 (int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 TYPE_2__ VAR_35 ;
 int ** VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int * VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int VAR_50 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct charlcd *VAR_51;

 VAR_51 = FUNC_0(0);
 if (!VAR_51)
  return;





 VAR_51->height = VAR_44;
 VAR_51->width = VAR_49;
 VAR_51->bwidth = VAR_38;
 VAR_51->hwidth = VAR_45;

 switch (VAR_50) {
 case 128:

  VAR_35.proto = VAR_22;
  VAR_35.charset = VAR_19;
  VAR_35.pins.e = VAR_31;
  VAR_35.pins.rs = VAR_25;

  VAR_51->width = 40;
  VAR_51->bwidth = 40;
  VAR_51->hwidth = 64;
  VAR_51->height = 2;
  break;
 case 130:

  VAR_35.proto = VAR_23;
  VAR_35.charset = VAR_18;
  VAR_35.pins.bl = VAR_25;
  VAR_35.pins.cl = VAR_31;
  VAR_35.pins.da = VAR_26;

  VAR_51->width = 16;
  VAR_51->bwidth = 40;
  VAR_51->hwidth = 16;
  VAR_51->height = 2;
  break;
 case 129:

  VAR_35.proto = VAR_22;
  VAR_35.charset = VAR_19;
  VAR_35.pins.e = VAR_25;
  VAR_35.pins.rs = VAR_30;
  VAR_35.pins.rw = VAR_27;

  VAR_51->width = 16;
  VAR_51->bwidth = 40;
  VAR_51->hwidth = 64;
  VAR_51->height = 2;
  break;
 case 132:

  VAR_35.proto = VAR_10;
  VAR_35.charset = VAR_1;

  break;
 case 131:

 default:
  VAR_35.proto = VAR_22;
  VAR_35.charset = VAR_19;
  VAR_35.pins.e = VAR_31;
  VAR_35.pins.rs = VAR_30;

  VAR_51->width = 16;
  VAR_51->bwidth = 40;
  VAR_51->hwidth = 64;
  VAR_51->height = 2;
  break;
 }


 if (VAR_44 != VAR_24)
  VAR_51->height = VAR_44;
 if (VAR_49 != VAR_24)
  VAR_51->width = VAR_49;
 if (VAR_38 != VAR_24)
  VAR_51->bwidth = VAR_38;
 if (VAR_45 != VAR_24)
  VAR_51->hwidth = VAR_45;
 if (VAR_40 != VAR_24)
  VAR_35.charset = VAR_40;
 if (VAR_46 != VAR_24)
  VAR_35.proto = VAR_46;
 if (VAR_43 != VAR_29)
  VAR_35.pins.e = VAR_43;
 if (VAR_47 != VAR_29)
  VAR_35.pins.rs = VAR_47;
 if (VAR_48 != VAR_29)
  VAR_35.pins.rw = VAR_48;
 if (VAR_41 != VAR_29)
  VAR_35.pins.cl = VAR_41;
 if (VAR_42 != VAR_29)
  VAR_35.pins.da = VAR_42;
 if (VAR_37 != VAR_29)
  VAR_35.pins.bl = VAR_37;


 if (VAR_51->width <= 0)
  VAR_51->width = VAR_11;
 if (VAR_51->bwidth <= 0)
  VAR_51->bwidth = VAR_0;
 if (VAR_51->hwidth <= 0)
  VAR_51->hwidth = VAR_3;
 if (VAR_51->height <= 0)
  VAR_51->height = VAR_2;

 if (VAR_35.proto == VAR_23) {
  VAR_51->ops = &VAR_33;

  if (VAR_35.pins.cl == VAR_29)
   VAR_35.pins.cl = VAR_8;
  if (VAR_35.pins.da == VAR_29)
   VAR_35.pins.da = VAR_9;

 } else if (VAR_35.proto == VAR_22) {
  VAR_51->ops = &VAR_32;

  if (VAR_35.pins.e == VAR_29)
   VAR_35.pins.e = VAR_5;
  if (VAR_35.pins.rs == VAR_29)
   VAR_35.pins.rs = VAR_6;
  if (VAR_35.pins.rw == VAR_29)
   VAR_35.pins.rw = VAR_7;
 } else {
  VAR_51->ops = &VAR_34;
 }

 if (VAR_35.pins.bl == VAR_29)
  VAR_35.pins.bl = VAR_4;

 if (VAR_35.pins.e == VAR_29)
  VAR_35.pins.e = VAR_28;
 if (VAR_35.pins.rs == VAR_29)
  VAR_35.pins.rs = VAR_28;
 if (VAR_35.pins.rw == VAR_29)
  VAR_35.pins.rw = VAR_28;
 if (VAR_35.pins.bl == VAR_29)
  VAR_35.pins.bl = VAR_28;
 if (VAR_35.pins.cl == VAR_29)
  VAR_35.pins.cl = VAR_28;
 if (VAR_35.pins.da == VAR_29)
  VAR_35.pins.da = VAR_28;

 if (VAR_35.charset == VAR_24)
  VAR_35.charset = VAR_1;

 if (VAR_35.charset == VAR_18)
  VAR_51->char_conv = VAR_39;
 else
  VAR_51->char_conv = ((void*)0);

 FUNC_1(VAR_35.pins.e, VAR_36[VAR_21][VAR_15],
      VAR_36[VAR_20][VAR_15]);
 FUNC_1(VAR_35.pins.rs, VAR_36[VAR_21][VAR_16],
      VAR_36[VAR_20][VAR_16]);
 FUNC_1(VAR_35.pins.rw, VAR_36[VAR_21][VAR_17],
      VAR_36[VAR_20][VAR_17]);
 FUNC_1(VAR_35.pins.bl, VAR_36[VAR_21][VAR_12],
      VAR_36[VAR_20][VAR_12]);
 FUNC_1(VAR_35.pins.cl, VAR_36[VAR_21][VAR_13],
      VAR_36[VAR_20][VAR_13]);
 FUNC_1(VAR_35.pins.da, VAR_36[VAR_21][VAR_14],
      VAR_36[VAR_20][VAR_14]);

 VAR_35.charlcd = VAR_51;
 VAR_35.initialized = 1;
}
