
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uiUnderlineColor ;
typedef int uiOpenTypeFeatures ;
typedef int uiForEach ;
typedef int uiAttributedString ;
typedef int uiAttribute ;
struct foreachParams {int dummy; } ;
typedef int guint16 ;
struct TYPE_4__ {int str; } ;
typedef int PangoUnderline ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct foreachParams*,size_t,size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int const*,double*,double*,double*,double*) ;
 int FUNC_13 (int const*) ;
 int * FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 int FUNC_17 (int const*) ;
 int FUNC_18 (int const*) ;
 int FUNC_19 (int const*) ;
 int FUNC_20 (int const*,int *,double*,double*,double*,double*) ;
 int FUNC_21 (int const*) ;
 int VAR_5 ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int ) ;
 TYPE_1__* FUNC_26 (int const*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;

__attribute__((used)) static uiForEach FUNC_29(const uiAttributedString *VAR_6, const uiAttribute *VAR_7, size_t VAR_8, size_t VAR_9, void *VAR_10)
{
 struct foreachParams *VAR_11 = (struct foreachParams *) VAR_10;
 double VAR_12, VAR_13, VAR_14, VAR_15;
 PangoUnderline VAR_16;
 uiUnderlineColor VAR_17;
 const uiOpenTypeFeatures *VAR_18;
 GString *VAR_19;

 switch (FUNC_15(VAR_7)) {
 case 143:
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_4(FUNC_13(VAR_7)));
  break;
 case 140:
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_6(FUNC_1(FUNC_17(VAR_7))));
  break;
 case 136:

  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_11(FUNC_28(FUNC_21(VAR_7))));
  break;
 case 141:
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_8(FUNC_25(FUNC_16(VAR_7))));
  break;
 case 139:
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_7(FUNC_27(FUNC_18(VAR_7))));
  break;
 case 144:
  FUNC_12(VAR_7, &VAR_12, &VAR_13, &VAR_14, &VAR_15);
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_5(
    (guint16) (VAR_12 * 65535.0),
    (guint16) (VAR_13 * 65535.0),
    (guint16) (VAR_14 * 65535.0)));
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_24(
    (guint16) (VAR_15 * 65535.0)));
  break;
 case 145:

  FUNC_12(VAR_7, &VAR_12, &VAR_13, &VAR_14, &VAR_15);
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_3(
    (guint16) (VAR_12 * 65535.0),
    (guint16) (VAR_13 * 65535.0),
    (guint16) (VAR_14 * 65535.0)));
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_22(
    (guint16) (VAR_15 * 65535.0)));
  break;
 case 138:
  switch (FUNC_19(VAR_7)) {
  case 130:
   VAR_16 = VAR_2;
   break;
  case 129:
   VAR_16 = VAR_3;
   break;
  case 131:
   VAR_16 = VAR_0;
   break;
  case 128:
   VAR_16 = VAR_1;
   break;
  }
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_10(VAR_16));
  break;
 case 137:
  FUNC_20(VAR_7, &VAR_17, &VAR_12, &VAR_13, &VAR_14, &VAR_15);
  switch (VAR_17) {
  case 134:
   FUNC_0(VAR_11, VAR_8, VAR_9,
    FUNC_9(
     (guint16) (VAR_12 * 65535.0),
     (guint16) (VAR_13 * 65535.0),
     (guint16) (VAR_14 * 65535.0)));
   break;
  case 132:

   FUNC_0(VAR_11, VAR_8, VAR_9,
    FUNC_9(65535, 0, 0));
   break;
  case 133:

   FUNC_0(VAR_11, VAR_8, VAR_9,
    FUNC_9(0, 65535, 0));
   break;
  case 135:

   FUNC_0(VAR_11, VAR_8, VAR_9,
    FUNC_9(0, 0, 65535));
   break;
  }
  break;
 case 142:


  VAR_18 = FUNC_14(VAR_7);
  if (VAR_18 == ((void*)0))
   break;
  VAR_19 = FUNC_26(VAR_18);
  FUNC_0(VAR_11, VAR_8, VAR_9,
   FUNC_23(VAR_19->str));
  FUNC_2(VAR_19, VAR_4);
  break;
 default:

  ;
 }
 return VAR_5;
}
