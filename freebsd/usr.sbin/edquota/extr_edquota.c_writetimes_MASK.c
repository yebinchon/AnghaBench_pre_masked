
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dqb_itime; int dqb_btime; } ;
struct quotause {char* fsname; TYPE_1__ dqblk; struct quotause* next; } ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ,int ) ;
 char** VAR_1 ;
 int VAR_2 ;

int
FUNC_8(struct quotause *VAR_3, int VAR_4, int VAR_5)
{
 struct quotause *VAR_6;
 FILE *VAR_7;

 FUNC_6(VAR_4, 0);
 FUNC_7(VAR_4, 0, VAR_0);
 if ((VAR_7 = FUNC_4(FUNC_1(VAR_4), "w")) == ((void*)0))
  FUNC_2(1, "%s", VAR_2);
 FUNC_5(VAR_7, "Time units may be: days, hours, minutes, or seconds\n");
 FUNC_5(VAR_7, "Grace period before enforcing soft limits for %ss:\n",
     VAR_1[VAR_5]);
 for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->next) {
  FUNC_5(VAR_7, "%s: block grace period: %s, ",
      VAR_6->fsname, FUNC_0(VAR_6->dqblk.dqb_btime));
  FUNC_5(VAR_7, "file grace period: %s\n",
      FUNC_0(VAR_6->dqblk.dqb_itime));
 }
 FUNC_3(VAR_7);
 return (1);
}
