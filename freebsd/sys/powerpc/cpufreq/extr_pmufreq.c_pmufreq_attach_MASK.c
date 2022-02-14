
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmufreq_softc {int minfreq; int maxfreq; int curfreq; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pmufreq_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct pmufreq_softc *VAR_1;
 phandle_t VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 VAR_1->dev = VAR_0;

 VAR_2 = FUNC_4(FUNC_2(VAR_0));
 FUNC_0(VAR_2, "min-clock-frequency", &VAR_1->minfreq, sizeof(VAR_1->minfreq));
 FUNC_0(VAR_2, "max-clock-frequency", &VAR_1->maxfreq, sizeof(VAR_1->maxfreq));
 FUNC_0(VAR_2, "rounded-clock-frequency", &VAR_1->curfreq, sizeof(VAR_1->curfreq));
 VAR_1->minfreq /= 1000000;
 VAR_1->maxfreq /= 1000000;
 VAR_1->curfreq /= 1000000;

 FUNC_1(VAR_0);
 return (0);
}
