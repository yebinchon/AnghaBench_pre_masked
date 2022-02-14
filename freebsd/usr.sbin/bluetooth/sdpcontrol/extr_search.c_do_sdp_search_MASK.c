
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef size_t int32_t ;
struct TYPE_3__ {scalar_t__ flags; int attr; int vlen; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 size_t VAR_5 ;
 int FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int* VAR_21 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 size_t FUNC_6 (void*,int,int *,int ,int ,size_t,TYPE_1__*) ;
 int VAR_22 ;
 int VAR_23 ;
 size_t FUNC_7 (char*,char**,int) ;
 int FUNC_8 (char) ;
 TYPE_1__* VAR_24 ;
 size_t VAR_25 ;

__attribute__((used)) static int
FUNC_9(void *VAR_26, int VAR_27, char **VAR_28)
{
 char *VAR_29 = ((void*)0);
 int32_t VAR_30, VAR_31, VAR_32;
 uint16_t VAR_33;


 switch (VAR_27) {
 case 1:
  VAR_30 = FUNC_7(VAR_28[0], &VAR_29, 16);
  if (*VAR_29 != 0) {
   switch (FUNC_8(VAR_28[0][0])) {
   case 'c':
    switch (FUNC_8(VAR_28[0][1])) {
    case 'i':
     VAR_33 = VAR_6;
     break;

    case 't':
     VAR_33 = VAR_7;
     break;

    default:
     return (VAR_18);

    }
    break;

   case 'd':
    VAR_33 = VAR_8;
    break;

   case 'f':
    switch (FUNC_8(VAR_28[0][1])) {
    case 'a':
     VAR_33 = VAR_9;
     break;

    case 't':
     VAR_33 = VAR_15;
     break;

    default:
     return (VAR_18);

    }
    break;

   case 'g':
    VAR_33 = VAR_10;
    break;

   case 'h':
    switch (FUNC_8(VAR_28[0][1])) {
    case 'i':
     VAR_33 = VAR_12;
     break;

    case 's':
     VAR_33 = VAR_11;
     break;

    default:
     return (VAR_18);

    }
    break;

   case 'l':
    VAR_33 = VAR_13;
    break;

   case 'n':
    VAR_33 = VAR_14;
    break;

   case 'o':
    VAR_33 = VAR_16;
    break;

   case 's':
    VAR_33 = VAR_17;
    break;

   default:
    return (VAR_18);

   }
  } else
   VAR_33 = (uint16_t) VAR_30;
  break;

 default:
  return (VAR_18);
 }


 for (VAR_30 = 0; VAR_30 < VAR_25; VAR_30 ++) {
  VAR_24[VAR_30].flags = VAR_3;
  VAR_24[VAR_30].attr = 0;
  VAR_24[VAR_30].vlen = VAR_0;
  VAR_24[VAR_30].value = VAR_21[VAR_30];
 }


 VAR_30 = FUNC_6(VAR_26, 1, &VAR_33, VAR_20, VAR_19, VAR_25, VAR_24);
 if (VAR_30 != 0)
  return (VAR_1);


 for (VAR_30 = 0; VAR_30 < VAR_25; VAR_30 ++) {
  if (VAR_24[VAR_30].flags != VAR_4)
   break;

  switch (VAR_24[VAR_30].attr) {
  case 128:
   FUNC_2(VAR_23, "\n");
   if (VAR_24[VAR_30].vlen == 5) {
    FUNC_1(VAR_31, VAR_24[VAR_30].value);
    if (VAR_31 == VAR_5) {
     FUNC_0(VAR_32, VAR_24[VAR_30].value);
     FUNC_2(VAR_23, "Record Handle: " "%#8.8zx\n", VAR_32);

    } else
     FUNC_2(VAR_22, "Invalid type=%#zx " "Record Handle " "attribute!\n", VAR_31);


   } else
    FUNC_2(VAR_22, "Invalid size=%d for Record " "Handle attribute\n",

      VAR_24[VAR_30].vlen);
   break;

  case 129:
   FUNC_2(VAR_23, "Service Class ID List:\n");
   FUNC_5(VAR_24[VAR_30].value,
     VAR_24[VAR_30].value + VAR_24[VAR_30].vlen);
   break;

  case 130:
   FUNC_2(VAR_23, "Protocol Descriptor List:\n");
   FUNC_4(VAR_24[VAR_30].value,
     VAR_24[VAR_30].value + VAR_24[VAR_30].vlen);
   break;

  case 131:
   FUNC_2(VAR_23, "Bluetooth Profile Descriptor List:\n");
   FUNC_3(VAR_24[VAR_30].value,
     VAR_24[VAR_30].value + VAR_24[VAR_30].vlen);
   break;

  default:
   FUNC_2(VAR_22, "Unexpected attribute ID=%#4.4x\n",
     VAR_24[VAR_30].attr);
   break;
  }
 }

 return (VAR_2);
}
