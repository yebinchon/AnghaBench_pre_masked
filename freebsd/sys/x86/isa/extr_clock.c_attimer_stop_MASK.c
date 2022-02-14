
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {int et_priv; } ;
struct attimer_softc {scalar_t__ period; int mode; } ;
typedef int device_t ;


 int VAR_0 ;
 struct attimer_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct eventtimer *VAR_1)
{
 device_t VAR_2 = (device_t)VAR_1->et_priv;
 struct attimer_softc *VAR_3 = FUNC_0(VAR_2);

 VAR_3->mode = VAR_0;
 VAR_3->period = 0;
 FUNC_1(VAR_3->mode, VAR_3->period);
 return (0);
}
