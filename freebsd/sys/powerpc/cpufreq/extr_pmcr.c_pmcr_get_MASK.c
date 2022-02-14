
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcr_softc {int dummy; } ;
struct cf_setting {int* spec; int dev; int freq; } ;
typedef int register_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pmcr_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_8, struct cf_setting *VAR_9)
{
 struct pmcr_softc *VAR_10;
 register_t VAR_11;
 int VAR_12, VAR_13;

 if (VAR_9 == ((void*)0))
  return (VAR_1);
 VAR_10 = FUNC_0(VAR_8);

 FUNC_1(VAR_9, VAR_0, sizeof(*VAR_9));

 VAR_11 = FUNC_2(VAR_4);

 VAR_13 = (VAR_11 & VAR_2) >> VAR_3;

 for (VAR_12 = 0; VAR_12 < VAR_5 && VAR_7[VAR_12] != VAR_13; VAR_12++)
  ;

 if (VAR_12 == VAR_5)
  return (VAR_1);

 VAR_9->spec[0] = VAR_13;
 VAR_9->spec[1] = VAR_12;
 VAR_9->freq = VAR_6[VAR_12];

 VAR_9->dev = VAR_8;

 return (0);
}
