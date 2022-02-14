
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nd_cmd_clear_error {int cleared; int length; } ;
struct nd_cmd_ars_status {int out_length; int flags; } ;


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

__attribute__((used)) static int FUNC_0(void *VAR_14, unsigned int VAR_15, u32 VAR_16)
{
 struct nd_cmd_clear_error *VAR_17;
 struct nd_cmd_ars_status *VAR_18;
 u16 VAR_19;

 switch (VAR_15) {
 case 131:
  if ((VAR_16 & 0xffff) == VAR_7)
   return -VAR_4;


  if (VAR_16 & 0xffff)
   return -VAR_2;


  VAR_19 = VAR_5 | VAR_6;
  if ((VAR_16 >> 16 & VAR_19) == 0)
   return -VAR_4;
  return 0;
 case 130:

  if ((VAR_16 & 0xffff) == VAR_9)
   return -VAR_1;


  if (VAR_16 & 0xffff)
   return -VAR_2;
  return 0;
 case 129:
  VAR_18 = VAR_14;

  if (VAR_16 & 0xffff)
   return -VAR_2;

  if (VAR_16 == VAR_11)
   return 0;


  if (VAR_16 == VAR_10)
   return -VAR_1;


  if (VAR_16 == VAR_13)
   return -VAR_0;






  if (VAR_16 == VAR_12) {
   if (VAR_18->out_length >= 40 && (VAR_18->flags
      & VAR_8))
    return -VAR_3;
   return 0;
  }


  if (VAR_16 >> 16)
   return -VAR_2;
  return 0;
 case 128:
  VAR_17 = VAR_14;
  if (VAR_16 & 0xffff)
   return -VAR_2;
  if (!VAR_17->cleared)
   return -VAR_2;
  if (VAR_17->length > VAR_17->cleared)
   return VAR_17->cleared;
  return 0;
 default:
  break;
 }


 if (VAR_16)
  return -VAR_2;
 return 0;
}
