
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpc85xx_jog_softc {int cpu; } ;
struct cf_setting {int dev; int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct mpc85xx_jog_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct cf_setting*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, struct cf_setting *VAR_5)
{
 struct mpc85xx_jog_softc *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;

 if (VAR_5 == ((void*)0))
  return (VAR_1);

 VAR_6 = FUNC_2(VAR_4);
 FUNC_3(VAR_5, VAR_0, sizeof(*VAR_5));

 VAR_7 = FUNC_1(VAR_2);
 VAR_8 = FUNC_0(VAR_7, VAR_6->cpu);
 VAR_8 *= FUNC_4();
 VAR_8 /= VAR_3;

 VAR_5->freq = VAR_8;
 VAR_5->dev = VAR_4;

 return (0);
}
