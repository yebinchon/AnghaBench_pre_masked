
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct openpic_softc {int dummy; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct openpic_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct openpic_softc*,int ) ;
 int FUNC_3 (struct openpic_softc*,int ,int ) ;

void
FUNC_4(device_t VAR_4, u_int VAR_5, enum intr_trigger VAR_6,
    enum intr_polarity VAR_7)
{
 struct openpic_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_1(VAR_4);
 VAR_9 = FUNC_2(VAR_8, FUNC_0(VAR_5));
 if (VAR_7 == VAR_0)
  VAR_9 &= ~VAR_2;
 else
  VAR_9 |= VAR_2;
 if (VAR_6 == VAR_1)
  VAR_9 &= ~VAR_3;
 else
  VAR_9 |= VAR_3;
 FUNC_3(VAR_8, FUNC_0(VAR_5), VAR_9);
}
