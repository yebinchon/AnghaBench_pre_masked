
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfjail {int flags; scalar_t__* comparam; scalar_t__ pstatus; int * comline; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct cfjail* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct cfjail*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cfjail*,char*) ;
 int FUNC_7 (struct cfjail*,char*,int *,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct cfjail*,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

int
FUNC_9(struct cfjail *VAR_8)
{
 struct cfjail *VAR_9;
 int VAR_10;

 if (!(VAR_8->flags & VAR_2))
  return 0;
 VAR_8->flags &= ~VAR_2;
 if (*VAR_8->comparam == VAR_0) {
  VAR_8->flags &= ~VAR_3;
  VAR_8->pstatus = 0;
  return 0;
 }
 VAR_4++;
 if (!FUNC_0(&VAR_6)) {
  VAR_9 = FUNC_1(&VAR_6);
  VAR_9->flags |= VAR_1;
  FUNC_8(VAR_9, &VAR_5);
 }
 VAR_10 = 0;
 if (VAR_8->flags & VAR_3) {
  VAR_8->flags &= ~VAR_3;
  if (*VAR_8->comparam != VAR_0) {
   FUNC_7(VAR_8, "%s: timed out", VAR_8->comline);
   FUNC_4(VAR_8);
   VAR_10 = -1;
  } else if (VAR_7 > 0)
   FUNC_6(VAR_8, "timed out\n");
 } else if (VAR_8->pstatus != 0) {
  if (FUNC_2(VAR_8->pstatus))
   FUNC_7(VAR_8, "%s: exited on signal %d",
       VAR_8->comline, FUNC_3(VAR_8->pstatus));
  else
   FUNC_7(VAR_8, "%s: failed", VAR_8->comline);
  VAR_8->pstatus = 0;
  FUNC_4(VAR_8);
  VAR_10 = -1;
 }
 FUNC_5(VAR_8->comline);
 VAR_8->comline = ((void*)0);
 return VAR_10;
}
