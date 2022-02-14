
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int* func; int pages; } ;
struct i2c_client {int dummy; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int,int ) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_38,
         struct pmbus_driver_info *VAR_39)
{
 int VAR_40;


 if (FUNC_1(VAR_38, 0, VAR_30))
  VAR_39->func[0] |= VAR_18;
 if (FUNC_1(VAR_38, 0, VAR_29))
  VAR_39->func[0] |= VAR_17;
 if (FUNC_1(VAR_38, 0, VAR_22))
  VAR_39->func[0] |= VAR_4;
 if (FUNC_1(VAR_38, 0, VAR_24))
  VAR_39->func[0] |= VAR_6;
 if (VAR_39->func[0]
     && FUNC_0(VAR_38, 0, VAR_34))
  VAR_39->func[0] |= VAR_10;
 if (FUNC_0(VAR_38, 0, VAR_0) &&
     FUNC_1(VAR_38, 0, VAR_20)) {
  VAR_39->func[0] |= VAR_2;
  if (FUNC_0(VAR_38, 0, VAR_32))
   VAR_39->func[0] |= VAR_8;
 }
 if (FUNC_0(VAR_38, 0, VAR_1) &&
     FUNC_1(VAR_38, 0, VAR_21)) {
  VAR_39->func[0] |= VAR_3;
  if (FUNC_0(VAR_38, 0, VAR_33))
   VAR_39->func[0] |= VAR_9;
 }
 if (FUNC_1(VAR_38, 0, VAR_26))
  VAR_39->func[0] |= VAR_14;
 if (FUNC_1(VAR_38, 0, VAR_27))
  VAR_39->func[0] |= VAR_15;
 if (FUNC_1(VAR_38, 0, VAR_28))
  VAR_39->func[0] |= VAR_16;
 if (VAR_39->func[0] & (VAR_14 | VAR_15
        | VAR_16)
     && FUNC_0(VAR_38, 0,
      VAR_36))
   VAR_39->func[0] |= VAR_12;


 for (VAR_40 = 0; VAR_40 < VAR_39->pages; VAR_40++) {
  if (FUNC_1(VAR_38, VAR_40, VAR_31)) {
   VAR_39->func[VAR_40] |= VAR_19;
   if (FUNC_0(VAR_38, VAR_40,
            VAR_37))
    VAR_39->func[VAR_40] |= VAR_13;
  }
  if (FUNC_1(VAR_38, VAR_40, VAR_23)) {
   VAR_39->func[VAR_40] |= VAR_5;
   if (FUNC_0(VAR_38, 0,
            VAR_35))
    VAR_39->func[VAR_40] |= VAR_11;
  }
  if (FUNC_1(VAR_38, VAR_40, VAR_25))
   VAR_39->func[VAR_40] |= VAR_7;
 }
}
