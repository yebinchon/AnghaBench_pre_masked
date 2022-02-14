
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carp_softc {scalar_t__ sc_sendad_errors; scalar_t__ sc_sendad_success; TYPE_1__* sc_carpdev; } ;
typedef int fmt ;
struct TYPE_2__ {int if_xname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*,int,...) ;

__attribute__((used)) static void
FUNC_2(struct carp_softc *VAR_5, int VAR_6)
{

 if (VAR_6) {
  if (VAR_5->sc_sendad_errors < VAR_3)
   VAR_5->sc_sendad_errors++;
  if (VAR_5->sc_sendad_errors == VAR_0) {
   static const char VAR_7[] = "send error %d on %s";
   char VAR_8[sizeof(VAR_7) + VAR_2];

   FUNC_1(VAR_8, VAR_7, VAR_6, VAR_5->sc_carpdev->if_xname);
   FUNC_0(VAR_4, VAR_8);
  }
  VAR_5->sc_sendad_success = 0;
 } else {
  if (VAR_5->sc_sendad_errors >= VAR_0 &&
      ++VAR_5->sc_sendad_success >= VAR_1) {
   static const char VAR_9[] = "send ok on %s";
   char VAR_10[sizeof(VAR_9) + VAR_2];

   FUNC_1(VAR_10, VAR_9, VAR_5->sc_carpdev->if_xname);
   FUNC_0(-VAR_4, VAR_10);
   VAR_5->sc_sendad_errors = 0;
  } else
   VAR_5->sc_sendad_errors = 0;
 }
}
