
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle {int unit; } ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,char*,int ) ;
 int FUNC_5 (char*,int,char*,char*,int) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct bundle *VAR_4)
{
  FILE *VAR_5;
  char VAR_6[VAR_1];

  FUNC_5(VAR_6, sizeof VAR_6, "%stun%d.pid", VAR_2, VAR_4->unit);
  VAR_5 = FUNC_0(VAR_6, "w");
  if (VAR_5 != ((void*)0)) {
    FUNC_2(VAR_5, "%d\n", (int)FUNC_3());
    FUNC_1(VAR_5);
  } else
    FUNC_4(VAR_0, "Warning: Can't create %s: %s\n",
               VAR_6, FUNC_6(VAR_3));
}
