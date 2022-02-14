
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int s32 ;





 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

const s32 *FUNC_0(u32 VAR_6, u32 VAR_7)
{
 bool VAR_8 = VAR_7 == VAR_0;
 const s32 *VAR_9;

 switch (VAR_6) {
 case 128:
  VAR_9 = VAR_8 ? VAR_4 : VAR_5;
  break;
 case 129:
  VAR_9 = VAR_8 ? VAR_2 : VAR_3;
  break;
 case 130:
  VAR_9 = VAR_1;
  break;
 default:
  VAR_9 = ((void*)0);
  break;
 }

 return VAR_9;
}
