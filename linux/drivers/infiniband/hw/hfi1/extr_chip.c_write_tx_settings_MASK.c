
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
 int FUNC_0 (struct hfi1_devdata*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hfi1_devdata *VAR_6,
        u8 VAR_7,
        u8 VAR_8,
        u8 VAR_9,
        u8 VAR_10)
{
 u32 VAR_11;


 VAR_11 = VAR_7 << VAR_0
  | VAR_8 << VAR_4
  | VAR_9 << VAR_3
  | VAR_10 << VAR_2;
 return FUNC_0(VAR_6, VAR_5, VAR_1, VAR_11);
}
