
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 int VAR_2;
 uint16_t VAR_3;

 switch (FUNC_3(VAR_0)) {




 case 128:
  for (VAR_2 = 0, VAR_3 = 0; VAR_2 < 64; VAR_2++)
   VAR_3 |= FUNC_2(VAR_1);
  break;
 }

 FUNC_0(FUNC_1(VAR_0), VAR_1);
}
