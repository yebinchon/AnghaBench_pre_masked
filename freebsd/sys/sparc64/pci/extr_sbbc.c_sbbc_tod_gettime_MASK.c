
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct sbbc_softc {int sc_res; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct sbbc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, struct timespec *VAR_4)
{
 struct sbbc_softc *VAR_5;
 bus_space_tag_t VAR_6;
 bus_space_handle_t VAR_7;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_4(VAR_5->sc_res);
 VAR_7 = FUNC_3(VAR_5->sc_res);

 VAR_4->tv_sec = FUNC_0(VAR_0 + FUNC_1(VAR_2)) +
     FUNC_0(VAR_0 + FUNC_1(VAR_1));
 VAR_4->tv_nsec = 0;
 return (0);
}
