
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


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
 int FUNC_0 (struct hfi1_devdata*,char*,char const*) ;
 int FUNC_1 (struct hfi1_devdata*,char*,char const*) ;
 unsigned long VAR_19 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct hfi1_devdata*,int ,int) ;
 int FUNC_7 (struct hfi1_devdata*,int ,int const*,int ) ;

__attribute__((used)) static int FUNC_8(struct hfi1_devdata *VAR_20, const char *VAR_21,
     const u8 *VAR_22)
{
 unsigned long VAR_23;
 u64 VAR_24;
 u32 VAR_25;
 int VAR_26 = 0;


 FUNC_7(VAR_20, VAR_8, VAR_22, VAR_3);


 FUNC_6(VAR_20, VAR_7, VAR_13);





 VAR_25 = (FUNC_4(VAR_20, VAR_4)
      & VAR_6)
        >> VAR_5;
 if (VAR_25 != VAR_18) {
  FUNC_0(VAR_20, "%s security engine not idle - giving up\n",
      VAR_21);
  return -VAR_0;
 }


 FUNC_6(VAR_20, VAR_7, VAR_14);
 VAR_23 = FUNC_2(VAR_15) + VAR_19;
 while (1) {
  VAR_25 = (FUNC_4(VAR_20, VAR_4)
      & VAR_6)
        >> VAR_5;

  if (VAR_25 == VAR_18) {

   FUNC_0(VAR_20, "%s firmware security bad idle state\n",
       VAR_21);
   VAR_26 = -VAR_1;
   break;
  } else if (VAR_25 == VAR_16) {

   break;
  } else if (VAR_25 == VAR_17) {

   VAR_26 = -VAR_1;
   break;
  }


  if (FUNC_5(VAR_19, VAR_23)) {





   FUNC_0(VAR_20, "%s firmware security time out\n", VAR_21);
   VAR_26 = -VAR_2;
   break;
  }

  FUNC_3(20);
 }







 FUNC_6(VAR_20, VAR_9,
    VAR_11 |
    VAR_12);





 VAR_24 = FUNC_4(VAR_20, VAR_10);
 if (VAR_26) {
  if (VAR_24 & VAR_11)
   FUNC_1(VAR_20, "%s firmware authorization failed\n",
        VAR_21);
  if (VAR_24 & VAR_12)
   FUNC_1(VAR_20, "%s firmware key mismatch\n", VAR_21);
 }

 return VAR_26;
}
