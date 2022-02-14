
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcr_softc {int dummy; } ;
struct cf_setting {int* spec; int dev; int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pmcr_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_6, struct cf_setting *VAR_7, int *VAR_8)
{
 struct pmcr_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
  return (VAR_2);
 if (*VAR_8 < VAR_3)
  return (VAR_1);


 FUNC_1(VAR_7, VAR_0, sizeof(*VAR_7) * VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_7[VAR_10].freq = VAR_4[VAR_10];
  VAR_7[VAR_10].spec[0] = VAR_5[VAR_10];
  VAR_7[VAR_10].spec[1] = VAR_10;
  VAR_7[VAR_10].dev = VAR_6;
 }
 *VAR_8 = VAR_3;

 return (0);
}
