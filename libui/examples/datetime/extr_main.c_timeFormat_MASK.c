
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDateTimePicker ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

const char *FUNC_0(uiDateTimePicker *VAR_3)
{
 const char *VAR_4;

 if (VAR_3 == VAR_0)
  VAR_4 = "%c";
 else if (VAR_3 == VAR_1)
  VAR_4 = "%x";
 else if (VAR_3 == VAR_2)
  VAR_4 = "%X";
 else
  VAR_4 = "";
 return VAR_4;
}
