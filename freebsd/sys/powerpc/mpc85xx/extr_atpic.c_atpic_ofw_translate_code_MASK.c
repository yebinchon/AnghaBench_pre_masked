
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(device_t VAR_6, u_int VAR_7, int VAR_8,
    enum intr_trigger *VAR_9, enum intr_polarity *VAR_10)
{
 switch (VAR_8) {
 case 0:

  *VAR_9 = VAR_5;
  *VAR_10 = VAR_2;
  break;
 case 1:

  *VAR_9 = VAR_5;
  *VAR_10 = VAR_1;
  break;
 case 2:

  *VAR_9 = VAR_4;
  *VAR_10 = VAR_2;
  break;
 case 3:

  *VAR_9 = VAR_4;
  *VAR_10 = VAR_1;
  break;
 default:
  *VAR_9 = VAR_3;
  *VAR_10 = VAR_0;
 }
}
