
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmufreq_softc {int minfreq; int maxfreq; } ;
struct cf_setting {void* lat; void* dev; int freq; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 struct pmufreq_softc* FUNC_0 (void*) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, struct cf_setting *VAR_5, int *VAR_6)
{
 struct pmufreq_softc *VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_2);
 if (*VAR_6 < 2)
  return (VAR_1);


 FUNC_1(VAR_5, VAR_0, sizeof(*VAR_5) * 2);

 VAR_5[0].freq = VAR_7->maxfreq; VAR_5[0].dev = VAR_4;
 VAR_5[1].freq = VAR_7->minfreq; VAR_5[1].dev = VAR_4;

 VAR_5[0].lat = VAR_3;
 VAR_5[1].lat = VAR_3;
 *VAR_6 = 2;

 return (0);
}
