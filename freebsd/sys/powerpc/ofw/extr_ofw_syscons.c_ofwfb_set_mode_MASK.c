
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
struct ofwfb_softc {int sc_depth; int sc_va; int sc_node; } ;
typedef int name ;
typedef int ihandle_t ;
struct TYPE_2__ {int blue; int green; int red; } ;


 int FUNC_0 (char*,int ,int,int,int ,int ,int ,int,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_5(video_adapter_t *VAR_3, int VAR_4)
{
 struct ofwfb_softc *VAR_5;
 char VAR_6[64];
 ihandle_t VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = (struct ofwfb_softc *)VAR_3;

 if (VAR_2) {




  FUNC_3(VAR_6, 0, sizeof(VAR_6));
  FUNC_2(VAR_5->sc_node, VAR_6, sizeof(VAR_6));
  VAR_7 = FUNC_1(VAR_6);

  if (VAR_5->sc_depth == 8) {




   for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
    FUNC_0("color!", VAR_7, 4, 1,
         VAR_1[VAR_8].red,
         VAR_1[VAR_8].green,
         VAR_1[VAR_8].blue,
         VAR_8,
         &VAR_9);
   }
  }
 }

 FUNC_4(&VAR_5->sc_va, VAR_0);

 return (0);
}
