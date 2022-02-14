
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct ds1553_softc {int (* sc_read ) (int ,int ) ;int sc_mtx; int (* sc_write ) (int ,int ,int) ;scalar_t__ year_offset; } ;
struct clocktime {scalar_t__ year; scalar_t__ mon; scalar_t__ day; scalar_t__ dow; scalar_t__ hour; scalar_t__ min; scalar_t__ sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct clocktime*,int) ;
 int FUNC_2 (struct timespec*,struct clocktime*) ;
 struct ds1553_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int ,int) ;

int
FUNC_16(device_t VAR_15, struct timespec *VAR_16)
{
 struct clocktime VAR_17;
 struct ds1553_softc *VAR_18;
 uint8_t VAR_19;

 VAR_18 = FUNC_3(VAR_15);
 FUNC_1(&VAR_17, sizeof(struct clocktime));


 if (VAR_16->tv_nsec >= 500000000)
  VAR_16->tv_sec++;
 VAR_16->tv_nsec = 0;
 FUNC_2(VAR_16, &VAR_17);

 VAR_17.year -= VAR_18->year_offset;

 FUNC_4(&VAR_18->sc_mtx);


 VAR_19 = (*VAR_18->sc_read)(VAR_15, VAR_7) | VAR_0;
 (*VAR_18->sc_write)(VAR_15, VAR_7, VAR_19);

 (*VAR_18->sc_write)(VAR_15, VAR_13, FUNC_0(VAR_17.sec) &
     VAR_6);
 (*VAR_18->sc_write)(VAR_15, VAR_11, FUNC_0(VAR_17.min) &
     VAR_4);
 (*VAR_18->sc_write)(VAR_15, VAR_10, FUNC_0(VAR_17.hour) &
     VAR_3);
 (*VAR_18->sc_write)(VAR_15, VAR_9, FUNC_0(VAR_17.dow + 1) &
     VAR_2);
 (*VAR_18->sc_write)(VAR_15, VAR_8, FUNC_0(VAR_17.day) &
     VAR_1);
 (*VAR_18->sc_write)(VAR_15, VAR_12, FUNC_0(VAR_17.mon) &
     VAR_5);
 (*VAR_18->sc_write)(VAR_15, VAR_14, FUNC_0(VAR_17.year));


 VAR_19 &= ~VAR_0;
 (*VAR_18->sc_write)(VAR_15, VAR_7, VAR_19);

 FUNC_5(&VAR_18->sc_mtx);

 return (0);
}
