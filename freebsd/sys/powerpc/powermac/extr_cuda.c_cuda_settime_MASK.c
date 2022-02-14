
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct timespec {scalar_t__ tv_sec; } ;
struct cuda_softc {int sc_mutex; } ;
typedef int sec ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cuda_softc*,int ,int,int *) ;
 struct cuda_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, struct timespec *VAR_4)
{
 struct cuda_softc *VAR_5 = FUNC_1(VAR_3);
 uint8_t VAR_6[] = {VAR_1, VAR_0, 0, 0, 0, 0};
 uint32_t VAR_7;

 VAR_7 = VAR_4->tv_sec + VAR_2;
 FUNC_2(&VAR_6[2], &VAR_7, sizeof(VAR_7));

 FUNC_3(&VAR_5->sc_mutex);
 FUNC_0(VAR_5, 0, 6, VAR_6);
 FUNC_4(&VAR_5->sc_mutex);

 return (0);
}
