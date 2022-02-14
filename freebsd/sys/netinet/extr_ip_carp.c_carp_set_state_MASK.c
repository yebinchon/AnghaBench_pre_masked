
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carp_softc {int sc_state; int sc_vhid; TYPE_1__* sc_carpdev; } ;
struct TYPE_2__ {char* if_xname; } ;


 int FUNC_0 (struct carp_softc*) ;
 int FUNC_1 (char*,char*,char const*,char const*,char const*) ;
 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,char const*,int *) ;
 int FUNC_3 (char*,int,char*,int,char*) ;

__attribute__((used)) static void
FUNC_4(struct carp_softc *VAR_2, int VAR_3, const char *VAR_4)
{

 FUNC_0(VAR_2);

 if (VAR_2->sc_state != VAR_3) {
  const char *VAR_5[] = { VAR_0 };
  char VAR_6[VAR_1+5];

  FUNC_3(VAR_6, VAR_1+5, "%u@%s", VAR_2->sc_vhid,
      VAR_2->sc_carpdev->if_xname);

  FUNC_1("%s: %s -> %s (%s)\n", VAR_6,
      VAR_5[VAR_2->sc_state], VAR_5[VAR_3], VAR_4);

  VAR_2->sc_state = VAR_3;

  FUNC_2("CARP", VAR_6, VAR_5[VAR_3], ((void*)0));
 }
}
