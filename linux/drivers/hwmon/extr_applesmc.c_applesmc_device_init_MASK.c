
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int has_accelerometer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_4;
 u8 VAR_5[2];

 if (!VAR_3.has_accelerometer)
  return;

 for (VAR_4 = VAR_0; VAR_4 > 0; VAR_4 -= VAR_1) {
  if (!FUNC_0(VAR_2, VAR_5, 2) &&
    (VAR_5[0] != 0x00 || VAR_5[1] != 0x00))
   return;
  VAR_5[0] = 0xe0;
  VAR_5[1] = 0x00;
  FUNC_1(VAR_2, VAR_5, 2);
  FUNC_2(VAR_1);
 }

 FUNC_3("failed to init the device\n");
}
