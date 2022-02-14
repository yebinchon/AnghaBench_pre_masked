
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5)
{
 int VAR_6;

 if ((VAR_3 == -1 && FUNC_1()) ||
     (VAR_3 == 0))
  return (VAR_2);

 VAR_6 = FUNC_0(FUNC_2(VAR_5), VAR_5, VAR_4);

 if (VAR_6 == VAR_1) {
  FUNC_3(VAR_5, "AT realtime clock");
  return (VAR_0);
 }
 return (VAR_6);
}
