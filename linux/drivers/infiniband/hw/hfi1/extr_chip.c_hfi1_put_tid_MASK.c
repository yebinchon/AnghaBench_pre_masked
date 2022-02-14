
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {int flags; scalar_t__ rcvarray_wc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (struct hfi1_devdata*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (struct hfi1_devdata*,scalar_t__,scalar_t__,unsigned long,scalar_t__) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

void FUNC_5(struct hfi1_devdata *VAR_9, u32 VAR_10,
    u32 VAR_11, unsigned long VAR_12, u16 VAR_13)
{
 u64 VAR_14;

 if (!(VAR_9->flags & VAR_0))
  goto done;

 if (VAR_11 == VAR_2 || VAR_11 == VAR_3) {
  VAR_12 = 0;
  VAR_13 = 0;
 } else if (VAR_11 > VAR_2) {
  FUNC_0(VAR_9,
      "unexpected receive array type %u for index %u, not handled\n",
      VAR_11, VAR_10);
  goto done;
 }
 FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);


 VAR_14 = VAR_7
  | (u64)VAR_13 << VAR_6
  | ((VAR_12 >> 12) & VAR_4)
     << VAR_5;
 FUNC_3(VAR_9->rcvarray_wc + (VAR_10 * 8), VAR_14);
 FUNC_4(VAR_14, VAR_9->rcvarray_wc + (VAR_10 * 8));

 if (VAR_11 == VAR_1 || VAR_11 == VAR_3 || (VAR_10 & 3) == 3)





  FUNC_1();
done:
 return;
}
