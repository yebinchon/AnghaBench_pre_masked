
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dqb_ihardlimit; int dqb_isoftlimit; int dqb_curinodes; int dqb_bhardlimit; int dqb_bsoftlimit; int dqb_curblocks; } ;
struct quotause {char* fsname; TYPE_1__ dqblk; struct quotause* next; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,char*,...) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ,int ) ;
 char** VAR_1 ;
 int VAR_2 ;

int
FUNC_9(struct quotause *VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
 struct quotause *VAR_7;
 FILE *VAR_8;

 FUNC_7(VAR_4, 0);
 FUNC_8(VAR_4, 0, VAR_0);
 if ((VAR_8 = FUNC_3(FUNC_0(VAR_4), "w")) == ((void*)0))
  FUNC_1(1, "%s", VAR_2);
 FUNC_6(VAR_8, "Quotas for %s %s:\n", VAR_1[VAR_6], VAR_5);
 for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_7->next) {
  FUNC_6(VAR_8, "%s: in use: %s, ", VAR_7->fsname,
      FUNC_4(VAR_7->dqblk.dqb_curblocks));
  FUNC_6(VAR_8, "limits (soft = %s, ",
      FUNC_4(VAR_7->dqblk.dqb_bsoftlimit));
  FUNC_6(VAR_8, "hard = %s)\n",
      FUNC_4(VAR_7->dqblk.dqb_bhardlimit));
  FUNC_6(VAR_8, "\tinodes in use: %s, ",
      FUNC_5(VAR_7->dqblk.dqb_curinodes));
  FUNC_6(VAR_8, "limits (soft = %s, ",
      FUNC_5(VAR_7->dqblk.dqb_isoftlimit));
  FUNC_6(VAR_8, "hard = %s)\n",
      FUNC_5(VAR_7->dqblk.dqb_ihardlimit));
 }
 FUNC_2(VAR_8);
 return (1);
}
