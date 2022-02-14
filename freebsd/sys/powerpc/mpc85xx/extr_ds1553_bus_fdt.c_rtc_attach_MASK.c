
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct ds1553_softc {int sc_mtx; int * res; int rid; int sc_bsh; int sc_bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (struct ds1553_softc*,int) ;
 int FUNC_3 (int ,int) ;
 struct ds1553_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct timespec*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_5)
{
 struct timespec VAR_6;
 struct ds1553_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_5);
 FUNC_2(VAR_7, sizeof(struct ds1553_softc));

 FUNC_9(&VAR_7->sc_mtx, "rtc_mtx", ((void*)0), VAR_1);

 VAR_7->res = FUNC_0(VAR_5, VAR_3, &VAR_7->rid,
     VAR_2);
 if (VAR_7->res == ((void*)0)) {
  FUNC_5(VAR_5, "cannot allocate resources\n");
  FUNC_8(&VAR_7->sc_mtx);
  return (VAR_0);
 }

 VAR_7->sc_bst = FUNC_11(VAR_7->res);
 VAR_7->sc_bsh = FUNC_10(VAR_7->res);

 if ((VAR_8 = FUNC_6(VAR_5)) != 0) {
  FUNC_5(VAR_5, "cannot attach time of day clock\n");
  FUNC_1(VAR_5, VAR_3, VAR_7->rid, VAR_7->res);
  FUNC_8(&VAR_7->sc_mtx);
  return (VAR_8);
 }

 FUNC_3(VAR_5, 1000000);

 if (VAR_4) {
  FUNC_7(VAR_5, &VAR_6);
  FUNC_5(VAR_5, "current time: %ld.%09ld\n",
      (long)VAR_6.tv_sec, VAR_6.tv_nsec);
 }

 return (0);
}
