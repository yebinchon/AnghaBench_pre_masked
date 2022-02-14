
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {scalar_t__ icode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct hfi1_devdata*) ;

int FUNC_1(struct hfi1_devdata *VAR_15)
{

 if (VAR_15->icode != VAR_6) {
  VAR_9 = 0;
  VAR_11 = 0;
  VAR_13 = 0;
 }


 if (VAR_15->icode == VAR_5)
  VAR_7 = 0;

 if (!VAR_8) {
  if (VAR_15->icode == VAR_6)
   VAR_8 = VAR_0;
  else
   VAR_8 = VAR_1;
 }
 if (!VAR_10)
  VAR_10 = VAR_2;
 if (!VAR_14)
  VAR_14 = VAR_4;
 if (!VAR_12)
  VAR_12 = VAR_3;

 return FUNC_0(VAR_15);
}
