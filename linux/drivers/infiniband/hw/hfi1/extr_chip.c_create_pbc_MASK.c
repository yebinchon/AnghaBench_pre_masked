
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_pportdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hfi1_pportdata*,int,int) ;
 scalar_t__ FUNC_1 (int) ;

u64 FUNC_2(struct hfi1_pportdata *VAR_7, u64 VAR_8, int VAR_9, u32 VAR_10,
        u32 VAR_11)
{
 u64 VAR_12, VAR_13 = 0;

 if (FUNC_1(VAR_9))
  VAR_13 = FUNC_0(VAR_7, VAR_9, VAR_11);

 VAR_12 = VAR_8
  | (VAR_13 << VAR_4)
  | ((u64)VAR_0 << VAR_1)
  | (VAR_10 & VAR_5) << VAR_6
  | (VAR_11 & VAR_2)
   << VAR_3;

 return VAR_12;
}
