
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_0 (struct hfi1_devdata*,int ,int ,int*) ;

void FUNC_1(struct hfi1_devdata *VAR_9, u8 *VAR_10, u8 *VAR_11,
        u8 *VAR_12)
{
 u32 VAR_13;

 FUNC_0(VAR_9, VAR_1, VAR_0, &VAR_13);
 *VAR_10 = (VAR_13 >> VAR_3) &
  VAR_2;
 *VAR_11 = (VAR_13 >> VAR_5) &
  VAR_4;

 FUNC_0(VAR_9, VAR_8, VAR_0, &VAR_13);
 *VAR_12 = (VAR_13 >> VAR_7) &
  VAR_6;
}
