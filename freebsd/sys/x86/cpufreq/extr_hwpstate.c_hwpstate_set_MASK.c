
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwpstate_softc {int cfnum; struct hwpstate_setting* hwpstate_settings; } ;
struct hwpstate_setting {int pstate_id; int freq; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct hwpstate_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, const struct cf_setting *VAR_2)
{
 struct hwpstate_softc *VAR_3;
 struct hwpstate_setting *VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0))
  return (VAR_0);
 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = VAR_3->hwpstate_settings;
 for (VAR_5 = 0; VAR_5 < VAR_3->cfnum; VAR_5++)
  if (FUNC_0(VAR_2->freq, VAR_4[VAR_5].freq))
   break;
 if (VAR_5 == VAR_3->cfnum)
  return (VAR_0);

 return (FUNC_2(VAR_1, VAR_4[VAR_5].pstate_id));
}
