
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct hfi1_devdata {int dc8051_timed_out; int dc8051_lock; scalar_t__ dc_shutdown; } ;


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
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*,char*,scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__,int) ;
 unsigned long VAR_26 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct hfi1_devdata *VAR_27, u32 VAR_28, u64 VAR_29,
      u64 *VAR_30)
{
 u64 VAR_31, VAR_32;
 int VAR_33;
 unsigned long VAR_34;

 FUNC_3(VAR_0, "type %d, data 0x%012llx", VAR_28, VAR_29);

 FUNC_5(&VAR_27->dc8051_lock);


 if (VAR_27->dc_shutdown) {
  VAR_33 = -VAR_21;
  goto fail;
 }
 if (VAR_27->dc8051_timed_out) {
  if (VAR_27->dc8051_timed_out > 1) {
   FUNC_2(VAR_27,
       "Previous 8051 host command timed out, skipping command %u\n",
       VAR_28);
   VAR_33 = -VAR_22;
   goto fail;
  }
  FUNC_0(VAR_27);
  FUNC_1(VAR_27);
 }
 if (VAR_28 == VAR_25) {
  VAR_29 |= ((*VAR_30) & 0xffffffffffull) << 8;

  VAR_31 = FUNC_7(VAR_27, VAR_2);
  VAR_31 &= VAR_3;
  VAR_31 |= ((((*VAR_30) >> 40) & 0xff) <<
    VAR_4)
        | ((((*VAR_30) >> 48) & 0xffff) <<
    VAR_5);
  FUNC_10(VAR_27, VAR_2, VAR_31);
 }





 VAR_31 = ((u64)VAR_28 & VAR_13)
   << VAR_14
  | (VAR_29 & VAR_10)
   << VAR_11;
 FUNC_10(VAR_27, VAR_9, VAR_31);
 VAR_31 |= VAR_12;
 FUNC_10(VAR_27, VAR_9, VAR_31);


 VAR_34 = VAR_26 + FUNC_4(VAR_1);
 while (1) {
  VAR_31 = FUNC_7(VAR_27, VAR_15);
  VAR_32 = VAR_31 & VAR_16;
  if (VAR_32)
   break;
  if (FUNC_8(VAR_26, VAR_34)) {
   VAR_27->dc8051_timed_out++;
   FUNC_2(VAR_27, "8051 host command %u timeout\n", VAR_28);
   if (VAR_30)
    *VAR_30 = 0;
   VAR_33 = -VAR_23;
   goto fail;
  }
  FUNC_9(2);
 }

 if (VAR_30) {
  *VAR_30 = (VAR_31 >> VAR_20)
    & VAR_19;
  if (VAR_28 == VAR_24) {

   *VAR_30 |= (FUNC_7(VAR_27, VAR_6)
    & VAR_8)
    << (48
        - VAR_7);
  }
 }
 VAR_33 = (VAR_31 >> VAR_18)
    & VAR_17;
 VAR_27->dc8051_timed_out = 0;



 FUNC_10(VAR_27, VAR_9, 0);

fail:
 FUNC_6(&VAR_27->dc8051_lock);
 return VAR_33;
}
