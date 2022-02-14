
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, int VAR_2, enum intr_trigger VAR_3,
    enum intr_polarity VAR_4)
{
 int VAR_5;





 if ((VAR_2 < VAR_0) && (FUNC_1(VAR_2) == ((void*)0))) {
  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
  if (VAR_5 != 0)
   return (VAR_5);
  FUNC_2(VAR_2);
 }
 return (FUNC_0(VAR_2, VAR_3, VAR_4));
}
