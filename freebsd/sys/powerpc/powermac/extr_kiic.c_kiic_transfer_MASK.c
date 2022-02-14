
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct kiic_softc {int sc_flags; int* sc_data; int sc_resid; int sc_i2c_base; int sc_mutex; int sc_dev; } ;
struct iic_msg {int flags; int len; int* buf; int slave; } ;
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
 int FUNC_0 (int,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 struct kiic_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct kiic_softc*,int ) ;
 int FUNC_4 (struct kiic_softc*,int ) ;
 int FUNC_5 (struct kiic_softc*,int) ;
 int FUNC_6 (struct kiic_softc*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int ,char*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_17, struct iic_msg *VAR_18, uint32_t VAR_19)
{
 struct kiic_softc *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 uint16_t VAR_25;
 uint8_t VAR_26;

 VAR_20 = FUNC_1(VAR_17);
 VAR_23 = 100;
 VAR_26 = 0;

 FUNC_7(&VAR_20->sc_mutex);

 if (VAR_20->sc_flags & VAR_5)
  FUNC_8(VAR_17, &VAR_20->sc_mutex, 0, "kiic", VAR_23);

 if (VAR_20->sc_flags & VAR_5) {
  FUNC_9(&VAR_20->sc_mutex);
  return (VAR_3);
 }

 VAR_20->sc_flags = VAR_5;


 FUNC_6(VAR_20, VAR_14, FUNC_3(VAR_20, VAR_14));
 FUNC_6(VAR_20, VAR_15, 0);

 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
  if (VAR_18[VAR_21].flags & VAR_12) {
   if (VAR_18[VAR_21+1].flags & VAR_13)
    FUNC_4(VAR_20, VAR_6);
   else
    FUNC_4(VAR_20, VAR_11);
   FUNC_0(VAR_18[VAR_21].len == 1, ("oversize I2C message"));
   VAR_26 = VAR_18[VAR_21].buf[0];
   VAR_21++;
  } else {
   FUNC_4(VAR_20, VAR_10);
  }

  VAR_20->sc_data = VAR_18[VAR_21].buf;
  VAR_20->sc_resid = VAR_18[VAR_21].len;
  VAR_20->sc_flags = VAR_5;
  VAR_25 = VAR_18[VAR_21].slave;
  VAR_23 = 1000 + VAR_20->sc_resid * 200;
  VAR_23 += 100000;

  if (VAR_18[VAR_21].flags & VAR_13) {
   VAR_20->sc_flags |= VAR_9;
   VAR_25 |= 1;
  }

  VAR_25 |= VAR_20->sc_i2c_base;

  FUNC_5(VAR_20, (VAR_25 & 0x100) >> 8);
  FUNC_6(VAR_20, VAR_0, VAR_25 & 0xff);
  FUNC_6(VAR_20, VAR_16, VAR_26);

  VAR_22 = FUNC_3(VAR_20, VAR_1) | VAR_7;
  FUNC_6(VAR_20, VAR_1, VAR_22);

  VAR_24 = FUNC_8(VAR_17, &VAR_20->sc_mutex, 0, "kiic", VAR_23);

  VAR_18[VAR_21].len -= VAR_20->sc_resid;

  if ((VAR_20->sc_flags & VAR_8) || VAR_24 == VAR_4) {
   FUNC_2(VAR_20->sc_dev, "I2C error\n");
   VAR_20->sc_flags = 0;
   FUNC_9(&VAR_20->sc_mutex);
   return (VAR_2);
  }
 }

 VAR_20->sc_flags = 0;

 FUNC_9(&VAR_20->sc_mutex);

 return (0);
}
