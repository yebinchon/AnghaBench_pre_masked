
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bcnt; struct TYPE_5__* nextfs; } ;
typedef TYPE_1__ FS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int,char***) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (int,char***) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*,char) ;

int
FUNC_13(int VAR_4, char *VAR_5[])
{
 FS *VAR_6;
 char *VAR_7;

 (void)FUNC_9(VAR_0, "");

 if (!(VAR_7 = FUNC_12(VAR_5[0], 'o')) || FUNC_11(VAR_7, "od"))
  FUNC_5(VAR_4, &VAR_5);
 else
  FUNC_7(VAR_4, &VAR_5);


 for (VAR_1 = 0, VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->nextfs) {
  VAR_6->bcnt = FUNC_10(VAR_6);
  if (VAR_1 < VAR_6->bcnt)
   VAR_1 = VAR_6->bcnt;
 }

 for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->nextfs)
  FUNC_8(VAR_6);





 FUNC_0();
 if (FUNC_1() < 0)
  FUNC_3(1, "capsicum");

 (void)FUNC_6(VAR_5);
 FUNC_2();
 FUNC_4(VAR_2);
}
