
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct timecounter {int tc_priv; } ;
struct attimer_softc {scalar_t__ period; } ;
typedef int register_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct attimer_softc* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static unsigned
FUNC_9(struct timecounter *VAR_12)
{
 device_t VAR_13 = (device_t)VAR_12->tc_priv;
 struct attimer_softc *VAR_14 = FUNC_0(VAR_13);
 register_t VAR_15;
 uint16_t VAR_16;
 u_int VAR_17, VAR_18;

 if (VAR_14->period == 0)
  return (VAR_9 - FUNC_1());


 VAR_15 = FUNC_8();



 FUNC_4(&VAR_6);


 FUNC_6(VAR_3, VAR_4 | VAR_2);

 VAR_18 = FUNC_3(VAR_1);
 VAR_17 = FUNC_3(VAR_1);
 VAR_16 = VAR_9 - ((VAR_17 << 8) | VAR_18);
 if (VAR_16 < VAR_8 ||
     (!VAR_11 && (VAR_5 ||
     ((VAR_16 < 20 || (!(VAR_15 & VAR_0) &&
     VAR_16 < VAR_9 / 2u)) &&
     &FUNC_2 != ((void*)0) && FUNC_2(VAR_7))))) {
  VAR_11 = 1;
  VAR_10 += VAR_9;
 }
 VAR_8 = VAR_16;
 VAR_16 += VAR_10;
 FUNC_5(&VAR_6);
 return (VAR_16);
}
