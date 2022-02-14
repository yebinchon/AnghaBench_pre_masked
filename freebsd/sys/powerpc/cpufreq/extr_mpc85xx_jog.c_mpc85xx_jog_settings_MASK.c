
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpc85xx_jog_softc {int high; int low; } ;
struct cf_setting {int freq; int* spec; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mpc85xx_jog_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, struct cf_setting *VAR_5, int *VAR_6)
{
 struct mpc85xx_jog_softc *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_2);
 if (*VAR_6 < VAR_7->high - 1)
  return (VAR_1);

 VAR_8 = FUNC_2();

 FUNC_1(VAR_5, VAR_0, sizeof(*VAR_5) * VAR_7->high);

 for (VAR_9 = VAR_7->high; VAR_9 >= VAR_7->low; --VAR_9) {
  VAR_5[VAR_7->high - VAR_9].freq = VAR_8 * VAR_9 / VAR_3;
  VAR_5[VAR_7->high - VAR_9].dev = VAR_4;
  VAR_5[VAR_7->high - VAR_9].spec[0] = VAR_9;
 }
 *VAR_6 = VAR_7->high - VAR_7->low + 1;

 return (0);
}
