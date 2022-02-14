
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct hid_device {size_t control_psm; size_t interrupt_psm; int reconnect_initiate; int battery_power; int normally_connectable; int * desc; void* version; void* product_id; void* vendor_id; int bdaddr; int name; } ;
typedef size_t int32_t ;
typedef void* int16_t ;
typedef int bdaddr_t ;
struct TYPE_6__ {scalar_t__ flags; int attr; size_t vlen; int * value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;




 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 size_t VAR_7 ;
 int FUNC_0 (void*,int *) ;
 int FUNC_1 (size_t,int *) ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 () ;
 size_t FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (scalar_t__) ;
 int * FUNC_9 (int *,size_t) ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (void*,int *) ;
 void* FUNC_13 (int const*,int *) ;
 scalar_t__ FUNC_14 (void*,int,int *,int,int *,size_t,TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;

__attribute__((used)) static int32_t
FUNC_15(bdaddr_t const *VAR_15, struct hid_device *VAR_16, int32_t *VAR_17)
{
 void *VAR_18 = ((void*)0);
 uint8_t *VAR_19 = ((void*)0), *VAR_20;
 int32_t VAR_21, VAR_22 = -1, VAR_23 = -1,
     VAR_24 = -1,
     VAR_25 = 0, VAR_26 = 0,
     VAR_27 = -1, VAR_28;
 int16_t VAR_29 = 0, VAR_30 = 0, VAR_31 = 0;
 bdaddr_t VAR_32;
 char VAR_33[VAR_3];

 if (VAR_15 == ((void*)0))
  VAR_15 = VAR_4;
 if (VAR_16 == ((void*)0))
  FUNC_8(VAR_0);

 FUNC_4();

 if ((VAR_18 = FUNC_13(VAR_15, &VAR_16->bdaddr)) == ((void*)0))
  FUNC_8(VAR_2);
 if (FUNC_11(VAR_18) != 0)
  FUNC_8(FUNC_11(VAR_18));
 if (FUNC_14(VAR_18, 1, &VAR_12, VAR_10, VAR_8, VAR_11, VAR_14) != 0)
                FUNC_8(FUNC_11(VAR_18));

 for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21 ++) {
  if (VAR_14[VAR_21].flags != VAR_6)
   continue;

  switch (VAR_14[VAR_21].attr) {
  case 128:
   VAR_22 = FUNC_7(&VAR_14[VAR_21]);
   break;

  case 132:
   VAR_23 = FUNC_7(&VAR_14[VAR_21]);
   break;

  case 0x0205:
   VAR_24 = FUNC_5(&VAR_14[VAR_21]);
   break;

  case 0x0206:
   if (FUNC_6(&VAR_14[VAR_21]) == 0) {
    VAR_19 = VAR_14[VAR_21].value;
    VAR_27 = VAR_14[VAR_21].vlen;
   }
   break;

  case 0x0209:
   VAR_26 = FUNC_5(&VAR_14[VAR_21]);
   break;

  case 0x020d:
   VAR_25 = FUNC_5(&VAR_14[VAR_21]);
   break;
  }
 }

 FUNC_4();

 if (FUNC_14(VAR_18, 1, &VAR_13, 1, &VAR_9, VAR_11, VAR_14) != 0)
                FUNC_8(FUNC_11(VAR_18));


 if (FUNC_12(VAR_18, &VAR_32) != 0 ||
     FUNC_2(VAR_33, &VAR_32) == 0)
  FUNC_8(VAR_1);

        FUNC_10(VAR_18);
        VAR_18 = ((void*)0);


 for (VAR_21 = 0; VAR_21 < 3; VAR_21 ++ ) {
  if (VAR_14[VAR_21].flags == VAR_5 )
   continue;


  if (VAR_14[VAR_21].vlen != 3)
   continue;


  VAR_20 = VAR_14[VAR_21].value;
  FUNC_1(VAR_28, VAR_20);
  if (VAR_28 != VAR_7 )
   continue;

  switch (VAR_14[VAR_21].attr) {
   case 130:
    FUNC_0(VAR_29, VAR_20);
    break;
   case 131:
    FUNC_0(VAR_30, VAR_20);
    break;
   case 129:
    FUNC_0(VAR_31, VAR_20);
    break;
   default:
    break;
  }
 }

 if (VAR_22 == -1 || VAR_23 == -1 ||
     VAR_24 == -1 ||
     VAR_19 == ((void*)0) || VAR_27 == -1)
  FUNC_8(VAR_1);
 VAR_16->name = FUNC_3(VAR_33, &VAR_16->bdaddr);
 VAR_16->vendor_id = VAR_29;
 VAR_16->product_id = VAR_30;
 VAR_16->version = VAR_31;
 VAR_16->control_psm = VAR_22;
 VAR_16->interrupt_psm = VAR_23;
 VAR_16->reconnect_initiate = VAR_24? 1 : 0;
 VAR_16->battery_power = VAR_26? 1 : 0;
 VAR_16->normally_connectable = VAR_25? 1 : 0;
 VAR_16->desc = FUNC_9(VAR_19, VAR_27);
 if (VAR_16->desc == ((void*)0))
  FUNC_8(VAR_2);

 return (0);
}
