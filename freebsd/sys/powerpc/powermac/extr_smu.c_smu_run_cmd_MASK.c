
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct smu_softc {scalar_t__ sc_doorbellirqid; int sc_mtx; int sc_cmdq; struct smu_cmd* sc_cur_cmd; } ;
struct smu_cmd {int cmd; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct smu_cmd*,int ) ;
 int FUNC_2 (int *,struct smu_cmd*,int ,int ) ;
 int VAR_1 ;
 struct smu_softc* FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct smu_cmd*) ;
 int FUNC_8 (struct smu_cmd*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, struct smu_cmd *VAR_5, int VAR_6)
{
 struct smu_softc *VAR_7;
 uint8_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_4);
 VAR_8 = VAR_5->cmd;

 FUNC_4(&VAR_7->sc_mtx);
 if (VAR_7->sc_cur_cmd != ((void*)0)) {
  FUNC_1(&VAR_7->sc_cmdq, VAR_5, VAR_1);
 } else
  FUNC_7(VAR_4, VAR_5);
 FUNC_5(&VAR_7->sc_mtx);

 if (!VAR_6)
  return (0);

 if (VAR_7->sc_doorbellirqid < 0) {

  do {
   FUNC_0(50);
   FUNC_6(VAR_4);
  } while (VAR_7->sc_cur_cmd != ((void*)0));
 } else {

  VAR_9 = FUNC_8(VAR_5, 0, "smu", 800 * VAR_2 / 1000);
  if (VAR_9 != 0)
   FUNC_6(VAR_4);

  if (VAR_9 != 0) {
      FUNC_4(&VAR_7->sc_mtx);
      if (VAR_5->cmd == VAR_8) {

   if (VAR_7->sc_cur_cmd == VAR_5)
    VAR_7->sc_cur_cmd = ((void*)0);
   else
    FUNC_2(&VAR_7->sc_cmdq, VAR_5, VAR_3,
        VAR_1);
   FUNC_5(&VAR_7->sc_mtx);
   return (VAR_9);
      }
      VAR_9 = 0;
      FUNC_5(&VAR_7->sc_mtx);
  }
 }


 if (VAR_5->cmd == ((~VAR_8) & 0xff))
  VAR_9 = 0;
 else
  VAR_9 = VAR_0;

 return (VAR_9);
}
