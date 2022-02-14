
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmufreq_softc {int curfreq; } ;
struct cf_setting {int dev; int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pmufreq_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, struct cf_setting *VAR_2)
{
 struct pmufreq_softc *VAR_3;

 if (VAR_2 == ((void*)0))
  return (VAR_0);
 VAR_3 = FUNC_0(VAR_1);

 VAR_2->freq = VAR_3->curfreq;
 VAR_2->dev = VAR_1;

 return (0);
}
