
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbiod {int iod_flags; int iod_evlock; int iod_rqlock; int iod_sleeptimo; int iod_td; int iod_scred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct smbiod*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smbiod*) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*,int ,char*,int ) ;

void
FUNC_9(void *VAR_5)
{
 struct smbiod *VAR_6 = VAR_5;

 FUNC_3(&VAR_0);





 VAR_6->iod_td = VAR_4;
 FUNC_6(&VAR_6->iod_scred, VAR_6->iod_td, ((void*)0));
 while ((VAR_6->iod_flags & VAR_3) == 0) {
  FUNC_5(VAR_6);
  FUNC_0("going to sleep for %d ticks\n", VAR_6->iod_sleeptimo);
  if (VAR_6->iod_flags & VAR_3)
   break;
  FUNC_8(&VAR_6->iod_flags, VAR_2, "90idle", VAR_6->iod_sleeptimo);
 }


 FUNC_7(&VAR_6->iod_rqlock);
 FUNC_7(&VAR_6->iod_evlock);
 FUNC_1(VAR_6, VAR_1);
 FUNC_4(&VAR_0);
 FUNC_2(0);
}
