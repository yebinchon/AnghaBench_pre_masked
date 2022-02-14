
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int FUNC_1 (struct hfi1_devdata*) ;

__attribute__((used)) static inline u64 FUNC_2(struct hfi1_devdata *VAR_22,
        u16 VAR_23)
{
 u64 VAR_24;


 if (FUNC_0(VAR_2))
  return 0;

 VAR_24 =
 VAR_13
 | VAR_14
 | VAR_18
 | VAR_19
 | VAR_12

 | VAR_15

 | VAR_20
 | VAR_21
 | VAR_16
 | VAR_17
 | VAR_5
 | VAR_10
 | VAR_8
 | VAR_9
 | VAR_11
 | VAR_6;

 if (VAR_23 == VAR_4)
  VAR_24 |=

   VAR_15 |

   VAR_1;
 else if (VAR_23 != VAR_3)
  VAR_24 |= VAR_0;


 if (!FUNC_1(VAR_22))
  VAR_24 |= VAR_7;

 return VAR_24;
}
