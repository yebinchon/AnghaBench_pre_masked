
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmufreq_softc {scalar_t__ maxfreq; scalar_t__ curfreq; } ;
struct cf_setting {scalar_t__ freq; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pmufreq_softc* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, const struct cf_setting *VAR_2)
{
 struct pmufreq_softc *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->freq == VAR_3->maxfreq)
  VAR_5 = 0;
 else
  VAR_5 = 1;

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 == 0)
  VAR_3->curfreq = VAR_2->freq;

 return (VAR_4);
}
