
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct hfi1_ctxtdata {int ctxt; int dd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;

bool FUNC_2(struct hfi1_ctxtdata *VAR_2)
{
 u64 VAR_3;
 u32 VAR_4 = VAR_1 + VAR_2->ctxt;
 u8 VAR_5 = VAR_4 % 64;

 VAR_3 = FUNC_1(VAR_2->dd, VAR_0 + (8 * (VAR_4 / 64)));
 return !(VAR_3 & FUNC_0(VAR_5));
}
