
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hfi1_devdata {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct hfi1_devdata *VAR_2)
{
 u8 VAR_3 =
  VAR_2->revision >> VAR_1
   & VAR_0;
 return (VAR_3 & 0xf0) == 0;
}
