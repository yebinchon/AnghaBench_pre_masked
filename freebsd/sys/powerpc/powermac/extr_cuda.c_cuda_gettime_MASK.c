
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct cuda_softc {int sc_rtc; int sc_mutex; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cuda_softc*,int,int,int *) ;
 struct cuda_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int *,int ,char*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, struct timespec *VAR_4)
{
 struct cuda_softc *VAR_5 = FUNC_1(VAR_3);
 uint8_t VAR_6[] = {VAR_1, VAR_0};

 FUNC_2(&VAR_5->sc_mutex);
 VAR_5->sc_rtc = -1;
 FUNC_0(VAR_5, 1, 2, VAR_6);
 if (VAR_5->sc_rtc == -1)
  FUNC_3(&VAR_5->sc_rtc, &VAR_5->sc_mutex, 0, "rtc", 100);

 VAR_4->tv_sec = VAR_5->sc_rtc - VAR_2;
 VAR_4->tv_nsec = 0;
 FUNC_4(&VAR_5->sc_mutex);

 return (0);
}
