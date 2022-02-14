
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hfi1_devdata *VAR_4, u16 VAR_5,
     u8 VAR_6)
{
 u32 VAR_7;

 VAR_7 = ((u32)VAR_5 << VAR_2)
  | ((u32)VAR_6 << VAR_3);
 return FUNC_0(VAR_4, VAR_1, VAR_0, VAR_7);
}
