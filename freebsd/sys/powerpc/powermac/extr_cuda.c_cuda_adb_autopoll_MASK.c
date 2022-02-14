
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct cuda_softc {int sc_autopoll; int sc_mutex; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cuda_softc*,int,int,int*) ;
 struct cuda_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u_int
FUNC_4(device_t VAR_2, uint16_t VAR_3) {
 struct cuda_softc *VAR_4 = FUNC_1(VAR_2);

 uint8_t VAR_5[] = {VAR_1, VAR_0, VAR_3 != 0};

 FUNC_2(&VAR_4->sc_mutex);

 if (VAR_5[2] == VAR_4->sc_autopoll) {
  FUNC_3(&VAR_4->sc_mutex);
  return (0);
 }

 VAR_4->sc_autopoll = -1;
 FUNC_0(VAR_4, 1, 3, VAR_5);

 FUNC_3(&VAR_4->sc_mutex);

 return (0);
}
