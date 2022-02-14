
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{

 if (FUNC_3(FUNC_2(VAR_2), "rtc") == 0) {

  if (FUNC_1(VAR_2) != ((void*)0) &&
      FUNC_3(FUNC_1(VAR_2), "bq4802") == 0)
   return (VAR_0);
  FUNC_0(VAR_2, VAR_1);
  return (0);
 }

 return (VAR_0);
}
