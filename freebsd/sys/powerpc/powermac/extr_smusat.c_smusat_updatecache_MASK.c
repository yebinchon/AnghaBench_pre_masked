
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
struct smusat_softc {int sc_cache; int sc_last_update; } ;
struct iic_msg {int member_1; int member_2; int* member_3; int slave; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smusat_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct iic_msg*,int) ;
 int FUNC_3 (int ,int*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 uint8_t VAR_5 = 0x3f;
 uint8_t VAR_6[16];
 struct smusat_softc *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;
 struct iic_msg VAR_9[2] = {
     {0, VAR_2 | VAR_0, 1, VAR_5},
     {0, VAR_1, 16, VAR_6},
 };

 VAR_9[0].slave = VAR_9[1].slave = FUNC_1(VAR_4);
 VAR_8 = FUNC_2(VAR_4, VAR_9, 2);
 if (VAR_8)
  return (VAR_8);

 VAR_7->sc_last_update = VAR_3;
 FUNC_3(VAR_7->sc_cache, VAR_6, sizeof(VAR_6));
 return (0);
}
